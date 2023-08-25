#include <stdio.h>

int main() {

    int x;
    float y;

    scanf("%d", &x);
    scanf("%f", &y);

    printf("%0.3f km/l\n", x / y);

    return 0;
}
