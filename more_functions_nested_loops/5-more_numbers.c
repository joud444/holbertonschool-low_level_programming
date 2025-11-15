#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 *
 * Return: void
 */
void more_numbers(void)
{
    int i, j;

    for (i = 0; i < 10; i++)  /* Repeat 10 times */
    {
        for (j = 0; j <= 14; j++)  /* Numbers 0 to 14 */
        {
            if (j > 9)  /* For two-digit numbers (10-14) */
            {
                _putchar((j / 10) + '0');  /* Print tens digit */
            }
            _putchar((j % 10) + '0');  /* Print ones digit */
        }
        _putchar('\n');  /* New line after each set */
    }
}
