#include <iostream>
using namespace std;
int main() {
  char nombre[40];
  int puntos,equipos,red ;
  float totald=0,ntotalc=0,nprecio=0,mprecios=0,imprevisto,costocable,preciototalc=0,preciomateriales,ganancia,totalpagar;
  cout << "\t\t\t\tEmpresa de Electrocables\n";
  cout<<" Ingrese el nombre del lugar de instalacion\n";
  cin>>nombre;
  cout<<" ingresa el numero de puntos que van aser instalados \n";
  cin>>puntos;
  for(int i=1;i<=puntos;i++){
    cout<<"Punto de red "<<i<<"\n";
    cout<<"ingrese la distancia entre el conector el punto de red hasta el equipo de conectividad\n";
    cin>>equipos;
    cout<<"ingrese el numero de conectores para el punto de red \n";
    cin>>red;
    totald=totald+(equipos*red);
    ntotalc=red*2;
    nprecio=nprecio+(ntotalc*0.35);
    mprecios=mprecios+(ntotalc*0.15);
    
  }
  imprevisto=(totald*0.05)+totald;
  costocable=totald*0.90;
  preciototalc=((nprecio+mprecios)*0.15)+(nprecio+mprecios);
  preciomateriales=costocable+preciototalc;
  ganancia=preciomateriales*0.45;
  totalpagar=preciomateriales+ganancia;

     cout<<"\t\t\t Detalle de la instalacion \n\n";
     cout<<"la distancia del cable utilizado en la instalacion es:" 
     <<imprevisto<<"\n";
     cout<<"el cuarto de cable segun la categoria :" 
     <<costocable<<"\n";
     cout<<" Precicio total de los conectores RJ45 se es:" 
     <<preciototalc<<"\n";
     cout<<"el total de material utilizado: "
     <<preciomateriales<<"\n";
     cout<<"la ganancia es : "
      <<ganancia<<"\n";
     cout<<" total para pagar su instalacion:"
      <<totalpagar<<"\n";



}