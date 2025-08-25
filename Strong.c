
int main() {
    int n,temp,r,sum=0,i,f;
    printf("Enter a number: ");
    scanf("%d",&n);
    temp=n;
    while(n>0){
        r=n%10;
        f=1;
        for(i=1;i<=r;i++) f*=i;
        sum+=f;
        n/=10;
    }
    printf(sum==temp ? "Strong number\n" : "Not Strong number\n");