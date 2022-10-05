#include "main.h"
#include <stdlib.h>

/**
* create_array - creates an array of chars, and
* initializes it with specific char
* @size: size of array
* @c: character to insert
* return null if size is zero or if it fails
* pointer to array if everything is normal
*/

char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int position;

	if (size == 0)
	{
		return (NULL);
	}

	/*Define values with malloc*/
	buffer = (char *) malloc(size * sizeof(c));

	if (buffer == 0)
	{
		return (NULL);
	}
	else
	{
		position = 0;
		while (position < size) /*while for array*/
		{
			*(buffer + position) = c;
			position++;
		}

		return (buffer);
	}
}
