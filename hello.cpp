#include <iostream>

int main() {
  int a, b;
  int somma;
  char op;

  std::cout << "inserisci il primo numero: ";
  std::cin >> a;

  std::cout << "inserisci il secondo numero: ";
  std::cin >> b;

  std::cout << "cosa vuoi fare(+,-,*,/): ";
  std::cin >> op;

  switch (op) {
  case '+':
    somma = a + b;
    break;
  case '-':
    somma = a - b;
    break;
  case '*':
    somma = a * b;
    break;
  case '/':
    if (b == 0) {
      std::cout << "errore la divisione non se po fa" << std::endl;

      return 1;
    }
    somma = a / b;
    break;
  }

  std::cout << "La somma è: " << somma << std::endl;

  return 0;
}
