#include <stdio.h>

int main()
{
    int a = 212;
    int divisor = 0;
    int result = 0;
    int new_a = a;

    while(new_a >= divisor) {
        new_a = new_a - divisor;
        result = result + 1;
    }

    printf("If %d is divided by %d,\n", a, divisor);
    printf("the result is: %d\n", result);

    if(new_a != 0) {
        printf("and the remainder is: %d\n", new_a);
    }

    return 0;
}

/* OUTPUT
If 212 is divided by 9,
the result is: 23
and the remainder is: 5
*/
