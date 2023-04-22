# dscl_exp10
Guest lecture- code on searching element in array.
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
}<img width="376" alt="Screenshot 2023-04-22 182854" src="https://user-images.githubusercontent.com/124857385/233786360-f9c3e86b-0237-4b34-85ac-a5df4a0dfb6b.png">
