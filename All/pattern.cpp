//
//  pattern.cpp
//  Lab 1
//
//  Created by Vasilis Odysseos on 9/27/18.
//  Copyright © 2018 SCU. All rights reserved.
//

#include "pattern.hpp"
#include <stdio.h>
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

using namespace std;

int main(){
    write_pattern();
    return 0;
}

void write_pattern(){
    string zero_to_9 = "0123456789";
    string nine_to_0 = "9876543210";
    int width = 11;
    
    cout << zero_to_9 << endl;
    for (int i = 0; i < 4; i++){
        cout << setw(width);
        cout << nine_to_0;
        cout << setw(width+6);
        cout << zero_to_9 << endl;
        width+=2;
    }
    cout << setw(width);
    cout<< nine_to_0 << endl;
}
