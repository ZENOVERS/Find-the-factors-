#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#include <float.h>

void ClearReadBuffer(void)
{
	while (getchar() != '\n');
}

int main()
{
	system("title https://github.com/ZENOVERS - BETA VER 4");
	unsigned long long num;
	unsigned long long num2[50];
	int k = 0;
	int count = 1;

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
	printf("\n          A character and  negative number CAN NOT BE ENTERED (https://github.com/ZENOVERS)   \n\n\n\n\n");

start:

	k = 0;
	num = NULL;
	for (int i = 0; i < 50; i++)
	{
		num2[i] = NULL;
	}

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
	printf("%d. Enter Value: ", count);
	scanf("%llu", &num);

	count++;
	num = (unsigned long long)num;


	if (num < 0 || num > 1000000000)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
		printf("\n\n negative number or too large a value CAN NOT BE ENTERED.\n\n\n\n\n\n\n\n\n\n");

		goto start;
	}

	for (int i = 1; i <= num; i++)
	{
		if (num % i == 0)
		{
			num2[k] = i;
			k++;
		}
	}


	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
	printf(" \nFactors Of ", num);

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
	printf("%llu", num);

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
	printf(" are ", num);

	for (int i = 0; i < k; i++)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
		printf("%llu", num2[i]);
		if (k - 1 > i)
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
			printf(", ");
		}
	}

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
	printf(" .\n\n\n\n\n\n\n\n\n\n");
	ClearReadBuffer();

	goto start;

	return 0;
}