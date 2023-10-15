 /**
   * Universidad de La Laguna
   * Escuela Superior de Ingeniería y Tecnología
   * Grado en Ingeniería Informática  
   * Informática Básica 2023-2024
   * @file boolean_operators.cc
   * @author Diego Vegas Acosta alu0101651361@ull.edu.es
   * @date Oct 15 2023    
   * @brief The program does logic operations with 1 and 0
   * @bug There are no known bugs
   */

#include <iostream>

int main() {
  bool valor_1, valor_2;
  std::cin >> valor_1 >> valor_2;
 
  if ( ( valor_1 && valor_2 ) == true ) {
    std::cout << valor_1 << " and "  << valor_2 << ": true." << std::endl;
  }
  else {
    std::cout << valor_1 << " and "  << valor_2 << ": false." << std::endl;
  }

  if ( ( valor_1 || valor_2 ) == true ) {
    std::cout << valor_1 << " or "  << valor_2 << ": true." << std::endl;
  }
  else {
    std::cout << valor_1 << " or "  << valor_2 << ": false." << std::endl;
  }

  std::cout << "not: " << !valor_1 << " " << !valor_2 << std::endl;

  return 0;
}
  
