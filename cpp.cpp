#include <iostream>
using namespace std;
int main()
{
    int main[2048],i,curopt;
    string savelen;
    /*cin cout go brrrrrrrrrr*/
    for(i=0;i<256;i++)
    {
        cout << "\n\n\nHi please enter the correct options. idk how to handle errors yet\n[1]Write to array\n[2]Read from array\nEnter option: ";
        curopt==2;
        cin >> curopt;
        if(curopt==1)
        {
            cout << "[1]Use current incrementing position: " << i << " To write int to main array\n[2]Enter desired index position to write to main array\nOption: ";
            cin >> curopt;
            if(curopt==1)
            {
                cout << "Enter int to save to main array index postion " << i << " : ";
                cin >> main[i];
                cout << "Saved int to index position " << i << "in main array";
            }
           if(curopt==2)
            {
                cout << "Enter array index position to write to: ";
                cin >> curopt;
                cout << "Write int to save to array index position: " << curopt << " : ";
                cin >> main[curopt];
                cout << "Wrote to main array index position: " << curopt /*"With length of :" << savelen.length;*/; 
                
            }
        }
        if(curopt==2)
        {
            cout << "Enter array index position to read from: ";
            cin >> curopt;
            cout << "Array index position: " << curopt << " : " << main[curopt];
        }
    }
    

}