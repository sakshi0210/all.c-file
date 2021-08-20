# menu
c program for menu
#include<stdio.h>
main()
{printf("What would you like to have :- \n1.Pizza\n2.Pasta\n3.Sandwich\n4.Burger\n5.French Fries");
int choice=0;
scanf("%d",&choice);
switch (choice){
	case 1:
		printf("Rs 239");
		break;
	case 2:
		printf("Rs 179");
		break;
	case 3:
		printf("Rs 149");
		break;
	case 4:
		printf("Rs 129");
		break;
	case 5:
		printf("Rs 99");
}

}

