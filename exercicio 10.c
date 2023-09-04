#include <stdio.h>
#include <math.h>

int main(){

    float A, B, C, Delta, Raiz1, Raizz;

    printf("Digite o valor de A: \n");
        scanf("%f", &A);

    printf("Digite o valor de B: \n");
        scanf("%f", &B);

    printf("Digite o valor de C: \n");
        scanf("%f", &C);


    Delta = pow(B, 2) - 4 * A * C;

    Raiz1 = ((- B + sqrt(Delta)) / (2 * A));
    Raizz = ((- B - sqrt(Delta)) / (2 * A));

    if(A == 0){
        printf("Não é equação de segundo grau");
    }
    else if(Delta < 0){
        printf("nao existe raiz");
    }
    else if(Delta == 0){
        printf("raiz unica");
    }
    else{
        printf("aqui as raizes %.2f %.2f", Raiz1, Raizz);
    }


}