/************************************************
 * Student Name: Milind Paliath-Pathiyal
 * Student Number: 20714398
 * SYDE 121 Lab: #5 Assignment: 001
 * Filename: Lab0501
 * 
 *
 * I hereby declare that this code, submitted
 * for credit for the course SYDE121, is a product
 * of my own efforts. This coded solution has
 * not been plagiarized from other sources and
 * as not been knowingly plagiarized by others.
 */

/*
#include <iostream>
using namespace std;

int main() {
    
    int x= 0;
    int y= 0;
    int z= 0;
    int con = 0;
    //Make sure user enters a valid input
    while(con == 0){
        cout<<"Enter an odd number less than 20 for the number of rows: ";
        cin>> x;
        if(x <= 20){
            con = 1;
        }
    }
    
    int  space = x / 2;
    int m = 1;
    
    //One FOR loop with nested loops
    for (z=1;z<=x;z++)
    {
        
        if (z <= x/2 + 1)   //completes first half of diamond
        {
            for (y= 1;y<=space;y++)
                cout<<" ";
            space--;
            for (y= 1;y<= 2*z-1;y++)
                cout<<"*";
        }
        else    //completes bottom half of diamond
        {
            if( m == 1)
                space = 1;
                m++;
            for (y= 1;y<= space;y++)
                cout<<" ";
            for(y = x-(space*2); y> 0; y--)
                cout<<"*";
            space++;
        }
        cout << endl;
    }
}

*/
