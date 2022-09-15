#include "main.h"

/**
 * print_line - Print numbers 0 - 9.
 * @n: Length of line
 * Return: nothing
 */

void print_line(int n)
{
	int d = 0;

	while (d < n)
	{
		if (n > 0)
		{
			_putchar('_');
		}
		d++;
	}
	_putchar('\n');
}
