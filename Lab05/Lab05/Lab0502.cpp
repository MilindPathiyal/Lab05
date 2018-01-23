/************************************************
 * Student Name: Milind Paliath-Pathiyal
 * Student Number: 20714398
 * SYDE 121 Lab: #5 Assignment: 002
 * Filename: Lab0502
 *
 
 *RESUBMIT - NEW COPY
 
 * I hereby declare that this code, submitted
 * for credit for the course SYDE121, is a product
 * of my own efforts. This coded solution has
 * not been plagiarized from other sources and
 * as not been knowingly plagiarized by others.
 */
/*
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    
    //manager(fixed weekly salary)
    //hourly workers(fixed hourly wage up to the first 40 hrs, 1.5x/hr OT work)
    //commision workers($250 plus 5.7% of gross weekly sales)
    //pieceworkers(fixed amount of money per item for each item produced)
    
    double totalPeople;
    double x;
    double y;
    double total;
   
    double aSal;
    double aPeople;
    double aTotal;
    
    double bWage;
    double bHour;
    double bPeople;
    double bTotal;
    
    double cSale;
    double cPeople;
    double cTotal;
    
    double dWage;
    double dItem;
    double dPeople;
    double dTotal;
    char code;
    
    
    //RESUBMIT - NEW COPY
    
    cout << "Enter the number of total employees: ";
    cin >> totalPeople;
    cout << endl;
    x = totalPeople;
    cout << "Manager-------------A"<<endl;
    cout << "Hourly Workers------B"<<endl;
    cout << "Commision Workers---C"<<endl;
    cout << "Pieceworkers--------D"<<endl;
    
    
    while( totalPeople > 0)
    {
        cout << "Enter the code for your employee: ";
        cin >> code;
        switch(code)
        {
            
            //Manager
            case 'A':
            case 'a':
            cout << "Enter the fixed weekly salary: " <<endl;
            cin >> aSal;
            aPeople++;

                
            aTotal += aSal;
            break;
            
            //Hourly Worker
            case 'B':
            case 'b':
                cout << "Enter hourly wage: "<<endl;
                cin >> bWage;
                cout << "Enter # of hours worked this week: "<<endl;
                cin >> bHour;
                bPeople++;

            
            if (bHour >= 40)
                bTotal += ((1.5 * bWage) * (bHour - 40));
            else
                bTotal += bWage * bHour;
            break;
            
            
            //Commision Worker
            case 'C':
            case 'c':
                cout << "Enter your gross weekly sales: "<<endl;
                cin >> cSale;
                cPeople++;

                cTotal += (250 + .057 * cSale);
            break;
            
            
            //Pieceworker
            case 'D':
            case 'd':
                cout << "Enter fixed amount of money per item: "<<endl;
                cin >> dWage;
                cout << "Enter number of items produced: "<<endl;
                cin >> dItem;
                dTotal += dWage * dItem;
                dPeople++;

            break;
                
            default:
                cout << "Not a valid choice." << endl;
                cout << "Choose again." << endl;
                totalPeople ++;
                break;
        
        
        }

        totalPeople--;

    }
    y = aPeople + bPeople + cPeople + dPeople;
    total = aTotal+bTotal+cTotal+dTotal;
    cout << endl << "Employee Type" << setw(5) << " " << "Number of Employees" << setw(10) << "   " << "Total Pay" << endl;
    cout << endl << "----------------------------------------------------" << endl;
    cout << "Managers " << setw(20) << "   " << aPeople << setw(20) << "$"<< aTotal << endl;
    cout << "Hourly   " << setw(20) << "   " << bPeople << setw(20) << "$"<< bTotal << endl;
    cout << "Commision" << setw(20) << "   " << cPeople << setw(20) << "$"<< cTotal << endl;
    cout << "Piecewise" << setw(20) << "   " << dPeople << setw(20) << "$"<< dTotal << endl;
    cout << "Everyone " << setw(20) << "   " << y       << setw(20) << "$"<< total << endl;


    return 0;

}
 */
 
 



