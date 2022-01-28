#include <stdio.h>

int main()
{
    int i, n = 100, m = 99, result = 0;

    for(i = 1; i <= m; i++) {
        result = result + n;
    }

    printf("%d %d", result, n * m);

    return 0;
}

/* OUTPUT
9900 9900
*/
