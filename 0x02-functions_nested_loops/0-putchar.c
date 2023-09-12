
 /*
 * File: 0-putchar.c 
 *
 */

 #include "main.h" 

 /** 
 * main-print putchar followed by a new line
 * 
 *Return :always 0
 */
  int main(void)
{
	char str[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
		_putchar(str[i]);
	_putchar('\n');

	return (0);
}
