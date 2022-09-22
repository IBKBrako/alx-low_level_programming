#include "main.h"
/**i
*  _strcmp - Function which
*compare two strings and
*@s1: first string
*@s2:second string
*Return:
*returns zero if s1 == s2
*returns negative number if s1 < s2
*returns positive number if s1 > s2
*/

int _strcmp(char *s1, char *s2)
{
	int i = 0, r;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			break;
		}
		else
		{
			r = s1[i] - s2[i];
		}
		i++;
	}

	return (r);
}
