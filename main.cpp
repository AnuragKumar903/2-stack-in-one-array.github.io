#include <iostream>
using namespace std;

class Stack{

  public:
    int* arr;
    int size;
    int top1;
    int top2;

  public:

    Stack(int n){
      this->size = n;
      arr = new int[n];
      top1 = -1;
      top2 = n;
    }

    void push1(int a){
      if(top2 - top1 > 1){
        top1++;
        arr[top1] = a;
      }
      else{
        cout<<"Stack overflow"<<endl;
      }
    }

    void push2(int a){
      if(top2 - top1 > 1){
        top2--;
        arr[top2] = a;
      }
      else{
        cout<<"Stack overflow"<<endl;
      }
    }

    void pop1(){
      if(top1 > -1){
        top1--;
      }
      else{
        cout<<"Stack underflow"<<endl;
      }
    }
    void pop2(){
      if(top2 < size){
        top2++;
      }
      else{
        cout<<"Stack underflow"<<endl;
      }
    }
};

int main() {
  Stack s(10);
  s.push1(1);
  s.push1(2);
  s.push2(3);
  s.push2(4);
  s.pop1();
  s.pop1();
  s.pop1();
  s.pop2();

  return 0;
}