#include <iostream>

#include "assignment/code.hpp"

using namespace std;
using namespace assignment;



int main() {

  int arr[6] = {1,2,3,4,5,6};
  std::cout << allocate_arr(5,7);

  return 0;
}
