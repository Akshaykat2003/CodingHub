 #include<iostream>
// #include<math.h>
 using namespace std;


 //class to basic
// class Number
// { int n;
//  public:
//  void printDetails(){ cout<<n;  }
//  Number(int n)      { this->n=n;  }
//  operator int()       { return n;  }
// };
// int main()
// { Number numb=100;
//  numb.printDetails();
//  int x=numb;//numb.operator int()
//  cout<<"\nThe value is"<<x;
//  return 0;
// }


//conversion using constructor
class Triangle
{ int base,height;
 float area;
 public:
  Triangle(int b,int h)
  { base =b; height=h;  area=0.5*base*height;
  }
  void print()
  { cout<<"\nBase : "<<base<<"\nHeight : "<<height<<"\nArea of triangle : "<<area;
  }  
  int getBase() { return base; }
  int getHeight() { return height; }
};
class Rectangle
{ int width,length,area;
 public:
  void output()
  { cout<<"\nLength : "<<length<<"\nWidth : "<<width<<"\nArea of rectangle : "<<area;
  }
Rectangle(Triangle t)
  { width=t.getBase(); length=t.getHeight(); area=width*length;
  }
};
int main()
{ Triangle t(10,20);
 Rectangle r=t;//Rectangle(t)
 t.print();
 r.output();
 return 0;
}

