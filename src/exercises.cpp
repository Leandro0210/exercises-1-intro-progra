
#include <cmath>
#include <iostream>

using namespace std;

void exercise_1(string s1, string s2, string s3) {
string ed;
ed = s1;
if (ed > s2) {
  ed = s2;

}
if (ed > s3) {
  ed = s3;
}
cout << ed;
}

void exercise_2(double A, double B, double C) {
  double dt = B * B - 4 * A * C;
  if (dt < 0) {
    return;
  }
  double raiz1 = (-B + sqrt(dt)) / (2 * A);
    double raiz2 = (-B - sqrt(dt)) / (2 * A);

    if (raiz1 != raiz2) {
        cout << raiz1 << " " << raiz2;
    } else {
        cout << raiz1;
    }
}

int main() {
    double A, B, C;
    cin >> A >> B >> C;
    
    exercise_2(A, B, C);
    
    return 0;
}

void exercise_3(int a, int b) {
  // TODO: YOUR CODE HERE
}

void exercise_4(double n, double a, double b, double x, double y) {
  // TODO: YOUR CODE HERE
}

void exercise_5(char character) {
  // TODO: YOUR CODE HERE
}

void exercise_6(int number) {
  // TODO: YOUR CODE HERE
}

void exercise_7(double r) {
  // TODO: YOUR CODE HERE
}

void exercise_8(long int seconds) {
  // TODO: YOUR CODE HERE
}

string exercise_9(string s1, string s2, string s3, string s4, string s5) {
  // TODO: YOUR CODE HERE
  return "";
}

int exercise_10(int a, int b) {
  // TODO: YOUR CODE HERE
}

string exercise_11(int number) {
  // TODO: YOUR CODE HERE
  return "";
}

void exercise_12(string color1, int numb1,
                 string color2, int numb2,
                 string color3, int numb3,
                 string color4, int numb4) {
  // TODO: YOUR CODE HERE
}

string exercise_13(int age, int years_of_experience) {
  // TODO: YOUR CODE HERE
  return "";
}

string exercise_14(int number_of_docs) {
  // TODO: YOUR CODE HERE
  return "";
}

void exercise_15(int a, int b, int c) {
  // TODO: YOUR CODE HERE
}

void exercise_16(int debut, int fin) {
  // TODO: YOUR CODE HERE
}