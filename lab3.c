#include<stdio.h>
int main()
{
    char ch[10];
    printf("Enter Your Operator");
    gets(ch);
    switch (ch[0])
​{

        case '+':
            if(ch[1]=='-')
                printf("Increment");
            else()
                printf("Addition");
            break;
            case '-':
            if(ch[1]=='-')
                printf("Decrement");
            else()
                printf("Substraction");
            break;

return 0;
}
