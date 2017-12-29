#include <ctype.h>
#include <xlocale.h>
#include "str.h"

/* start implementing your functions here */


/* One is done for you */

int my_strncasecmp(const char *s1, const char *s2, int len)
{
	unsigned char c1, c2;

	if (!len)
		return 0;

	do {
		c1 = *s1++;
		c2 = *s2++;
		if (!c1 || !c2)
			break;
		if (c1 == c2)
			continue;
		c1 = tolower(c1);
		c2 = tolower(c2);
		if (c1 != c2)
			break;
	} while (--len);
	return (int)c1 - (int)c2;
}

char *strcpy(char *dest, const char *src)
{
	while(*src)
	{
		*dest = *src
		src++;
		dest++;	
	}
	*dest = '\0';
	return *dest;
}

char *my_strncpy(char *dest, const char *src, int count)
{
	
	
}


