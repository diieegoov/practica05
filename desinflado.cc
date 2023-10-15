/**
   * Universidad de La Laguna
   * Escuela Superior de Ingeniería y Tecnología
   * Grado en Ingeniería Informática  
   * Informática Básica 2023-2024
   * @file desinflado.cc
   * @author Diego Vegas Acosta alu0101651361@ull.edu.es
   * @date Oct 11 2023    
   * @brief The program transforms a lower case letter in a Capital one
   * @bug There are no known bugs
   * @see https://jutge.org/problems/
   */

#include <iostream>

int main() {
  char letra;
  char letra_minuscula;
  std::cin >> letra;
  letra_minuscula = ( static_cast<int>(letra) + 32 );
  std::cout << char(letra_minuscula) << std::endl;

 return 0;
} 
