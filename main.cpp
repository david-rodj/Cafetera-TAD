#include <iostream>
#include "Cafetera.h" 

int main(){
  Cafetera* cafetera = new Haceb();
  cafetera->capuchino(); cafetera->tinto();
  delete cafetera;

  cafetera = new Oster();
  cafetera->capuchino(); cafetera->tinto();
  delete cafetera;

  return 0;
}