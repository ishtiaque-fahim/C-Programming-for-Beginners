#include <iostream>
using namespace std;

int main() {
    int mark;
    cout << "Enter Marks : ";
    cin >> mark;
    
    if (0>mark || 100<mark)
    {
        cout<< "Invalid Mark";
    }
    else if (mark > 79) 
    {        
    cout<< "A+";
    }
    else if (mark > 69) 
    {        
    cout<< "A";
    }
    else if (mark > 59) 
    {        
    cout<< "A-";
    }
    else if (mark > 49) 
    {        
    cout<< "B";
    }
    else if (mark > 39) 
    {        
    cout<< "C";
    }
    else if (mark > 32) 
    {        
    cout<< "D";
    }
    else
    {        
    cout<< "Failed";
    }
    return 0;
}
