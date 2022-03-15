#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line.
(* a blank line
 * Description: I used print_alphabet to print alphabet
(* section header: Section description)*
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
}
