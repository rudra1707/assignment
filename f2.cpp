/*
* FILE: f2.cpp
*
* PROGRAMMER: RUDRA NITESHKUMAR BHATT
* FIRST VERSION : 2024-01-24
* 
*/


#include<stdio.h>
int main()
{
	int N = 1, S = 0;
	while (N <= 500)
	{
		S = S + N;
		N++;
	}
	printf("%d", S);
	return 0;
}
