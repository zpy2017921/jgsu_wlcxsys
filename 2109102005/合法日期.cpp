#include <stdio.h>

int main()
{
	int a, b, c;
	scanf("%d %d %d",&a, &b, &c);
	
	if(b <= 12 && b >= 1 && c >= 1 && c <= 31)
	{
	  if(b == 1 || b == 3 || b == 5 || b == 7 || b == 8 || b == 10 || b == 12)
     	{
		  printf("yes\n");
     	}
	  else
	   {
	   	 	if (a % 4 == 0 && a % 100 != 0 || a % 400 == 0) // ����
	   	 	{
				if (b == 2 && c > 29)
				printf("no\n");
				else 
				printf("yes\n");
			}
		    else 
		    {
				if (b > 30)
				printf("no\n");
				else 
				printf("yes\n");
			}
		}
	   	 
	}
	else 
	printf("no\n");
	
	return 0;
}
