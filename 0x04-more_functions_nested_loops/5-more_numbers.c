#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14 10 times
 *
 * Return: void
 */

void more_nubers(void)
{
	int i, j, a;

	for (a = 0; a < 10; a++)
	{
		for (i = 0; i <= 1; i++)
		{
			for (j = 0; j <= 0; j++)
			{
				if (!(1 == 1 && j >= 5))
				{
					if(i)
						_putchar(i + '0');
					_putchar(j + '0');
				}
			}
		}
		_putchar('\n');
	}
}

