#include <cmath>
#include <iostream>
using namespace std;

int main() {
  double PI = 3.14, radius, height, area, volume;

  // Calcular a área
  cout << "Insira o raio da cilindro " << endl;
  cin >> radius;

  area = PI * pow(radius, 2);

  // Pegar a altura
  cout << "Insira a altura do cilindro " << endl;
  cin >> height;

  // Calcular o volume
  volume = (area * height);

  cout << "O volume da caixa d'água cilíndrica é de " << volume << "m³";
}