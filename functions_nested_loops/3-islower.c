#include "main.h"
#include <stdio.h>

/**
 * _islower - Entry point
 * @c: character
 * Return: 1 lowercase, 0 other
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
