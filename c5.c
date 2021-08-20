#include<stdio.h>
#include<conio.h>
int main()
{int marks=0;
printf("Enter marks =");
scanf("%d",&marks);
	if(marks>=85 && marks<=100){

		printf("grade A");
		}
	else if(marks>=70 && marks<=84){

		printf("grade B");}
	else if(marks>=55 && marks<=69){

		printf("grade C");}
	else if(marks>=40 && marks<=54){

		printf("grade D");}
	else if(marks>=0 && marks<=39){

		printf("grade F");}
	else{

		printf("plz check ur I/P");}
return 0; 
}