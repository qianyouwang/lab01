/*
Code originally by P. Conrad, 2016
Code modified   by Z. Matni, Oct. 2016
Code modified   by Haolan Li Oct. 8 2019
*/
#include <iostream>
#include <cstdlib>

using namespace std;

inline int smallest_of_two(int num1, int num2) {
  if (num1 < num2) {
    return num1;
  }

  return num2;
}

inline int smallest_of_three(int num1, int num2, int num3) {
  return smallest_of_two(num1,smallest_of_two(num2, num3));
}

inline int smallest_of_four(int num1, int num2, int num3, int num4) {
  return smallest_of_two(smallest_of_two(num1,num2), smallest_of_two(num3, num4));
}

int main(int argc, char *argv[])  {
  if (argc != 5) {
    cerr << "Usage: " << argv[0] << " num1 num2 num3 num4" << endl;
    cerr << " Prints smallest of the four numbers" << endl;
    exit(1);
  }

  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  int c = atoi(argv[3]);
  int d = atoi(argv[4]);

  cout << smallest_of_four(a, b, c, d) << endl;
  
  return 0;
}
