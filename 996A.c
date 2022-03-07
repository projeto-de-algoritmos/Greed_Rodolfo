
/*
 * https://codeforces.com/problemset/problem/996/A
 * Rodolfo Cabral Neves - 180011472
 * */


#include<stdio.h>
#include<stdlib.h>

int greedy(int limite)
{
	int acumulator = 0;
	int coins[] = {100,20,10,5,1};
	int counter = 0;
	
	for(int a = 0; a < 6;a++)
	{
		while((acumulator + coins[a]) <= limite)
		{
			acumulator += coins[a];
			++counter;
		}
	}
	return counter;
}

int main(void)
{
	
	int n;
	scanf("%d",&n);
	printf("%d",greedy(n));
}
