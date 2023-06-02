#include <iostream>
using namespace std;

double calcularPi() {
    double pi = 0;
    double resultado = 0;
    double delta = 0.0000001; //Diferencia entre las iteraciones.
    int denominador = 1;
    float numerador = 1;

    do {
        resultado = numerador / denominador;
        pi += resultado;
        numerador *= -1;
        denominador += 2;
    } while (abs(resultado) >= delta);

    /* El numerador empieza siendo uno, luego cambia
    de signo por iteración. El denominador igual,
    pero por iteración se le suma dos dado al 2
    que multiplica al número de la sumatoria. 
    Por el cambio de signo, usamos el valor
    absoluto. */

    pi *= 4;
    //Ya que la serie de Liebtniz nos otorga pi/4, cancelamos al 4 al multiplicarlo por sí mismo.

    return pi;
}

int main() {
    cout.precision(7); //Precisión en 7 decimales ya que sino redondea el último pedido.
    cout << "El número pi aproximado es: " << fixed << calcularPi() << endl;
    return 0;
}
