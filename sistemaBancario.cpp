Aquí hay algunos problemas y mejoras que se pueden hacer en el código:

1. En el `switch`, deberías moverlo dentro del bucle `do-while` para que se ejecute mientras el usuario no elija la opción de salida (opción 4).
2. En los casos 3 y 4, los dos puntos (`:`) deben ser cambiados por punto y coma (`;`).
3. En la función `mostrarSaldo`, se necesita pasar el parámetro `saldo`.
4. En la función `retirar`, no es necesario pasar `saldo` como parámetro, ya que ya se está utilizando la variable global `saldo`.

Aquí está el código corregido:

```cpp
#include <iostream>
#include <iomanip>

void mostrarSaldo(double saldo);
double deposito();
double retirar();

int main()
{

    double saldo = 0;
    int opc = 0;

    do
    {

        std::cout << "***********************";
        std::cout << "Ingrese una opcion:\n >";
        std::cout << "1- Mostrar saldo:\n >";
        std::cout << "2- Depositar dinero:\n >";
        std::cout << "3- Retirar dinero :\n >";
        std::cout << "4- Salir:\n >";
        std::cin >> opc;

        switch (opc)
        {
        case 1:
            mostrarSaldo(saldo);
            break;
        case 2:
            saldo += deposito();
            mostrarSaldo(saldo);
            break;
        case 3:
            saldo -= retirar();
            mostrarSaldo(saldo);
            break;
        case 4:
            std::cout << "Gracias por su visita! \n";
            break;
        default:
            std::cout << "Eleccion no valida\n";
        }

    } while (opc != 4);

    return 0;
}

void mostrarSaldo(double saldo)
{
    std::cout << "Su balance es: $" << std::setprecision(2) << std::fixed << saldo << "\n";
}

double deposito()
{

    double monto = 0;

    std::cout << "Ingrese el monto a depositar:";
    std::cin >> monto;

    if (monto > 0)
    {
        return monto;
    }
    else
    {
        return 0;
    }
}

double retirar()
{

    double monto = 0;

    std::cout << "Ingrese el monto a retirar:";
    std::cin >> monto;

    return monto;
}
```

