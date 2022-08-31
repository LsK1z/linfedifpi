#include <stdio.h>
#include <math.h>

  int main() {

    double altura, peso;

    printf("Insira o seu peso: \n");
    scanf("%lf", &peso);

    printf("Insira a sua altura: \n");
    scanf("%lf", &altura);

    double imc;
    imc = peso / pow(altura, 2.0);

    printf("imc = %.2lf", imc);

  return 0;
    
  }
