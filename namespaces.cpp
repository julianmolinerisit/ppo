#include <iostream>

// Si ponemos dos variables dentro de la misma función con el mismo nombre nos va a dar error.

/* int main() {
 int x = 0;
 int x = 1;
  return 0;
 }*/

// Si las separamos con namespace no da el error.

namespace primero
{
    int x = 1;
}

namespace segundo
{
    int x = 2;
}

int main()
{
    int x = 0;
    std::cout<<"X ="<< primero::x ;  //Trae la primer variable.
    std::cout<<"X ="<< segundo::x ;  //Trae la segunda variable.

    return 0;
}
