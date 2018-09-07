#include <stdio.h>
#include <math.h>

int main() {
    int i1 = 1;
    int i2 = 2;
    int i = i1 + i2;
    int sum = 0;
    
    while (i < 4000000) {
        if (i % 2 == 0)
            sum = sum + i;
            
        i1 = i2;
        i2 = i;
        i = i1 + i2;
    }
    printf("The sum of all even numbers smaller than 4 million is %d\n", sum + 2);
}
