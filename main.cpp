// file for test func.cpp

#include "easy.h"
#include <iostream>

using namespace std;

int main() {
  itc_fio(); // 1
  cout << endl;
  cout << itc_abs(7); // 2
  cout << endl;
  cout << itc_fabs(-0.1111) << endl; // 3
  cout << itc_revnbr(123) << endl; // 4
  cout << itc_iseven(4) << endl; // 5
  cout << itc_max(0, -6) << endl; // 6
  cout << itc_min(-56, -56) << endl; // 7
  cout << itc_fmax(5.2, 1.2) << endl; // 8
  cout << itc_fmin(84.412, 84.92) << endl; // 9
  cout << itc_sqrt(9) << endl; // 10
  cout << itc_skv(5) << endl; // 11
  cout << itc_spr(5, 0) << endl; // 12
  cout << itc_str(1,2,3) << " ------13" << endl; // 13
  cout << itc_scir(5) << endl; // 14
  cout << itc_pow(-2, -3) << endl; // 15
  cout << itc_ispositive(-1) << endl; // 16
  itc_ispositive_d(-0.2); // 17


  return 0;
}
