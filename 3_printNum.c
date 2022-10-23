#include "main.h"

/**
 * printNum - Prints an integer
 * @num: Integer to print
 *
 * Return: Number of characters printed
 */
int printNum(int num)
{	int chars;
	int num1;
	char *p;
	int i;

	chars = 0;
	num1 = num;

	while (num1 != 0)
	{
		++chars;
		num1 /= 10;
	}
	num1 = num;
	if (num1 < 0)
	{
		_putchar('-');
		num1 *= -1;
	}

	p = malloc(sizeof(char) * chars);
	for (i = 0; i < chars; i++, ++p)
	{
		*p = num1 % 10;
		num1 = num1 / 10;
	}
	--p;
	for (i = 0; i < chars; i++, --p)
	{
		_putchar('0' + *p);

	}
	++p;
	free(p);
	if (num < 0)
		return (chars + 1);

	return (chars);
}
