#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - A program that assigns a random number to the variable
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("%d number is positive\n", n);
	else if (n == 0)
		printf("%d number is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
