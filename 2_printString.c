#include "main.h"

/**
 * printString - Outputs an array of characters to stdout
 * @s: Pointer to char
 *
 * Return: Number of chars printed
 */
int printString(char *s)
{
	int numChars;

	if (s == NULL)
		return (0);

	numChars = 0;

	while (*s != '\0')
	{
		_putchar(*s);
		++numChars;
		++s;
	}

	return (numChars);
}
