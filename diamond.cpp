/*
    Diamond Display Progrma
    As a submission to https://code.golf/diamonds#cpp

    Created by: amd
*/

// ---------------------------------
// Preprocessor Declaration
#define DSIZE_MAX 9

#include <iostream>

// ---------------------------------
// Function diamond_make declaration
// use to process and create display
void diamond_make(int diamond_size)
{
    // ***********************
    // Variable Declaration
    using namespace std;

    int horizontal;
    int vertical;
    int maxsize;

    int x;
    int c;

    // ***********************
    // Actual Function

    // pre horizontal count and initialization
    horizontal=1;

    maxsize=DSIZE_MAX;

    // looping for top horizontal precess and print
    while(horizontal<=diamond_size)
    {
        // vertical variable pre value
        vertical=1;
        x=maxsize-horizontal;

        c=1;

        // looping for lestside line process & prints
        while(vertical<=maxsize)
        {
            if(vertical>x)
            {
                cout<<c;
                c++;
            }else
            {
                cout<<" ";
            };

           vertical ++;
        };

        // looping for right side process and print

        c=c-2;
        while(c>0)
        {
            cout<<c;
            c--;
        };

        cout<<endl;

        horizontal++;

    };

    // variables process for bottom horizontal
    horizontal--;
    horizontal--;

    // loopoing for bottom horizontal process and print
    while(horizontal>0)
    {
        // vertical variable pre value
        vertical=1;
        x=maxsize-horizontal;

        c=1;


        // looping for lestside line process & prints
        while(vertical<=maxsize)
        {
            if(vertical>x)
            {
                cout<<c;
                c++;
            }else
            {
                cout<<" ";
            };
            vertical ++;
        };

        // looping for lestside line process & prints
        c=c-2;
        while(c>0)
        {
            cout<<c;
            c--;
        };

        cout<<endl;

        horizontal--;

    };

};

// ---------------------------------
// Progran  Entry Point
int main(int argc, char *argv[])
{
    // ***********************
    // Variable Declaration
    int i;


    // ***********************
    // Actual Procedure
    using namespace std;

    // loop for multiple display
    for(i=1; i<=DSIZE_MAX; i++)
    {
        diamond_make(i);
        cout<<endl;
    };

    return 0;
};

