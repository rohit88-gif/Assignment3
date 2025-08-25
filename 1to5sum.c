


int main()
{
    int start , end, i, sum=0;
    
    printf("enter the start number");
     scanf("%d" ,&start);
     
     printf("ente the end numver");
     scanf("%d",&end);

    for(i =start; i<=end; i++)
    {
         
         sum=sum+i;
    }
    
   printf("Sum of numbers from %d to %d = %d\n", start, end, sum);
   }
