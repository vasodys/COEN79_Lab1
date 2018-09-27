//
//  countChars.cpp
//  Lab 1
//
//  Created by Vasilis Odysseos on 9/27/18.
//  Copyright © 2018 SCU. All rights reserved.
//

#include "countChars.hpp"
#include <stdio.h>
#include <iostream>
#include <cctype>//gives us the functions to test characters

using namespace std;

int main(){
    cout << "Please input a phrase" << endl;
    char input[100];//input variable
    cin.get(input, 100);//User inputs a phrase
    countChars(input);
    return 0;
}

void countChars(char input[]){
    int counter = 0;
    int anum = 0;
    int non_anum = 0;
    while(input[counter] != '\0'){//while not at end of line
        if (isalnum(input[counter])){//checks if a character is alphanumeric
            anum++;
        }else{
            if(!isspace(input[counter]))//checks if the non-alphanumeric character is not a space
                non_anum++;
        }
        counter++;
    }
    cout << input << " has " << anum << " alphanumeric characters and " << non_anum << " non-alphanumeric characters." << endl;
}
