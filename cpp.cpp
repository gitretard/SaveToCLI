#include <iostream>
using namespace std;
int main()
{
    int curopt,i,j;
    uint64_t main[16384];
    bool first;
    first = true;
    while (true)
    {
        if(first==true)
        {
            cout << "\n\nUnsafe&&Inefficient program smh my head, also used 64 bits for main array so u can enter more digits still unsure hout much\n\n";
            first = false;
        }

        cout << "\n\nEnter options:\n[1] Write to array\n[2] Read from array\n[3] List arrays from range(on god please be careful)\n[4] Abort\nOptions: ";
        cin >> curopt;
        if(curopt==1)
        {
            cout << "Enter array index location to save to: ";
            cin >> curopt;
            cout << "\nEnter int to save to array index: " << curopt<<" : ";
            cin >> main[curopt];
            cout << "\nSaved to \n--> " << curopt << " \nin main array at memory address \n--> " << &curopt;
            curopt=0;
        }
        if(curopt==2)
        {
            cout << "\nEnter array index location to read from: ";
            cin >> curopt;
            cout<<"\nContent of\n--> " << curopt << " in array index location and at memory address\n--> " << &main[curopt] << " \n is: " << main[curopt];
            curopt=0;

        }
        if(curopt==3)
        {
            cout << "Enter starting range: ";
            cin >> i;
            cout << "\nEnter ending range: ";
            cin >> j;
            cout << "\n\n";
            for(i=i,j=j;i<=j;i++)
            {
                cout<<i << " --> " << &main[i] << " is: " << main[i] <<"\n";
 
            }
            curopt=0;

        }
        if(curopt==4)
        {
            cout << "\n\nuguudriuyoftsiuutitriuodsftoisdjkhio";
            break;
        }
    }
    
}
