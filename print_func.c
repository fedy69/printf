#include "main.h"
/**
 * print_rev_string - print reverse string
 *@arg: argument of type va_list
 * Return: count
 */
int print_rev_string(va_list arg)
{
	char *str;
	int i = 0, count = 0, len;

	str = va_arg(arg, char*);
	if (str == NULL)
		str = "(llun(";
	for (i = 0; str[i]; i++)
		;
	len = i - 1;
	while (len >= 0)
	{
		_putchar(str[len]);
		len--;
		count++;
	}
	return (count);
}
/**
 * print_integer -print number putchar
 * @arg: argument of type va_list
 * Return: count
 */
int print_integer(va_list arg)
{
	int count = 0, rest = 1;
	unsigned int x;
	int n = va_arg(arg, int);

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
 * print_rot13 - print rot string
 * @arg: argument of type va_list
 * Return:str
 */
int print_rot13(va_list arg)
{
	char *str;
	int i, j;
	char ch1[] = "ABCDEFGHIJKLMabcdefghijklmNOPQRSTUVWXYZnopqrstuvwxyz";
	char ch2[] = "NOPQRSTUVWXYZnopqrstuvwxyzABCDEFGHIJKLMabcdefghijklm";

	str = va_arg(arg, char *);
	if (str == NULL)
	{
		str = "(ahyy)";
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j <= 52; j++)
		{
			if (str[i] == ch1[j])
			{
				_putchar(ch2[j]);
				break;
			}
		}
		if (j == 53)
		_putchar(str[i]);
	}
	return (i);
}
/**
 * print_binary - print binary
 * @arg: argument of type va_list
 * Return: count
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
