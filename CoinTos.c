#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int h = 0;
    int t = 0;
    srand(time(NULL));
    printf("Tossing a coin...\n");
    for(int i = 1; i <= 3; i++) {
        int c = rand()%2;
        printf("Round %d: ",i);
        if (c == 0) {
            printf("Heads\n");
            h++;
        }
        else {
            printf("Tails\n");
            t++;
        }
    }
    printf("Heads: %d, Tails: %d\n",h,t);
    
    return 0;
}