#define DSIZE_MAX 9

#include <iostream>

void diamond_make(int diamond_size)
{
    using namespace std;

    int horizontal;
    int vertical;
    int maxsize;

    int x;
    int c;

    horizontal=1;

    maxsize=DSIZE_MAX;

    while(horizontal<=diamond_size)
    {
        vertical=1;
        x=maxsize-horizontal;

        c=1;

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

        c=c-2;
        while(c>0)
        {
            cout<<c;
            c--;
        };

        cout<<endl;

        horizontal++;

    };

    horizontal--;
    horizontal--;


    while(horizontal>0)
    {
        vertical=1;
        x=maxsize-horizontal;

        c=1;

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


int main(int argc, char *argv[])
{
    int i;

    using namespace std;

    for(i=1; i<=DSIZE_MAX; i++)
    {
        diamond_make(i);
        cout<<endl;
    };

    return 0;
};

