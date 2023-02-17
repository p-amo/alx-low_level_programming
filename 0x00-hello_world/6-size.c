#include <stdio.h>
/**
 * main - A program that prints the size of various computer types
 * Return: 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

printf("Size of a char: %lu Bytes(s)\n", (unsigned long)sizeof(a));
printf("Size of int: %lu Byte(s)\n", (unsigned long)sizeof(b));
printf("Size of long int: %lu Byte(s)\n", (unsigned long)sizeof(c));
printf("size of long long int: %lu Byte(s)\n", (unsigned long)sizeof(d));
printf("Size of float: %lu Byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
