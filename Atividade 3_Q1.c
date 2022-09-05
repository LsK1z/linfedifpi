#include <stdio.h>

int main() {
    int num1,num2;
    
    printf("Digite um numero inteiro:");
    scanf("%d",&num1);
    printf("Digite outro numero inteiro:");
    scanf("%d",&num2);
    
    if (num1 > num2) {
        printf("Maior = %d",num1);
    }
    
    else if (num2 > num1) {
        printf("Maior = %d",num2);
    }
    else {
        printf("Maior = %d",num1);
    }
    
    
    

    return 0;
}
