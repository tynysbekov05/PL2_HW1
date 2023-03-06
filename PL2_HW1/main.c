//
//  main.c
//  PL2_HW1
//
//  Created by Кайсар Тынысбеков on 06.03.2023.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    // insert code here...
    int cub1, cub2, sum, score, end;
    srand((unsigned)time(NULL));
    end = 0;
    score = 0;
    while (end != 1) {
        cub1 = 1 + (rand() % 6);
        cub2 = 1 + (rand() % 6);
        printf("\nFirst dice is equal to %d\n", cub1);
        printf("Second dice is equal to %d\n", cub2);
        sum = cub1+cub2;
        if (sum == 7 || sum == 11) {
            printf("\nSum is equal to %d\n", sum);
            printf ("You're win, your score is %d\n", score);
            end = 1;
        } else if (sum == 2 || sum == 3 || sum == 12){
            printf("\nSum is equal to %d\n", sum);
            printf("You're lose, your score is %d\n", score);
            end = 1;
        } else {
            score += sum;
            printf("\nCurrent score: %d\n", score);
            printf("--------------------------");
        }

    }
    
    return 0;
}
