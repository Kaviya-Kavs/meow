# meow
int main()
{
int n,rev no=0,rem;
printf("enter an integer");
scanf("%d",&n);
while(n!=0)
{
rem=n%10;
rev no=rev no*10+rem;
n?=10;
}
return 0;
}
