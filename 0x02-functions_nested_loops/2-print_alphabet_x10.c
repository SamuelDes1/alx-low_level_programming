#include "main.h"
/**
 * print_alphabet_x10 - check the code
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
int integer = 1;

while (integer <= 10)
{
char alphabet = 'a';

while (alphabet <= 'z')
{

_putchar(alphabet);

alphabet++;

}

_putchar('\n');
integer++;
}
}



