#include <iostream>

using namespace std;

//Función para obtener pi
double HallarPi (int iteraciones) {
    double pi = 0;
    double numerador = 1;
    for (int i = 0; i <= iteraciones; i++) {
       pi += numerador/ (2*i + 1); //Serie de Liebtniz
       numerador = -numerador; //El exponente par o impar en el numerador cambia el signo, alternándose desde el 0.
    }
    pi *= 4; //El resultado de la serie de Liebtniz es pi/4, por eso se multiplica por 4.
    return pi;
}

int main () {
    int iteraciones = 100000000; //Cantidad de iteraciones necesarias para la precisión pedida.
    cout.precision(7); //Utilizamos siete decimales para no redondear el último decimal.
    cout << "El número pi acotado es: " << fixed << HallarPi(iteraciones) << "...";
    return 0;
}