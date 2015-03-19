#include <stdio.h>

int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		int i,count=0;
		if(n==0)
			return 0;
		for(i=2;i<=n;i++)	
				if(Is(i))
					{
						printf(" %d",i);
						count++;
					}
		if(count==0)
				printf("%d",-1);
		printf("\n");
	}
	return 0;
}
int Is(int val)
{
	if(val%10!=1)
		return 0;
	else if(IsSu(val))
		return 1;
	else
		return 0;
}
int IsSu(int n)
{
	int i;
	int Su = 1;
	for(i=2;i<n;i++)
			if(n%i==0)
				Su = 0;
	return Su;
}
