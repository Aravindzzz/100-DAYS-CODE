#include <stdio.h>
int main()
{
    char operator;
    int a, b;

    scanf("%d %d", &a, &b);  // ✅ Corrected
    scanf(" %c", &operator); // ✅ Handles whitespace properly

    switch (operator)
    {
    case '+':
        printf("%d + %d = %d", a, b, a + b);
        break;

    case '-':
        printf("%d - %d = %d", a, b, a - b);
        break;

    case '*':
        printf("%d * %d = %d", a, b, a * b);
        break;

    case '/':
        if (b != 0)
            printf("%d / %d = %d", a, b, a / b);
        else
            printf("error division by 0");
        break;

    default:
        printf("error");
    }

    return 0;
}
