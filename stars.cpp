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

void swap(int * p1, int *p2);

int main(int argc, char *argv[]){

    if(argc !=3){
        cerr<<"Usage : "<<argv[0]<< " width height"<<endl;
        exit(1);
    }
    int width = atoi(argv[1]);
    int height = atoi(argv[2]);
    string myLineOfStars(lineOfStars(width));
    cout<<"Printing a line of stars "<<endl;
    cout<<myLineOfStars;
    cout<<endl; 

    string myBoxOfStars(boxOfStars(width,height));
    cout<<"Printing a box of stars with width "<<width<<" and "
        <<"height "<<height<<endl;
    cout<<myBoxOfStars;

    cout<<endl; 
    //Uncomment the following code to answer question 7 on hw7
    /*
    swap(width, height);
    myBoxOfStars = boxOfStars(width,height);

    cout<<"Printing box of stars with width "<<width<<" and "
        <<"height "<<height<<endl;
    cout<<myBoxOfStars;
    */
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
    for (int j=0; j<width; j++){
        result+="*";
    }
    return result;
}

//What does this function do?
void swap(int *p1, int *p2){
    int tmp;
    tmp = *p1; 
    *p1 = *p2;
    *p2 = tmp;

}

