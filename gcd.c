# meow
int gcd(inta,intb)
{
if(a==0||b==0)
return 0;
if(a==b)
return a;
if(a>b)
return gcd(a-d,a);
return gcd(a,a-b);
}
int main
{
int a=98;b=56;
printf("gcd of %d and %d is %d",a,b,gcd(a,b));
return 0;
}
