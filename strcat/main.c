// Implement the strcat function.

#include <stdio.h>
#include <stdlib.h>

char *Strcat (char *string1, char *string2)
{
	int iString1Length = 0, iString2Length = 0;
	char *pcAnswer = NULL, *pcTemp = NULL;
	int i = 0;
	
	pcTemp = string1;
	while (*pcTemp != '\0')
	{
		iString1Length++;
		pcTemp++;
	}

	pcTemp = string2;
	while (*pcTemp != '\0')
	{
		iString2Length++;
		pcTemp++;
	}

	pcAnswer = (char *) malloc (sizeof (char) * (iString1Length + iString2Length + 1));

	pcTemp = string1;
	while (i < iString1Length + iString2Length)
	{
		pcAnswer[i] = *pcTemp;
		pcTemp++;
		i ++;
		if (*pcTemp == '\0')
		{
			pcTemp = string2;
		}
	}

	pcAnswer[i] = '\0';

	return pcAnswer;
}

int main()
{
	char string1[6] = "Hello ";
	char string2[6] = "World";

	char *string3 = NULL;

	string3 = Strcat (string1, string2);
	printf ("%s\n", string3);
	return 0;
}
