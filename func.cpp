#include <iostream>

using namespace std;
void itc_name() { // 1 - имя / name
  setlocale(LC_ALL, "Russia");
  cout << "*** ";
}

void itc_fio() { // 2 - фио / fullname
  setlocale(LC_ALL, "Russian");
  itc_name();
  cout << "***** ******";
}

int itc_abs(int num) { // 3 - модуль / returns the absolute value of the given number
  if (num >= 0) {
    return num;
  } else
    return -num;
}

double itc_fabs(double num) { // 4 - модуль числа с точкой / returns the absolute value of the given number( but its double )
  if (num >= 0) {
    return num;
  } else
    return num * -1;
}

int itc_revnbr(int num) { // 5 - трехзначное наоборот / flips a three digit number
  if (num > 0)
    return (100 * (num % 10)) + (10 * (num / 10 % 10)) + (1 * (num / 100));

  else {
    num *= -1;
    return (-100 * (num % 10)) + (-10 * (num / 10 % 10)) + (-1 * (num / 100));
  }
}

bool itc_iseven(int num) { // 6 - четное не четное / odd or even
  if (num % 2 == 0)
    return true;
  else
    return false;
}

int itc_max(int num, int num2) { // 7 - максимальное целое число / max int numb
  if (num > num2)
    return num;
  else
    return num2;
}

int itc_min(int min1, int min2) { // 8 - минимально целое число / min int numb
  if (min1 > min2)
    return min2;
  else
    return min1;
}

double itc_fmax(double num,
                double num2) { // 9 - максимальное вещественное число / max double numb
  if (num > num2)
    return num;
  else
    return num2;
}

double itc_fmin(double num,
                double num2) { // 10 - минимальное вещественное число / min double numd
  if (num > num2)
    return num2;
  else
    return num;
}

int itc_sqrt(int num) { // 11 - КОРЕНЬ числа ВТФ / square root
  if ( num > 0){
  for (int i = 0; i < num; i++) {
    if (num == i * i) {
      return i;
    }
  }
    }
  if ( num == 0){
    return 0;
  }
  return -1;
}

int itc_skv(int num) { // 12 - площадь квадрата / 
  if (num > 0)
    return num * num;
  else
    return -1;
}

int itc_spr(int a, int b) { // 13 - площадь прямоугольника
  if (a > 0 && b > 0)
    return a * b;
  else
    return -1;
}

int itc_str(int a, int b, int c) { // 14 - площадь треугольника / area of square 
  int p = (a + b + c) / 2, s = 0;
  s = p * (p - a) * (p - b) * (p - c);
  if (a > 0 && b > 0 && c > 0) {
    if (itc_sqrt(s) > 0)
    return itc_sqrt(s);
  } 
  return -1;
}



double itc_scir(int radius) { // 15 - площадь круга через радиус / area of circle 
  if (radius > 0)
    return 3.14 * (radius * radius);
  else
    return -1;
}

double itc_pow(int num, int step) { // 16 - степень числа / numb of squared
  int num_save = num;
  if (step > 0) {
    for (int i = 1; i < step; i++) {
      num *= num_save;
    }
    return num;
  }
  if (step == 0) {
    return 1;
  }
  if (step < 0) {
    for (int i = 1; i < (step * -1); i++) {
      num *= num_save;
    }
    return 1.0 / num;
  }
}

bool itc_ispositive(
    int num) { // 17 - целое число положительное или отрицательное / positive or negative number ( int )
  if (num >= 0)
    return true;
  if (num < 0)
    return false;
}

bool itc_ispositive_d(
    double num) { // 18 - вещественное число положительное или отрицательное / positive or negative number ( double )
  if (num >= 0)
    return true;
  if (num < 0)
    return false;

}
