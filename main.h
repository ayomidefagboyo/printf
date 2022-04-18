#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>
#include <stdarg.h>
#include <unistd.h>
int _printf(char *format, ...);
int print_char(va_list lst);
int print_str(va_list lst);
int get_print_func(char *c, va_list lst, int index);
int print_dec(va_list lst);
int print_bi(va_list lst);
int print_udec(va_list lst);
int print_oct(va_list lst);
int print_hexl(va_list lst);
int print_hexup(va_list lst);
int print_rot13(va_list lst);
int print_rev(va_list lst);
void _print_rev_recursion(char *s);
int print_strhex(va_list lst);
int get_hex(char c);
/**
 * struct fmod - contains format specifier and function ptr
 * @fmd: format specifier
 * @f: function pointer to print function
  */
typedef struct fmod
{
	char fmd;
	int (*f)(va_list);
} fmod_t;

int _putchar(char c);
#endif
