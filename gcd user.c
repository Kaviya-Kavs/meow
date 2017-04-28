# meow
int hcf(int a,int b);
{
while(a!=b){
if(a>b)
{
a=a-b;
}
else
{
b=b-a;
}
return a;
}
int main()
{
int a,b,result;
printf("enter the numbers:");
scanf("%d%d",&a,&b);
result=hcf(a,b);
printf("hcf of %d and %d is %d \n",a,b,result);
return 0;
}
