 /**
   * Universidad de La Laguna
   * Escuela Superior de Ingeniería y Tecnología
   * Grado en Ingeniería Informática  
   * Informática Básica 2023-2024
   * @file arithmetic_operators.cc
   * @author Diego Vegas Acosta alu0101651361@ull.edu.es
   * @date Oct 12 2023    
   * @brief The program does the operation that is puted in the input of two inter  numbers
   * @bug There are no known bugs
   * @see https://jutge.org/problems/
   */

#include <iostream>

int main() {
  int numero_1, numero_2;
  char operador;
  std::cin >> numero_1 >> operador >> numero_2;
  switch(operador) {
    case '+':
      std::cout << numero_1 << " + " << numero_2 << " = ";
      std::cout << numero_1 + numero_2 << std::endl;
      break;
    case '-':
      std::cout << numero_1 << " - " << numero_2 << " = ";
      std::cout << numero_1 - numero_2 << std::endl;
      break;
    case '*':
      std::cout << numero_1 << " * " << numero_2 << " = ";
      std::cout << numero_1 * numero_2 << std::endl;
      break;
    case '/':
      std::cout << numero_1 << " / " << numero_2 << " = ";
      std::cout << numero_1 / numero_2 << std::endl;
      break;
    case '%':
      std::cout << numero_1 << " % " << numero_2 << " = ";
      std::cout << numero_1 % numero_2 << std::endl;
      break;
  }

  return 0;
}
