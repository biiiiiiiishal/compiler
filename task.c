#include<stdio.h>
#include<string.h>
int main()
{​​​​​
int i,l,t=0;
char input[20];
printf("Enter the input: ");
scanf("%s",&input);
l= strlen(input);
for(i =0; i<l; i++)
    {​​​​​
if(input[i] == '(')
{
t++;
}

else if(input[i] == ')')
{
t--;
}

else if(input[i] == '*' || input[i] == '/' || input[i] == '+'|| input[i] == '-')
{
    if(input[i-1]>96 && input[i-1]<123 && input[i+1]>96 && input[i+1]<123 )
    {
        continue;
    }
else
{
    break;
}
else
{
    l++;
}
}
if(i>=5 && t==0 && l==0)
{
printf("valid");
}
else
{
    printf("invalid");

}
}​​​​​
