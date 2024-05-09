
//cout (operador de insercion)

//cint (operador de extraccion)

#include <iostream>

int main() {

 std::string nombre;
int edad;


 std::cout << "Cual es su nombre?";
 std::cin >> nombre;

  std::cout << "Cual es su edad?";
 std::cin >> edad;

 std::cout << "Hola" << nombre;   //Con /n podemos hacer saltos de linea
 std::cout << "Tu edad es" << edad;

return 0;
 
}
