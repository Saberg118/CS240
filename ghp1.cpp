//This program creates a static matrix of integers
//Fills the matrix using a numbers taken from the user
//Displays the matrix to the user
//Asks the user for an integer and 
//Tests to see if the integer is in the matrix
//by using a boolean variable and an if/ else statement
//Tells the user whether or not the integer is in the matrix
//Written by Kiera Walsh
//Date created: January 29, 2020
//Last revised: January 30, 2020
//Language: C++11
//Compiler used: (g++ target)
//Outside sources: course textbook and old program examples 
//from Urban's CS108 class

#include<iostream>      //needed to access cin and cout
using namespace std;   

//This function creates a static matrix, prompts the user for integers
//Fills the matrix with those integers
//Prompts for a number to search for
//Tests the integer and informs the user of the result
int main(void)
{    

    int matrix[3][3];   //3x3 array
    int r = 3;          //number of rows
    int c = 3;          //number of columns
    int findme;         //integer to find in the matrix
    bool found;         //variable to store true or false

    //This loop iterates through the static array and a
    //prompts the user for integers to fill a 3 by 3 matrix
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cout<<"Please enter a positive integer: "<<endl;
            cin>>matrix[i][j];
        }
    }

    cout<<endl;     //endline for spacing

    //This loop iterates through the static array and
    //print out the matrix for the user in a 3x3 grid
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<" "<<endl;
    }

    cout<<endl;     //endline for spacing

    //Prompts the user for an integer to search for in the matrix
    cout<<"Please enter an integer to see if it is in the matrix: "<<endl;
    cin>>findme;   

    cout<<endl;     //endline for spacing

    
    found = false;      //store found as false value

    //iterates through the static array and stops the loop
    //if and when the integer you are looking for is found
    for(int i=0; i<r && !found; i++)
    {
        for(int j=0; j<c && !found; j++)
        {
           if(findme == matrix[i][j])
              found = true;     //store found as a true value
        }
    }

    //Displays the result of the search to the user
    if(found == true)
        cout<<"Yes, this number is in the matrix"<<endl;
    
    else
        cout<<"No, this number is NOT in the matrix"<<endl;
    
    cout<<endl;     //endline for spacing

    return 0;   //returns 0 
}