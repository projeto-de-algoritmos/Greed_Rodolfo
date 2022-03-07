
#include<stdio.h>
#include<stdlib.h>
 
int greedy(int *,int);
int cmp(const void *,const void *);
 
int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		int t;
		scanf("%d",&t);
		int *v = (int *)calloc(t,sizeof(int));
		for(int a = 0; a < t ;a++)
			scanf("%d",&v[a]);
		qsort(v,t,sizeof(int),cmp);
		puts(greedy(v,t)?"YES":"NO");
		free(v);
	}
	return EXIT_SUCCESS;
}
int cmp(const void *a,const void *b)
{
	return *(int *)b - *(int *)a;
}
int greedy(int *vector,int size)
{
	int *selected = (int *)calloc(size,sizeof(int));
	int sum = 0,limit = 2048;
	for(int a = 0 ; a < size;a++)
		if(sum + vector[a] <= limit)
			sum += vector[a];
	free(selected);
	return sum == limit ? 1 : 0;
}
