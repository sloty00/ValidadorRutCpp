# Validador de RUT

Este proyecto es una implementación en C++ de un validador de RUT (Rol Único Tributario) para Chile. El RUT es un identificador único utilizado en Chile para ciudadanos y empresas. Este programa verifica la validez de un RUT ingresado, considerando tanto el número como el dígito verificador.

## Descripción

El validador de RUT en C++ permite ingresar un RUT y verificar si es válido o no. La verificación se realiza comprobando el formato y el dígito verificador del RUT.

## Características

- Verificación del formato del RUT.
- Cálculo del dígito verificador basado en el número de RUT.
- Validación de la entrada del usuario.

## Requisitos

- **Compilador de C++**: Necesitas un compilador de C++ compatible (por ejemplo, g++, clang++).
- **Sistema operativo**: Este proyecto puede ser compilado y ejecutado en sistemas operativos Windows, Linux y macOS.

## Instalación

1. Clona el repositorio:

   ```bash
   git clone https://github.com/tu-usuario/ValidadorRut.git
   ```
   
2. Navega al directorio del proyecto:

  ```bash
   cd ValidadorRut
   ```
   
4. Compila el proyecto. Por ejemplo, si estás usando `g++`:

  ```bash
   g++ -o ValidadorRut ValidadorRut.cpp
   ```
   
6. Ejecuta el programa:

   ```bash
    ./ValidadorRut
   ```
   
## Uso
Ejecuta el programa.<br/>
Ingresa el RUT en el formato adecuado (por ejemplo, `12345678-9`).<br/>
El programa te informará si el RUT ingresado es válido o no.
