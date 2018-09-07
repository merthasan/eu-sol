#include <stdio.h>
#include <math.h>

int main() {
    int i = 1;
    int sum = 0;
    while ( i < 1000) {
        if (i % 3 == 0)
            sum = sum + i;
        else if (i % 5 == 0)
            sum = sum + i;
        i++;
    }
    printf("Sum of all the multiples of 3 or 5 below 1000 is %d.\n", sum);
}
