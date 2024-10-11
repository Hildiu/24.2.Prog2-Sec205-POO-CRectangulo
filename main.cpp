/*-----------------------------------------------------
 * Dato de Entrada: largo, ancho (double)
 * Dato de Salida: perimetro, area (double)
 ------------------------------------------------------*/


#include "CRectangulo.h"

int main()
{
  CRectangulo    R1;

  R1.setLargo(50);
  R1.setAncho(15);
  cout << "El perimetro es: " << R1.perimetro() << "\n";
  cout << "El area      es: " << R1.area() << "\n";

  //---- ahora creamos el segundo objeto
  double l, a;
  cout << "Largo: ";
  cin >> l;
  cout << "Ancho: ";
  cin >> a;
  CRectangulo R2(l,a);
  cout << "\nsegundo Objeto\n";
  cout << "El perimetro es: " << R2.perimetro() << "\n";
  cout << "El area     es : " << R2.area() << "\n";
  cout << "Ahora repetimos el calculo de R2 \n";
  R2.setLargo(R2.getLargo() + 10);
  R2.setAncho(R2.getAncho() + 10);
  cout << "El perimetro es: " << R2.perimetro() << "\n";
  cout << "El area     es : " << R2.area() << "\n";

    return 0;
}
