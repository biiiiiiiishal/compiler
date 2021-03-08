#include <stdio.h>

int main()
{
    char ch[10];

    printf("Enter Your Operator: ");
      gets(ch);

    switch(ch[0])
    {
        case '-':
            if(ch[1] == '-')
                printf("decrement");
            else
                printf("substraction");
            break;
        case '+':
            if(ch[1] == '-')
                printf("increment");
            else
                printf("addition");
            break;
        case '*':
            if(ch[1] == '*')
                printf("Not a Operator");
            else
                printf("division");
            break;
        case '/':
            if(ch[1] == '/')
                printf("Not  Divison");
            else
                printf("Division");
            break;


        case '==':
            if(ch[1] == '==')
                printf("Equals");
            else
                printf("Not Equals");
            break;
        case '!=':
            if(ch[1] == '!=')
                printf("Not Equals");
            else
                printf("Greater than");
            break;
        case '>':
            if(ch[1] == '=')
                printf("Greater Than or equal");
            else
                printf("Greater Than");
            break;
        case '<':
            if(ch[1] == '=')
                printf("less than or equal");
            else
                printf("less then");
            break;

        case '&':
            if(ch[1] == '&')
                printf("Logical And");
            else
                printf("Bitwise And");
            break;
        case '|':
            if(ch[1] == '|')
                printf("Logical OR");
            else
                printf("Bitwise OR");
            break;
        default:
            printf("Not an operator");
    }

    return 0;
}
