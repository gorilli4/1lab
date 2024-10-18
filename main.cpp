#include <iostream>
#include "include/task.h"

//using namespace std;
int main()
{
  int Upspeed, Downspeed, Desiredheight;
  std::cout << "enter : Upspeed";
  std::cin  >> Upspeed;
  std::cout << "enter : Downspeed";
  std::cin  >> Downspeed;
  std::cin >> Desiredheight;
  std::cout << "enter : Desiredheight";


  std::cout << "result: " << task(Upspeed, Downspeed, Desiredheight) << std::endl;
  return 0;
}