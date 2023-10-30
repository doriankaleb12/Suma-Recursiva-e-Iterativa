#include <iostream>

int sumaRecursiva(int n) {
    if (n == 1) {
        return 1;
    }
    else {
        return n + sumaRecursiva(n - 1);
    }
}

int main() {
    int n;
    std::cout << "Ingresa un numero natural n: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Por favor, ingresa un número natural positivo." << std::endl;
    }
    else {
        int resultado = sumaRecursiva(n);
        std::cout << "La suma de los numeros naturales hasta " << n << " es: " << resultado << std::endl;
    }

    return 0;
}
d