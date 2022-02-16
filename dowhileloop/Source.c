#include<stdio.h>

int main()
{
	int a = 0 ,b=1;
	while (1)
	{
		printf("%d.I m endless\n",b);
		b++;
		a++;
		if (a>10)
		{
			printf("Here the value of character a is %d", a);
			break;
		}
	}
	return(0);
}