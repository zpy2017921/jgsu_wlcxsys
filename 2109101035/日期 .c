#include<stdio.h>

int main()
{
	int year, moon,day;
	scanf("%d.%d.%d",&year,&moon,&day);
	if(moon>0 && moon<13){
		if(moon==4||moon==6||moon==9||moon==11){
			if(day>0 && day<31){
				printf("�Ϸ�"); 
			}
			else{
				printf("���Ϸ�"); 
			}
		}
		else if(moon==2){
			if(year%4!=0||year%400!=0){
				if(day>0 && day<29){
					printf("�Ϸ�"); 
				}
				else{
					printf("���Ϸ�");
				}
			}
			else{
				if(day>0 && day<30){
					printf("�Ϸ�");
				}
				else{
					printf("���Ϸ�"); 
				}
			}
		}
		else {
			if(day>0 && day<32){
				printf("�Ϸ�"); 
			}
			else{
				printf("���Ϸ�");
			}
		}
	}
	
	return 0;
}
