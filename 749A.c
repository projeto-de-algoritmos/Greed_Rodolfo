#include<stdio.h>
#include<stdlib.h>

void greedy(int limite)
{
	int acc = 0;
	int counter = 0;
	int size = limite/2;
	int primes[] = {2,3};
	int *array = malloc(size * sizeof(int));
	
	if(size > 1)
	{
		for(int a = 0; a < 2;a++)
		{
			while((acc + primes[a]) <= limite)
			{
				acc += primes[a];
				array[counter++] = primes[a];
			}
		}
		for(int a = 0 ; a < size -1;a++)
		{
			printf("%d ",array[a]);
		}
		printf("%d\n",array[size-1] + (limite%size));
	}else
	{
		printf("%d\n",limite);	
	}
}

int main(void)
{
	int n;
	scanf("%d",&n);
	printf("%d\n",n/2);
	greedy(n);
}
