/************************************************
 * Student Name: Milind Paliath-Pathiyal
 * Student Number: 20714398
 * SYDE 121 Lab: #5 Assignment: 003
 * Filename: Lab0503
 * 
 *
 * I hereby declare that this code, submitted
 * for credit for the course SYDE121, is a product
 * of my own efforts. This coded solution has
 * not been plagiarized from other sources and
 * as not been knowingly plagiarized by others.
 */


#include <iostream>
#include <cmath>
using namespace std;

int main(){
    
    cout.setf (ios::fixed);
    cout.precision(12);
    double tol = 1;
    double pi = 0;
    double denom = 1;
    double c = 1;
    double j;
    
    while (tol > 0.1 || tol < 0.0){
        cout << "Enter a tolerance level between 0.0 - 0.1: ";
        cin >> tol;
    }

    for (int count = 1; c > tol; count++)     //FIX TOL
    {
        j = pi;
        
            if (count % 2 == 1)
            {
                pi += (4.0/ denom);
            }
            else
            {
                pi -= (4.0/denom);
            }
        
        denom+=2;
        
            cout << count << ":         " << pi << endl;
            c = fabs(pi - j);
    }
    
}
 


