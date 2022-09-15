#include "main.h"

/**
 * print_numbers - Print numbers 0 - 9
 * Return: Nothing
 */

void print_numbers(void)

{
	int n;

	for (n = 0; n <= 9; n++)
	{
		_putchar("%d", n);
	}

	_putchar("\n");
}
