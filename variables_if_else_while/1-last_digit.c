#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastDigit = n % 10;

	printf("Last digit of %d is ", n);

	if (n > 5)
	{
		printf("%d and is greater than 5\n", lastDigit);
	}
	else if (n == 0)
	{
		printf("%d and is 0\n", lastDigit);
	}
	else
	{
		printf("%d and is less than 6 and not 0\n", lastDigit);
	}
	return (0);
}