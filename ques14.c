#include <stdio.h>

int main() {
    int n;
    int x = 1;

   printf("enter n");
  scanf("%d", &n);
      


    for (int a = 1; a<= n; a++) {
        for (int b = 1; b <=a; b++) {
            
            if (b > 1) {
                printf(" ");
            }
            printf("%d", x);
            x++;
        }
        
        printf("\n");
    }

    return 0;
}
