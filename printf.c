#include "main.h"
/**
 * _printf - prints anything
 *@format: string passed to function
 *Return: count of characters printed
 * if "success", -1 if "failure"
 */


	/*create struct that searches for modifier match and returns functions*/
int _printf(char *format, ...)
{
	int i, count;/*index and char count*/
	va_list lst;

	if (format == NULL)
	{
		return (-1);
	}
	/*loop through format and print chars along the way*/
	va_start(lst, format);
	for (i = 0, count = 0; format[i]; i++)
	{
	/*search for % and then check if following letters match*/
		if (format[i] == '%' && format[i + 1] != '%' &&
		    format[i + 1] != '\0')
		{
			i++;
			count += get_print_func(format, lst, i);
		}
		/*if there are two % signs*/
		else if (format[i] == '%' && format[i + 1] == '%')
		{
			_putchar('%');
			count++;
			i++;
		}
		else if (format[i] == '%' && (format[i + 1] == '\0'
					     || format[i + 1] == ' '))
		{
			return (-1);
		}

		else
		{
			_putchar(format[i]);
			count++;
		}
	}
	va_end(lst);
	return (count);
}
