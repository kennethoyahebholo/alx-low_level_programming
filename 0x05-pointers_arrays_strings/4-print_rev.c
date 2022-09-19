#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}

	return (i);
}

/**
 * print_rev - Printsca string in reverse
 * @s: the string to print
 * Return: void
 */

void print_rev(char *s)

{
	int i = _strlen(s) - 1;

	while (s[i])
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}

