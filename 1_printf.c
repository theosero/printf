#include "main.h"

/**
 * _printf - Prints formatted string
 * @format: Print format
 *
 * Return: Number of characters printed excluding
 * null character
 */
int _printf(const char *format, ...)
{
	int numChars;
	int num;
	char c;
	char *s;
	va_list ap;

	numChars = 0;

	if (format == NULL)
	{
		return (0);
	}
	va_start(ap, format);

	while (*format != '\0')
	{
		if (*format != '%')
		{
			_putchar(*format);
			++numChars;
			++format;
			continue;
		}

		if (*(format + 1) == '\0')
			break;

		switch (*(format + 1))
		{
			case 'c':
				c = va_arg(ap, int);
				_putchar(c);
				++numChars;
				break;
			case 's':
				s = va_arg(ap, char *);
				numChars += printString(s);
				break;
			case '%':
				_putchar('%');
				++numChars;
				break;
			case 'd':
			case 'i':
				num = va_arg(ap, int);
				numChars += printNum(num);
				break;
		 
		}
		format += 2;
	}
	va_end(ap);
	return (numChars);
}
