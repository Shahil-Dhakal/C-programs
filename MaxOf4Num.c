//Write a program to find maximum of 4numbers using else if ladder

#include <stdio.h>
main()
{
	int num1,num2,num3,num4;
	printf("Enter four numbers : \n");
	scanf("%d%d%d%d",&num1,&num2,&num3,&num4);
	if(num1>num2 && num1>num3 && num1>num4){
		
		printf("%d is the greatest number.\n",num1);
	}
	else if(num2>num1 && num2>num3 && num2>num4){
		printf("%d is the greatest number.\n",num2);
	}
	else if(num3>num1 && num3>num2 && num3>num4){
		printf("%d is the greatest number.\n",num3);
	}
	else{
		printf("%d is the greatest number.\n",num4);
	}
	return 0;
}