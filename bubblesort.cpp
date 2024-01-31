#include <iostream>
#include <string.h>
using namespace std;
string sort(string a1) {
    string str;
    for (int i = 0; i < a1.length()-1; i++) {
    for (int j = 1 ; j<a1.length()- i ; j++) {
    if(a1[i]>a1[a1.length()-j]){
        char temp = a1[i];
        a1[i] = a1[a1.length()-j];
        a1[a1.length()-j] = temp;
    }
    }
  }
   
  return a1;
}

int main() {
    string a1,a2;
    cout<<"word:";
    cin>>a1;
    string sortedword=sort(a1);
    cout<<sortedword<<endl;

}
