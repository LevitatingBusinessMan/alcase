#include <stdio.h>
#include <string.h>

void alternate(char c);

int main(int argc, char *argv[])
{
	if (argc > 1)
	{
		if (strcmp(argv[0], "--help") == 0 || strcmp(argv[0], "-h"))
		{
			printf("ThIs TuRnS tExT iNtO AlTeRnAtInG cAsE\nCan read both stdin or argv\n");
			return 0;
		}

		for (int i = 1; i < argc; i++)
		{
			char *arg = argv[i];
			for (int j = 0; arg[j] != '\0'; j++)
			{
				alternate(arg[j]);
			}
		}
		return 0;
	}

	else
	{
		char c;
		while ((c = getchar()) != EOF)
		{
			alternate(c);
		}
		return 0;
	}
}

int ncase = 1;
void alternate(char c)
{
	if (c >= 0x41 && c <= 0x5a)
	{
		if (!ncase) c = c + 0x20;
		ncase = !ncase;
	}
	else if (c >= 0x61 && c <= 0x7a)
	{
		if (ncase) c = c - 0x20;
		ncase = !ncase;
	}

	putchar(c);
}
