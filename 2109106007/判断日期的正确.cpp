#include<stdio.h>
int main()
{
	int year;
	int month;
	int day;
	scanf("%d-%d-%d",&year,&month,&day);
	if(month<1||month>12)
	printf("NO");
	else
	{
		if(year%4==0&&year%100!=0||year%400==0)
		{
			if(month==2)
			{
				if(day>29||day<1)
				printf("NO");
				else printf("YES");
			}
		}
		if(month==4||month==6||month==9||month==11)
		{
			if(day<1||day>30)
			printf("NO");
			else printf("YES");	
		}
		else if(month!=2)
		{
			if(day<1||day>31)
			printf("NO");
			else 
			 printf("yes");
		}
	}
	return 0;
 } 
