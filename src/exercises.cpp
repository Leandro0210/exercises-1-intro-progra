
#include <cmath>
#include <iostream>
#include <cctype>
#include <string>

using namespace std;

void exercise_1(string s1, string s2, string s3) {

}

void exercise_2(double A, double B, double C) {
// TODO: YOUR CODE HERE
double D = B * B - 4 * A * C ;
    if (D > 0 && A != 0)
    {
         double d_sqrt = sqrt (D);
         double x1 = (-B + d_sqrt)  / (2*A);
         double x2 = (-B - d_sqrt) /  (2*A); 
         cout<<x1<<" "<<x2<<endl;
    }
    else if (D==0 && A != 0)
    {
    double d_sqrt = sqrt (D);
    double x1 = (-B + d_sqrt) / (2*A);
    cout<<x1<<endl;
    }
    else if(A==0 && B!=0)
    {
          cout<< (-1*(C))/B <<endl; 
    }
    else if (A!=0 && B==0 )
    {
        cout<< sqrt (C/A) << endl; 
    }
    else
    {
          cout<<"";
    }
}


int exercise_3(int a, int b) {
  if (b == 0) {
        cout << "Impossible" << endl;
        return 0;
    } else {
      
        return a / b;
    }
}

void exercise_4(double n, double a, double b, double x, double y) {
  // TODO: YOUR CODE HERE
}

void exercise_5(char character) {
  // TODO: YOUR CODE HERE
}

void exercise_6(int number) {
  // TODO: YOUR CODE HERE
  switch (number) {
        case 1:
        cout<<"Monday"<<endl;
        break;
          case 2:
        cout<<"Tuesday"<<endl;
        break;
         case 3:
        cout<<"Wednesday"<<endl;
        break;
         case 4:
        cout<<"Thursday"<<endl;
        break;
         case 5:
        cout<<"Friday"<<endl;
        break;
         case 6:
        cout<<"Saturday"<<endl;
        break;
         case 7:
        cout<<"Sunday"<<endl;
        break;
        default:
        cout<<"Invalid input"<<endl;
        break;
    }
}

void exercise_7(double r) {
  // TODO: YOUR CODE HERE
  if(ra < 0) {
        cout<<"Error: Radius cannot be negative."<<endl;
        
    } else {
        double pi = M_PI;
        double area = (4*pi)*(ra*ra);
        cout<<area<<endl;
        
    }
  
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