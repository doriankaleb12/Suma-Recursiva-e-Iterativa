#include <iostream>

int sumaIterativa(int n) {
    int suma = 0;
    for (int i = 1; i <= n; i++) {
        suma += i;
    }
    return suma;
}

int main() {
    int n;
    std::cout << "Ingresa un numero natural n: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Por favor, ingresa un numero natural positivo." << std::endl;
    }
    else {
        int resultado = sumaIterativa(n);
        std::cout << "La suma de los numeros naturales hasta " << n << " es: " << resultado << std::endl;
    }

    return 0;
}
