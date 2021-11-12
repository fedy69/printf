#include "main.h"
/**
 * p_char - prints a character
 * @arg: The character to print
 *
 * Return: 1
 */
int p_char(va_list arg)
{
	_putchar(va_arg(arg, int));
	return (1);
}
/**
 * p_string - prints a string
 * @arg: The string to print
 *
 * Return: i
 */
int p_string(va_list arg)
{
	char *s = va_arg(arg, char *);
	int i = 0;

	if (s == NULL)
	s = "(null)";
	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	return (i);
}

/**
 *p_percent - print percent
 *@arg: argument of type of va_list
 * Return: integer
 */
int p_percent(va_list arg)
{
	(void)arg;

	_putchar('%');
	return (1);
}

/**
 * p_int - function that prints an integer with helper function.
 * @arg: The string to print
 *
 * Return: counter
 *
 */
int p_int(va_list arg)
{
	int n = va_arg(arg, int);
	int count = 0, rest = 1;
	unsigned int x;

	x = n;
	if (n < 0)
	{
		_putchar('-');
		x = -x;
		count++;
	}

	while ((x / rest) > 9)
	{
		rest = rest * 10;
	}
	while (rest > 0)
	{
		_putchar(x / rest + '0');
		x = (x % rest);
		rest = rest / 10;
		count++;
	}
	return (count);
}
/**
 * p_binary - convert an integer to binary (base 2).
 *
 * @arg: the list of arguments.
 *
 *  Return: number of printed element.
 */
int p_binary(va_list arg)
{
	unsigned int binary[32];
	int i = 0;
	unsigned int n = 0, count = 0;

	n = va_arg(arg, unsigned int);

	if (n <= 1)
	{
		_putchar(n + '0');
		count++;
	}
	else
	{
		while (n > 0)
		{
			binary[i] = n % 2;
			n = n / 2;
			i++;
		}
		for (i = i - 1; i >= 0; i--)
		{
			_putchar(binary[i] + '0');
			count++;
		}
	}
	return (count);
}
