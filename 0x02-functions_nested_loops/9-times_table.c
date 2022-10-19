#include "main.h"

/**
 * times_table - print the times table
 *
 * Return: noting
 */

void times_table(void)
{
	int 1, c, p, m, d;

	for (1 = 0; 1 <= 9; c++)
	{
		for (c = 0; c <=9; c++)
		{
			p = 1 * c;

			if (p > 9)
			{
				m = p % 10;
				d = (p - m) / 10;

				_putchar(',');
				_putchar(' ');
				_putchar(d + '0');
				_putchar(m + '0');
			}
			else
			{
				if (c != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}

				_putchar(p + '0');
			}
		}
		_putchar('\n');
	}
}


