#include<stdio.h>
int main()
{
	int i=0;
	i++;
	if(i<=5)
	{
		printf("%d\n",i);
		main();
	}
return(0);
}
