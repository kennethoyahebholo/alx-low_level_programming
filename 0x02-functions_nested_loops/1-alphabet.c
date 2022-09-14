#include "main.h"

/**
 * main - Print the alphabet in lowercase.
 * Return: Always 0
 */

void print_alphabet(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
