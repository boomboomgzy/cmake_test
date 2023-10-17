#include"./include/hello.h"
#include"./include/hello2.h"
#include<iostream>

int& func(){
  int a=10;
  int& b=a;
  return b;
}

int main() {
  int& c=func();
  std::cout<<c;
}
