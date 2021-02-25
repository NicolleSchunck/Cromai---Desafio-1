#include <iostream> // cin cout
#include <math.h> // funcoes
#include <string> // tipo texto
#include <cstdlib>
using namespace std; // diretiva std

int main (){
int c1, c2, h;

cout << "Calculadora do valor da hipotenusa de um triângulo rectângulo";
cout << "\nPor favor, introduza os valores dos catetos: ";
cout << "\nCateto 1: ";
cin >> c1;

cout << "\nCateto 2: ";
cin >> c2;

h = c1 * c1 + c2 * c2; 

cout << "O valor da hipotenusa é: " << h;
return 0;
}
