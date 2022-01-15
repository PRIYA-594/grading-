#include<stdio.h>
int main()
{
    int m;
    printf("Enter your marks :");
    scanf("%d",&m);
    if(m<0 || m>100)
    {
        printf("\nInvalid marks");
    }
    else 
    {
    	printf("\nYour mark is %d",m);
    	if(m>=85)
    	{
    		printf("\nYour grade is A");
		}
		else if(m<85&&m>=70)
		{
			printf("\nYour grade is B");
		}
		else if(m<70&&m>=55)
		{
			printf("\nYour grade is c");
		}
		else if(m<55&&m>=40)
		{
			printf("\nYour grade is D");
		}
		else
		{
			printf("\nYour grade is F");
		}
    	
	}
    return 0;
}
