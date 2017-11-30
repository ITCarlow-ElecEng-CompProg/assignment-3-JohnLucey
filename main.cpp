/*Standard Deviation Calculator
Created on 25-9-17
Author - John Lucey
Last Edited 3-10-17*/


//Pre-Programming Directive
#include <iostream>
#include <math.h>
using namespace std;


//Main Function
int main()
{
    //Decalaring Variables
    double sum = 0, sum1 = 0, array[10] = {0}, stan, mean;
    int i;

    //Displays prog title
    cout <<"\n"<< "Standard Deviation Calculator!" << endl;

    //while loop to ensure value greater than 0 is entered
    for (i=0;i<10;i++)

    {
            //Prompts user to enter a value
            cout<<"\n\n"<< "Enter 10 Values for Calulation =" <<endl;
            //input is stored
            cin>>array[i];
    }

    //Loop to calulate sum of values
    for (i=0;i<10;i++)

    {
            sum = sum +array[i];
    }

    //equation for mean value
    mean = sum/10;

    //For Loop to calulate stan dev
    for(i=0;i<10;i++)
    {
            //stan dev equation
            sum1 = sum1 + ((array[i]-mean)*(array[i]-mean));
    }
    //stan dec calculated
    stan = sqrt(sum1/9);

    //mean result displayed to user
    cout<<"\n"<<"Mean Value = "<<mean;

    //stan dev result displayed to user
    cout<<"\n"<<"Standard Deviation  = "<<stan<<endl;

    return 0;
}
