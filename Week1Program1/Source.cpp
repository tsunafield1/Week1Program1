#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
bool check(int x)
{
	if (x % 2 == 0)return true;
	else return false;
}
int main()
{
	int x[100] = { 1,2 },sum=0,i=0;
	while(1)
	{
		if (i < 2)
		{
			if (check(x[i]))sum += x[i];
		}
		else
		{
			x[i] = x[i - 1] + x[i - 2];
			if (x[i] > 4000000)break;
			if (check(x[i]))sum += x[i];
		}
		i++;
	}
	printf("%d", sum);
}