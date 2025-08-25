

int main()
{
	int i,n,flag=0;
	
	printf("enter the number");
	scanf("%d",&n);
	
	for(i=2; i<=n/2;i++)
	
	if(n%2==0)
	{
		flag=1;
		break;
	}
	
	if(n>1 &&flag==0)
	{
	    printf("it is the prime number");	
	}
	else
	{
		printf("it is not prime number");
	}
}