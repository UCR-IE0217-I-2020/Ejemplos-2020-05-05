#include <string>
using namespace std;

namespace estacion
{
class Estacion
{
private:
    string nombre;

public:
    Estacion(string);

    string obtenerNombre();
};

class Tren
{
private:
    int numero;
    Estacion *estacionActual;

public:
    Tren(Estacion *, int);
};

class Mapa
{
public:
    void imprimirNombre(Estacion *);
};

void main();
} // namespace estacion