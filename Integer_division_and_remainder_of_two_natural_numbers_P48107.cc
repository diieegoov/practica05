/**
   * Universidad de La Laguna
   * Escuela Superior de Ingeniería y Tecnología
   * Grado en Ingeniería Informática  
   * Informática Básica 2023-2024
   * @file Integer_division_and_remainder_of_two_natural_numbers_P48107.cc
   * @author Diego Vegas Acosta alu0101651361@ull.edu.es
   * @date Oct 10 2023    
   * @brief The program divide two numbers and gives the remainder
   * @bug There are no known bugs
   * @see https://jutge.org/problems/P48107
   */

#include <iostream>

int main() {
	int dividendo, divisor;
	std::cin >> dividendo >> divisor;
	std::cout << dividendo / divisor  << " ";
  std::cout << dividendo - ( divisor * ( dividendo / divisor )) << std::endl;  

	return 0;
}
