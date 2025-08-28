#include <iostream> 

double sum(double a, double b){
  return a+b;
} 
double sum(double a, double b, double c){
  return a+b+c;
} 

int main(){
  int val1 = sum(1,2); 
  int val2 = sum(1,2,3); 
  std::cout<<val1<<'\n'<<val2<<std::endl;
  
} 
