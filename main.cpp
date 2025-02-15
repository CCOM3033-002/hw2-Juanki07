// Juan Carlos Velez Reyes
// Juanki07
// 801-21-2150
// incluya cualquier colaboración que haga
#include<iostream>
using namespace std;

int main(){
  // escriba su código aquí 
    float numerador1, denominador1, numerador2, denominador2, denominadorTotal, numeradorTotal;
    char slash;

    // Primera fraccion
    cout << "Este prpgrama suma dos fracccinoes dado los numeradores y denominadores de las fracciones a sumar" << '\n';
    cout << "Entre la primera fraccion en forma a/b : " << '\n';
    cin >> numerador1 >> slash >> denominador1;

    //Segunda fraccion
    cout << "Entre la segunda fraccion en forma a/b : " << '\n';
    cin >> numerador2 >> slash >> denominador2;
      
    // Resultado
    numeradorTotal = numerador1 * denominador2 + numerador2 * denominador1;
    denominadorTotal = denominador1 * denominador2;
    
    // Resultado de suma sin la simplificacion
      cout << "La suma es: " << numeradorTotal << "/" << denominadorTotal << "." << endl;

  return 0;
}
