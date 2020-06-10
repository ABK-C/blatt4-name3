#include<iostream>
#include<cmath>
/*#define a 205
#define c 29573
#define m 139968 
????????????????*/
#define n 100


double zufall(int a, int c, int m){
  
  static int i;
  
  i =(a*i+c)%m;
  
  return (i)/(m);
}

int main() {

using namespace std;

const int a = 5;
const int c = 3;
const int m = 16;
double nin = 0;

for (int i=0; i < n; ++i) {

double x = zufall(a, c, m);
double y = zufall(a, c, m);
  
  if (sqrt((x*x+y*y)) < 1) {
      
      nin++;
       
    }

}

double pi = 4*(nin/n);
double p = M_PI/4;
double e = p*n;
double v = p*(1-p)*n;
double s = 4*sqrt(v)/n;

cout << "E für N " << n << " = "<< e << endl;
cout << "V für N " << n << " = "<< v << endl;
cout << "Nin für N " << n << " = "<< nin << endl;
cout << "pi für N " << n << " = "<<pi << endl;
cout << "S für N " << n << " = "<< s << endl;

}