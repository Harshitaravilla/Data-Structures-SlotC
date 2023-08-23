#include<stdio.h>
#include<stdlib.h>
int validatestring(char*B)
{
	int i;
	for(i=0;B[i]!='\0';i++)
	{
		if(!(B[i]>=65&& B[i]<=90)&&!(B[i]>=97&&B[i]<=122)&&!(B[i]>=48&&B[i]<=57))
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	char*B ="Rahul@7928";
	int j;
	printf("string is\"%s\"\n",B);
	if(validatestring(B))
	{
		printf("valid string");
	}
	else
	{
		printf("invalid string");
	}
	return 0;
}
