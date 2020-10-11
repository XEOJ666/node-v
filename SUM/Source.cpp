#include<stdio.h>
void getStr(char*);
void node(char*);
int main()
{
	char str[21];
	char* pStr = str;

	getStr(pStr);
	node(pStr);
	
	return 0;
}
void getStr(char* pA) {
	scanf_s("%[^\n]s", pA, 20);
}


void node(char* pB)
{
	if ((*pB == 'n' or *pB == 'N') && (*(pB + 1) == 'o' or *(pB + 1) == 'O') && (*(pB + 2) == 'd' or *(pB + 2) == 'D') && (*(pB + 3) == 'e' or *(pB + 3) == 'E'))
	{
		int i = 4;
		while (*(pB + i) == ' ')
		{
			i++;
		}
		if (*(pB + i) == '-' && *(pB + i + 1) == 'v')
		{
			printf("ture");
		}
		else
		{
			printf("false");
		}
	}
	else
	{
		printf("false");
	}
	
}