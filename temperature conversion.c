#include<stdio.h>
int main()
{
	int u1,u2;
	char again='y';
	float f,k,c,temp;
	
	while(again=='y'||again=='Y')
	{
		printf("\n Enter the temperature \n");
		scanf("%f",&temp);
		printf(" Enter the number of the unit of your temperature :\n");
		printf(" (1) celsius\n (2) kelvin\n (3) fahrenheite\n");
		scanf("%d",&u1);
		printf("choose the unit of the temperature you want to convert into :\n");
		printf(" (1) celsius\n (2) kelvin\n (3) fahrenheite\n");
		scanf("%d",&u2);
		
		switch(u1)
		{
			case 1:
				switch(u2)
				{
					case 1:
						printf("celsius to celsius:\n");
						c = temp;
						printf("%f C",c);
						break;
					case 2:
						printf("celsius to kelvin:\n");
						k = temp+273.15;
						printf("%f K",k);
						break;
					case 3:
						printf("celsius to fahrenheit:\n");
						f = temp*1.8+32;
						printf("%f F",f);
						break;
					default:
						printf("INVALID unit");
						break;
				}
				break;
			case 2:
				switch(u2)
				{
					case 1:
						printf("kelvin to celsius:\n");
						c = temp-273.15;
						printf("%f C",c);
						break;
					case 2:
						printf("kelvin to kelvin:\n");
						k = temp;
						printf("%f K",k);
						break;
					case 3:
						printf("kelvin to fahrenheit:\n");
						f = (temp-273.15)*18+32;
						printf("%f F",f);
						break;
					default:
						printf("INVALID unit");
						break;
				}
				break;
			case 3:
				switch(u2)
				{
					case 1:
						printf("fahrenheit to celsius:\n");
						c = (temp-32)/1.8;
						printf("%f C",c);
						break;
					case 2:
						printf("fahrenheit to kelvin:\n");
						k = ((temp-32)/1.8)+273.15;
						printf("%f K",k);
						break;
					case 3:
						printf("fahrenheit to fahrenheit:\n");
						f = temp;
						printf("%f F",f);
						break;
					default:
						printf("INVALID unit");
						break;
				}
				break;
			default:
				printf("INVALID unit\n");
				break;
		}
		printf("do you want to convert again ? Y/N");
		scanf("%c",&again);
		again = getchar();
	}
}
