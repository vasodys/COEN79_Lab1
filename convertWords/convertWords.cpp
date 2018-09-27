//
//  convertWords.cpp
//  convertWords
//
//  Created by Vasilis Odysseos on 9/27/18.
//  Copyright © 2018 SCU. All rights reserved.
//

#include "convertWords.hpp"
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>

using namespace std;

int main(int argc, char *argv[]){
    if(argc != 2){//check if filename was given as an argument
        cout << "You have not specified the filename" << endl;
        return 0;
    }
   
    convertWords(argv[1]);//If file is specified, continue
    
    return 0;
}

void convertWords(char fileName[]){
    ifstream file;
    file.open(fileName);//opens file for reading words
    if(!file.is_open()){
        cout << "The file couldn't be opened, sorry :/" << endl;
        return;
    }
    
    string word;
    while(file >> word){//copies next word to the word variable
        if(word.length() >= 10){
            for (int i = 0; i < word.length(); i++){//check that length is 10 chars or over
                if(ispunct(word[i])){
                    word.erase(i--, 1);//erases punctuation
                }else{
                    word[i] = toupper(word[i]);//convert letter to uppercase
                }
            }
            if(word.length() >= 10){//check the length again, because deleted punctuation might have decreased word length to below 10
                cout << word << endl;//print the word
            }
        }
    }
    file.close();//close the file
}
