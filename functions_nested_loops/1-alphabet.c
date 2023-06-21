#include "main.h"
#include <unistd.h>

/**
 * print_alphabet - Entry point
 *
 * Return: Always 0 (Sucess)
 */

void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');
}
