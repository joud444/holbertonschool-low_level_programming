#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char character;

	/* Print digits 0-9 */
	for (character = '0'; character <= '9'; character++)
	{
		putchar(character);
	}

	/* Print letters a-f */
	for (character = 'a'; character <= 'f'; character++)
	{
		putchar(character);
	}

	putchar('\n');

	return (0);
}
