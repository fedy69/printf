#include "main.h"
/**
 * pick_function - check depending on separator
 * @s: char
 *@ap: argument of type va_list
 * Return: int
 */
int pick_function(const char s, va_list ap)
{
	int i = 0, count = 0;
	arr_of_p ch[] = {
		{'c', p_char},
		{'s', p_string},
		{'%', p_percent},
		{'d', p_int},
		{'i', p_int},
		{'b', p_binary},

	};
	while (ch[i].c != 0)
	{
		if (ch[i].c == s)
		{
			count = count + ch[i].fun(ap);
			return (count);
		}
		i++;
	}
	return (0);
}