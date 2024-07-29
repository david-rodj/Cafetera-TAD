#ifndef CAFETERA_H
#define CAFETERA_H
#include <iostream>

class Cafetera{
private:

protected:

public:
  virtual void capuchino() = 0;
  virtual void tinto() = 0;
  virtual ~Cafetera(){ }
};

class Oster: public Cafetera{
private:
protected:
public:
  Oster(){ }
  ~Oster(){ }
  void capuchino() override{
    std::cout<<"Capuchino de Oster\n";
  }
  void tinto() override{
    std::cout<<"Tinto de Oster\n";
  }
};

class Haceb: public Cafetera{
private:
protected:
public:
  Haceb(){ }
  ~Haceb(){ }
  void capuchino() override{
    std::cout<<"Capuchino de Haceb\n";
  }
  void tinto() override{
    std::cout<<"Tinto de Haceb\n";
  }
};

#endif // CAFETERA_H