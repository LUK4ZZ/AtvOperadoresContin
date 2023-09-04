#include <stdio.h>

int main() {
    float salario_atual;
    int tempo_servico;
    float salario_reajustado;
    int bonus;

    // Ler o valor do salário atual e o tempo de serviço do funcionário
    printf("Digite o valor do salário atual do funcionário: ");
    scanf("%f", &salario_atual);
    printf("Digite o tempo de serviço do funcionário em anos: ");
    scanf("%d", &tempo_servico);

    // Calcular o reajuste com base no salário atual
    if (salario_atual <= 500) {
        salario_reajustado = salario_atual * 1.25; // Reajuste de 25%
        bonus = 0; // Sem bônus
    } else if (salario_atual <= 1000) {
        salario_reajustado = salario_atual * 1.20; // Reajuste de 20%
        if (tempo_servico >= 1 && tempo_servico <= 3) {
            bonus = 100;
        } else {
            bonus = 0;
        }
    } else if (salario_atual <= 1500) {
        salario_reajustado = salario_atual * 1.15; // Reajuste de 15%
        if (tempo_servico >= 4 && tempo_servico <= 6) {
            bonus = 200;
        } else {
            bonus = 0;
        }
    } else if (salario_atual <= 2000) {
        salario_reajustado = salario_atual * 1.10; // Reajuste de 10%
        if (tempo_servico >= 7 && tempo_servico <= 10) {
            bonus = 300;
        } else {
            bonus = 0;
        }
    } else {
        salario_reajustado = salario_atual; // Sem reajuste
        if (tempo_servico > 10) {
            bonus = 500;
        } else {
            bonus = 0;
        }
    }

    // Verificar se o funcionário tem direito a aumento
    if (salario_reajustado == salario_atual) {
        printf("O funcionário não tem direito a nenhum aumento.\n");
    } else {
        printf("O valor do salário reajustado é: R$ %.2f\n", salario_reajustado);
        printf("O valor do bônus é: R$ %d\n", bonus);
    }

}
