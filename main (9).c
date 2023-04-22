/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
	int arr[6]={10,20,30,40,50,60};
	printf("Enter the number to be searched	: ");int a,i,l;
	scanf("%d",&a);
	
	l=6;
	int beg=0;
	int end=l-1;
	int mid,result=-1;
	while(beg<=end)
{
	mid=(beg+end)/2;
	if (arr[mid]==a)
	{

	result=mid;	break;
	}	
	else if(arr[mid]>a)
	{
		end=mid-1;
	}
	else if(arr[mid]<a)
	{
		beg=mid+1;
	}
}
printf("%d",result);
}
