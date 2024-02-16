


#include<stdio.h>
int main()
{
	int N = 1, S = 1;
	while (N <= 500)
	{
		S = S + N;
		N++;
	}
	printf("%d", S);
	return 0;
}
