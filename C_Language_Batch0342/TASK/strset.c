#include<stdio.h>
void main()
{
	char str[100],ch; 
	int i; 
	
	printf("Enter the mask string : ");
	gets(str);
	
	printf("Enter the charater : ");
	scanf("%c",&ch);
	
	for(i=0;str[i];i++)
	{
		str[i] = ch; 
	}
	printf("Masked string : %s\n",str);
	
}
