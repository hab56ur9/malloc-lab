#include <stdio.h>
#include <stdlib.h>
int main() {
    int *a = malloc(4);
    *a = 8;
    printf("%p %d\n", a, *a);
    free(a);
    printf("%p %d\n", a, *a);
    return 0;
}