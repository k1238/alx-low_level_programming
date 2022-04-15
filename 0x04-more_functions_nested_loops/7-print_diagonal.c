#include "main.h"

/**
 * print_diagonal - prints diagonals
 * @n: limit
 *
 * Return: void
 */

void print_diagonals(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchaar( ' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
}
