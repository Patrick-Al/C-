#include <stdio.h>

// Protótipo das funções
float calcular_area_circulo(float raio);
int calcular_area_retangulo(int largura, int altura);

int main() {
    float raio = 5.0;
    int largura = 4; 
    int altura = 6;
    
    // Chamadno as Funções antes de suas Definições completas
    printf("Area de circulo: %.2f\n", calcular_area_circulo(raio));
    printf("Area do retangulo: %d\n", calcular_area_retangulo(largura, altura));

    return 0;
}

// Definição da Função para calcular a área de um circulo
float calcular_area_circulo(float raio) {
    return 3.14159 * raio * raio; // Fórmula da área de um círculo
}

// Definição da Função para calcular a área de um retângulo
int calcular_area_retangulo(int largura, int altura) {
    return largura * altura; // Fórmula da área de um retângulo
}
