//ZADATAK 1
/*

#include <iostream>

class Tocka2D {
  public:
    void prikazPodataka() {
      std::cout << x << std::endl;
      std::cout << y << std::endl;
    }
    double x;
    double y;
};

int main(){
  Tocka2D tocka;
  tocka.prikazPodataka();
}
*/

//ZADATAK2

/*
#include <iostream>

class Tocka2D {
  public:    
    void postaviX(double noviX) {
      x = noviX;
    }
    void postaviY(double noviY) {
      y = noviY;
    }
    void postavi(double noviX, double noviY){
      x = noviX;
      y = noviY;
    }
    void info() {
      std::cout << x << std::endl;
      std::cout << y << std::endl;
    }
  private:
    double x;
    double y;
};

int main(){
  Tocka2D tocka;
  tocka.postavi(2, 3);
  tocka.info();
}

*/

//ZADATAK3

#include <iostream>

class Tocka2D {
  public:
    void prikazPodataka() {
      std::cout << x << std::endl;
      std::cout << y << std::endl;
    }
    double x;
    double y;
};

int main(){
  Tocka2D tocka;
  tocka.prikazPodataka();
}