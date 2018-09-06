//
//  main.c
//  euler2
//
//  Created by Mert Hasan on 6.09.2018.
//  Copyright © 2018 Mert Hasan. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main() {
    int i1 = 1;
    int i2 = 2;
    int i = i1 + i2;
    int sum = 0;
    
    //printf("%d, ", i1);
    //printf("%d, ", i2);
    //printf("%d, ", i);
    
    while (i < 4000000) {
        if (i % 2 == 0)
            sum = sum + i;
            
        i1 = i2;
        i2 = i;
        i = i1 + i2;
        
        
        //printf("%d, ",i);
    }
    printf("The sum of all even numbers smaller than 4 million is %d\n", sum + 2);
    //printf("\n");
}

