#include <iostream>
#include <math.h>
#include <cstdlib>
#include <stdio.h>
using namespace std;

int main() 
{
int liczba;
float max=-900000000;
float min=900000000;
float suma =0;
int licznik=0;
char klawisz;
do
{
  cout<<"Wprowadź liczbę\n";
  cin>>liczba;
  suma = suma+liczba;
  licznik++;
  if (max<liczba)
  {
    max=liczba;
  }
  if (min>liczba)
  {
    min=liczba;
  }
  cout<<"Czy to koniec gierek?\n Jeśli tak wpisz t\n Lecz gdy chcesz się jeszcze bawić wpisz n\n";
  cin>>klawisz;

}
while (klawisz!='t');
cout<<"Jak nie chcesz się więcej bawić to PaPa\n";
cout<<"Wartość maksymalna wynosi "<<max<<endl;
cout<<"Wartość minimalna wynosi "<<min<<endl;
cout<<"Średnia wynosi "<<suma/licznik<<endl;

return 0;
}