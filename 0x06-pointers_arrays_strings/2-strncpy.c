#include "main.h"

/**
 * _strncpy - C function that copies a string,
 *  including the
 *terminating null byte, using at most an input
 *number of byte
 *If the length of the source string is less than
 *maximum byte number
 *the remainder of the destination string is
 * filled with null bytes
 *Works identically to the standard library func
 *@dest: buffer storing the string copy
 *@src:the source string
 *@n:max nummber of byte copied
 *Return
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

	while (src[index++])
		src_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];

	for (index = src_len; index < n; index++)
		dest[index] = '\0';

	return (dest);
}
