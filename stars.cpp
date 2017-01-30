//stars.cpp
//Diba Mirza
//Program to draw a box of stars using the concept of nested for loops and 
//nested functions calls
//

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

string lineOfStars(int width);

string boxOfStars(int width, int height);


int main(int argc, char *argv[]){

    if(argc !=3){
        cerr<<"Usage : "<<argv[0]<< " width height"<<endl;
        exit(1);
    }
    int width = atoi(argv[1]);
    int height = atoi(argv[2]);
    string myboxOfStars(boxOfStars(width,height));
    cout<<myboxOfStars;
    return 0;
}


string boxOfStars(int width, int height){
    string result="";
    for (int i=0; i<height; i++){
        for (int j=0; j<width; j++){
            result+="*";
        }
        result+="\n";
    }
    return result;
}

string lineOfStars(int width){
    string result="";
    for (int i=0; i<width; i++){
        result+="*";
    }
    return result;
}
