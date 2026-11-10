#include <stdio.h>

int main() {
    int n;
    
    printf("enter  n:");
    scanf("%d", &n);
     
    
    
   
    for (int i = 1; i <= n; i++) {
        
        for (int j = 1; j <= i; j++) {
            
            if (j == 1 || i == j || i == n) {
                printf("*");
            } else {
               
                printf(" ");
            }
        }
        // Move to the next line after completing the current row
        printf("\n");
    }
    
    return 0;
}
