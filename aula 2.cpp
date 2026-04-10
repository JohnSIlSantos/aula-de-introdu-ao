#include <stdio.h>

int main() {

    // =========================
    // 1. Verificação de nota
    // =========================
    float nota;

    printf("Digite a nota: ");
    scanf("%f", &nota);

    if (nota >= 6) {
        printf("Aprovado\n");
    } else {
        printf("Reprovado\n");
    }

    // =========================
    // 2. Operador ternário simples
    // =========================
    printf("%s\n", nota >= 6 ? "Aprovado" : "Reprovado");

    // =========================
    // 3. Condição com nota máxima
    // =========================
    if (nota >= 6) {
        if (nota == 10) {
            printf("Aprovado com nota maxima\n");
        } else {
            printf("Aprovado\n");
        }
    } else {
        printf("Reprovado\n");
    }

    // =========================
    // 4. Ternário completo (CORRIGIDO)
    // =========================
    const char *resultado;

    resultado = nota >= 6 
        ? (nota == 10 ? "Aprovado com nota maxima" : "Aprovado")
        : "Reprovado";

    printf("%s\n", resultado);

    // =========================
    // 5. Verificação de idade
    // =========================
    int idade;

    printf("Digite a idade: ");
    scanf("%d", &idade);

    if (idade >= 18) {
        printf("Maior de idade\n");
    }

    // =========================
    // 6. Cálculo de nota final
    // =========================
    float av, simulado1, simulado2, notaFinal;

    printf("Digite a nota da AV: ");
    scanf("%f", &av);

    printf("Digite a nota do Simulado 1 (0 a 1): ");
    scanf("%f", &simulado1);

    printf("Digite a nota do Simulado 2 (0 a 1): ");
    scanf("%f", &simulado2);

    notaFinal = av + simulado1 + simulado2;

    // Limitar nota máxima a 10
    if (notaFinal > 10) {
        notaFinal = 10;
    }

    printf("Nota final: %.1f\n", notaFinal);

    return 0;
}