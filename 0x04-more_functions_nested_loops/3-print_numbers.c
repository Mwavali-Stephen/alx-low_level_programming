#include "main.h"

/**
 * print_numbers - print num from 0 - 9
 * Return: void
 */

void print_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		_putchar (48 + c);
	}
	_putchar ('\n');
}
