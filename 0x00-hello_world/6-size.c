#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int a;
long int b;
long long int c;
char d;
float f;

printf("size of a char: %lu byte(s)\n", (unsigned char)sizeof(d));
printf("size of an int: %lu byte(s)\n", (unsigned int)sizeof(a));
printf("size of a long int: %lu byte(s)\n", (unsigned long int)sizeof(b));
printf("size of a long long int: %lu byte(s)\n", (unsigned long long int)sizeof(c));
printf("size of a float: %lu byte(s)\n", (unsigned float)sizeof(f));
return (0);
}



