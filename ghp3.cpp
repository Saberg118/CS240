//This program queries the user for the name of a file 
//searches the string and counts the number of consonants and 
//vowels found in the file and displays the results to the user.
//Written by Kiera Walsh
//Date created: February 24, 2020
//Last revised: March 1, 2020
//Language: C++11
//Compiler used: (g++ target)
//Outside sources: course textbook,program handout written 
//to handle files by Professor Sarner and old program examples
//from Professor Urban's CS108 class

#include<iostream>
#include<fstream>
#include<string>
#include<cassert>

using namespace std;

char convert_to_upper(char);
void display_results(int, int);
int main(void)
{

    string userFileName;
    string s = "";
    ifstream fileIn;

    //Query the user for a file name to open and notify them
    //if the file does not open correctly

    cout<<"Enter the name of the file to find out how many "
    <<"vowels and consonats are in there: ";
    cin>>userFileName;
    fileIn.open(userFileName.data());

    if(!fileIn.is_open())
    {
         perror("The file didn't open correctly");
         exit(EXIT_FAILURE);
    }

    assert(fileIn.is_open());

    //variables declared below
    int i;
    char ch;
    i=0;
    int vowel;
    int consonant;
    vowel = 0;
    consonant = 0;

    //iterate through the file and test to see whether its a vowel
    //or consonant and ignore everything else
    while(!(fileIn.eof()))
    {
        ch=fileIn.get();
        s.insert(i,1,ch);

        s[i]= convert_to_upper(ch);

        if(s[i] == 'A'|| s[i] == 'E'|| s[i] == 'I'|| s[i] == 'O'|| s[i] == 'U')
        {
            vowel ++;
        }

        else if(s[i]>='A' && s[i]<='Z')
        {
            consonant ++;
        }

        i++;
    }

    //close the file after processing it
    fileIn.close();

    //function call to display_results function
    display_results(vowel, consonant);

    return 0;
}

//This function will convert a letter to an uppercase
//only if the letter is lowercase. If it already an
//uppercase it will leave return back the same letter
//to be further processed by the program
//Written by Kiera Walsh
//Date created: February 24, 2020
//Last revised: March 1, 2020
//Language: C++11
//Compiler used: (g++ target)
//Outside sources: course textbook,program handout written 
//to handle files by Professor Sarner and old program examples
//from Professor Urban's CS108 class

char convert_to_upper(char ch)
{

    if(ch >= 'a' && ch <= 'z')
    { 
        ch = ch - 'a' + 'A';
    }

    return ch;
}

//This function displays the result of how many
//vowels and consonants were found to the user
//Written by Kiera Walsh
//Date created: February 24, 2020
//Last revised: March 1, 2020
//Language: C++11
//Compiler used: (g++ target)
//Outside sources: course textbook,program handout written 
//to handle files by Professor Sarner and old program examples
//from Professor Urban's CS108 class

void display_results(int v, int c)
{
    cout<<"There are "<<v<<" vowel(s)"<<endl;
    cout<<"There are "<<c<<" consonant(s)"<<endl;
}
