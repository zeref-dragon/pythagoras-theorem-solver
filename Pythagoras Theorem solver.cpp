#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std; 
int main() {
 cout << "Enter the value of breadth and height of the triangle"<< endl; 
float breadth = 0, height = 0; 
cin >> breadth >> height; 
 float hypotenuse = 0;
  hypotenuse = pow(breadth,2) + pow(height,2); 
 hypotenuse =  sqrt (hypotenuse);
  cout << "The hypotenuse of the triangle you inputted parameters for is: "<< hypotenuse << endl;


  cout << "                          /| " << endl ;
  cout << "                         / | " << endl ;
  cout << "                        /  | " << endl ;
  cout << "                       /   | " << endl ;
  cout << "                      /    | " << endl ;
  cout << "                   H /     |L "<< endl ;
  cout << "                    /      | " << endl ;
  cout << "                   /       | " << endl ;
  cout << "                  /        | " << endl ;
  cout << "                 /_________| " << endl ;
  cout << "                      B\n\n" << endl;


cout << "H = "<< hypotenuse << endl;
cout << "L = "<< height << endl;
cout << "B = "<< breadth << endl;
}


