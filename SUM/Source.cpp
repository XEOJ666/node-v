#include<stdio.h>
int main()
{
	char str[21];
	scanf_s("%[^\n]s", str, 21);
	if ((str[0] == 'n' or str[0] == 'N') && (str[1] == 'o' or str[1] == 'O') && (str[2] == 'd' or str[2] == 'D') && (str[3] == 'e' or str[3] == 'E'))
	{
		int i = 4;
		while (str[i] == ' ')
		{
			i++;
		}
		if (str[i] == '-' && str[i + 1] == 'v')
		{
			printf("ture");
			return 0;
		}
	}
	printf("false");
	return 0;
}
	
