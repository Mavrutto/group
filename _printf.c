#include "main.h"
/**
 * _printf - produces output to format
 * @format: character string..
 * Return: no of characters printedd
 */
int _printf(const char *format, ...)
{
unsigned int j, s_countt, countt = 0;
va_list list;
va_start(list, format);


for (j = 0; format[j] != '\0'; j++)
{
	if (format[j] != '%')
	{
		my_puttchar(format[j]);
	}
	else if (format[j + 1] == 'c')
	{
		my_puttchar(va_arg(list, int));
		j++;
	}
	else if (format[j + 1]  == 's')
	{
		s_countt = puttts(va_arg(list, char*));
		j++;
		countt += (s_countt - 1);
	}
	else if (format[j + 1] == '%')
	{
		my_puttchar('%');
	}

	countt += 1;
}
va_end(list);
return (countt);
}
