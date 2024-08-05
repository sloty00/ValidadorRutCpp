// ValidadorRut.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>

char calcularDigitoVerificador(int rut) {
    int suma = 0;
    int multiplicador = 2;

    // Calcular la suma de los productos
    while (rut > 0) {
        suma += (rut % 10) * multiplicador;
        rut /= 10;
        multiplicador++;
        if (multiplicador > 7) {
            multiplicador = 2;
        }
    }

    // Calcular el dígito verificador
    int resto = suma % 11;
    int digito = 11 - resto;

    if (digito == 11) {
        return '0';
    }
    else if (digito == 10) {
        return 'K';
    }
    else {
        return digito + '0';
    }
}

int main() {
    std::string input;
    int rut;

    // Pedir al usuario que ingrese el RUT sin el dígito verificador
    std::cout << "Ingrese el RUT (sin el digito verificador): ";
    std::cin >> input;

    // Convertir la entrada a un número entero
    try {
        rut = std::stoi(input);
    }
    catch (const std::invalid_argument&) {
        std::cerr << "Entrada inválida. Debe ingresar un número." << std::endl;
        return 1;
    }

    // Calcular el dígito verificador
    char digitoVerificador = calcularDigitoVerificador(rut);

    // Mostrar el RUT completo con el dígito verificador
    std::cout << "El RUT completo es: " << input << "-" << digitoVerificador << std::endl;

    return 0;
}


// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
