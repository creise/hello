#include<iostream>
#include <fstream>
using namespace std;

int main(int argc, char *argv[]){
  ofstream myfile;
  myfile.open ("example.html");

  myfile << "<!DOCTYPE html PUBLIC \"-//IETF//DTD HTML 2.0//EN\"> <HTML> <HEAD> <TITLE> A Small Hello </TITLE> </HEAD> <BODY> <H1>Hi</H1>   <P>This is very minimal \"hello world\" HTML document.</P> </BODY> </HTML>";
  
  myfile.close();
   return 0;
}