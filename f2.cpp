/*
* FILE: f2.cpp
* PROJECT: FOCUSED ASSIGNMENT 2
* PROGRAMMER: RUDRA NITESHKUMAR BHATT
* FIRST VERSION : 2024-01-24
* student id:8980507
* DESCRIPTION: Use Loops and Arithmetic operators to produce and display a sum of numbers from 1.
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
