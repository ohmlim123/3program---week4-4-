#include<stdio.h>
int main()
{
	int i, j, N;
	scanf_s("%d", &N);
	for (i = 1;i <= N;i++)
	{
		for (j = 1;j <= N;j++)
		{
			if (i == 1 || i == N || j == 1 || j == N)
			{
				printf("*");
			}
			else if (i == j || N - i == j - 1)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}