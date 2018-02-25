#include <stdio.h>

void staircase(int n) {
    int i=0, j=0;
    for(;i<n;i++) {
        for(j=0;j<n-i-1;j++)
            printf(" ");
        for(;j<n;j++)
            printf("#");
        printf("\n");
    }    
}

int main() {
    int n; 
    scanf("%i", &n);
    staircase(n);
    return 0;
}
