/* 
This program creates three static 3x3 matrices of integers
Fills two of the three matrices using possitive integers 
inputed by the user
Displays the first and second matrices
Adds those two matrices together to get the third matrix
And displays the third matrix
Written by Kiera Walsh
Date created: Feburary 6, 2020
Last revised: Feburary 11, 2020
Language: C++11
Compiler used: (g++ target)
Outside sources: course textbook and old program examples
*/

#include<iostream>    

using namespace std;

//Prototypes declared below
void first_matrix (int[][3],int, int);
void second_matrix (int[][3], int, int);
void display_m1 (int[][3], int, int);
void display_m2 (int[][3], int, int);
void third_matrix(int[][3], int[][3], int[][3], int, int);
void display_m3(int[][3], int, int);

int main(void)
{
    int matrix1[3][3];        
    int matrix2[3][3];      
    int matrix3[3][3];    
    int r, c;
    r = 3;
    c = 3;

    first_matrix (matrix1, r, c);
    second_matrix (matrix2, r, c);
    display_m1 (matrix1, r, c);
    display_m2 (matrix2, r, c);
    third_matrix(matrix1, matrix2, matrix3, r, c);
    display_m3(matrix3, r, c);

    return 0;
}

/* 
This function will fill the first matrix by
querying the user for possitive integers
Written by Kiera Walsh
Date created: Feburary 6, 2020
Last revised: Feburary 11, 2020
Language: C++11
Compiler used: (g++ target)
Outside sources: course textbook and old program examples
and assignments from Professor's Urban's class
*/

void first_matrix(int m1[][3], int row, int col)
{
    cout<<"You are about to fill the first matrix"<<endl;
    cout<<endl<<endl;

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<"Please enter a positive integer: "<<endl;
            cin>>m1[i][j];
        }
    }
    cout<<endl<<endl;
    cout<<"You have filled the first matrix"<<endl;
    cout<<endl<<endl;

    return;

}

/* 
This function will fill the second matrix by
querying the user for possitive integers
Written by Kiera Walsh
Date created: Feburary 6, 2020
Last revised: Feburary 11, 2020
Language: C++11
Compiler used: (g++ target)
Outside sources: course textbook and old program examples
and assignments from Professor's Urban's class 
*/

void second_matrix (int m2[][3], int row, int col)
{
    cout<<"You are about to fill the second matrix"<<endl;
    cout<<endl<<endl;

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<"Please enter a positive integer: "<<endl;
            cin>>m2[i][j];
        }
    }
    cout<<endl<<endl;
    cout<<"You have filled the second matrix"<<endl;
    cout<<endl<<endl;

    return;

}

/* 
This function will display the first martix
Written by Kiera Walsh
Date created: Feburary 6, 2020
Last revised: Feburary 11, 2020
Language: C++11
Compiler used: (g++ target)
Outside sources: course textbook and old program examples 
and assignments from Professor's Urban's class
*/

void display_m1 (int m1[][3], int row, int col)
{
    cout<<"First Matrix: "<<endl;
    cout <<endl;

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<m1[i][j]<<" ";
        }
        cout<<" "<<endl;
    }
    cout<<endl<<endl;

    return;
}

/* 
This function will display the second martix
Written by Kiera Walsh
Date created: Feburary 6, 2020
Last revised: Feburary 11, 2020
Language: C++11
Compiler used: (g++ target)
Outside sources: course textbook and old program examples 
and assignments from Professor's Urban's class
*/

void display_m2 (int m2[][3], int row, int col)
{
    cout<<"Second Matrix: "<<endl;
    cout <<endl;

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<m2[i][j]<<" ";
        }
        cout<<" "<<endl;
    }
    cout<<endl<<endl;

    return;
}

/* 
This function will calculate the third martix
by adding the first and second matrix together
Written by Kiera Walsh
Date created: Feburary 6, 2020
Last revised: Feburary 11, 2020
Language: C++98
Compiler used: (g++ target)
Outside sources: course textbook and old program examples 
and assignments from Professor's Urban's class
*/
void third_matrix(int m1[][3], int m2[][3], int m3[][3], int row, int col)
{

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            m3[i][j]=m1[i][j]+m2[i][j];
        }
    }

    return;
}

/* 
This function will display the third martix
Written by Kiera Walsh
Date created: Feburary 6, 2020
Last revised: Feburary 11, 2020
Language: C++98
Compiler used: (g++ target)
Outside sources: course textbook and old program examples 
and assignments from Professor's Urban's class
*/

void display_m3(int m3[][3], int row, int col)
{
    cout<<"Third Matrix: "<<endl;
    cout<<endl;
    
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<m3[i][j]<<" ";
        }
        cout<<" "<<endl;
    }
    cout<<endl;

    return;
}
