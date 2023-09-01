#include"./include/hello.h"
#include"./include/hello2.h"
#include<iostream>

int main()
{
   SayHello();
   for(int i=0;i<3;i++){
      std::cout<<i<<std::endl;
   }
   return 0;
}