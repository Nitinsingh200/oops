

#include<iostream>
using namespace  std;


// encapsulation
// class student
// {
// private:
//     string name;
//     int age;
//     int height ;
//      public : 
//      int getage()
//     {
//         return this->age;
//     }
// };

// int main()
// {
//     student first;
//     cout<<" sb sahi chal rha ";

//     return  0;
                                                                      
// }

//  inheritance
// #include<iostream>
// using namespace std;
// class human{ 
//     public:
//      int height;
//       int weight;
//        int age;
//        public:
//        int getage(){
//         return this->age;

//        }
//     void setweight( int w){
//             this->weight=w;

//         }


// };
// class male:   public  human{
//     public:
//     string color;
//     void sleep(){
//         cout<<" male sleeping"<<endl;
//     }
//     int getheight(){
//         return  this->height;
//     }

// };

//  int main(){

    //  male n1;
    // cout<<n1.height<<endl;
    // cout<<n1.getheight()<< endl;


    // male object1;
//     cout<<object1.age<<endl;
//     cout<<object1.weight<<endl;
//     cout<<object1.color<<endl;

//     cout<<object1.color<<endl;
    // object1.setweight(88);
    // cout<<object1.weight<<endl;
//     object1.sleep();


//  }


//   single inheritance

// #include<iostream>
// using namespace std;
// class animal{
//      public:
//       int age;
//        int weight;
//        public:
//         void speek(){
//             cout<<" speaking"<<endl;
//         }
// };
// class dog: public animal{

// };

// int main(){
//     dog d;
//     d.speek();
//     cout<<d.age<<endl;

// }

//  multilevel inheritance 

// #include<iostream>
// using namespace std;
// class animal{
//      public:
//       int age;
//        int weight;
//        public:
//         void speek(){
//             cout<<" speaking"<<endl;
//         }
// };
// class dog: public animal{

// };
// class germanshapherd : public dog{

// };

// int main(){
//     germanshapherd g;
//     g.speek();

//     dog d;
//     d.speek();
//     cout<<d.age<<endl;

// }
//   multiple inheritance ///////////////////////

// #include<iostream>
// using namespace std;

// class animal{
//      public:
//       int age;
//        int weight;
//        public:
//         void bark(){
//             cout<<" speaking"<<endl;
//         }
// };
//  class human {
//      public:
//      string color;
//      public:
//      void speak(){
//         cout<<"speaking"<<endl;
//      }



//  };
//  class hybrid :public animal, public human{

//  };



// int main(){
//     hybrid obj1;
//     obj1.speak();
//     obj1.bark();
    

// }

//  hierarachiacal inheritance 

// #include<iostream>
//  using namespace std;

//   class a{
//     public:
//     void func1(){
//         cout<<" inside function  1"<<endl;
//     }

//   };
//    class b : public a{
//     public:
//     void func2(){
//         cout<<" inside function  2"<<endl;

//     }

//    };
//    class c: public a{
//     public:
//     void func3(){
//         cout<<" inside function  3"<<endl;


//     }

//    };
// int main(){

//     a object1;
//      object1. func1();
//     b object2;
//      object2. func1();
//      object2. func2();

//     c  object3;
//      object3. func1();
//      object3. func3();


//   }

// #include<iostream>
// using namespace std;

//  class a{
//     public:
//     void func(){
//         cout<<" i am  a"<<endl;

//     }

//  };

//  class b{
//      public:
//      void func(){
//          cout<<" i am b"<<endl;
//      }
//  };


// class c: public a,public b{


//  };


//   int main(){
//     c obj;
//     obj.a::func();
//     obj.b::func();

//   }






// polymorphism




// function overloading




// #include<iostream>
// using namespace std;

// class a{
//     public:

//     void sayhello(){

//         cout<<" hello"<<endl;

//     }
//     void sayhello( string name ){
//         cout<<" hello"<<endl;

//     }

// };


//  int main(){
//     a obj;
//     obj.sayhello();

//  }


// run time polymorphism 
// function overraiding

// # include<iostream>
//  using namespace std;
//  class animal{
//      public:
//      void speak(){
//         cout<<" speaking"<<endl;
//      }
//  };
//  class dog :public  animal{
//     public:
//     void speak(){
//         cout<<" barking"<<endl;

//     }
//  };

//   int main(){
//     dog obj;
//     obj.speak();

//   }

 









//  merge sort 


// #include<iostream>
// #include<vector>
//  using namespace std;
//  void merge( vector<int> &arr, int start, int mid, int end){
//     vector<int> temp;
//      int i=start, j=mid+1;
//      while ( i<=mid && j<=end)
//      {
//       if (arr[i]<=arr[j])
//       {
//          temp.push_back(arr[i]);
//          i++;
//          /* code */
//       }
//       else{
//          temp.push_back(arr[j]);
//          j++;


//       }
      
//       /* code */
//      }
//      while (i<=mid)
//      {
//        temp.push_back(arr[i]);
//          i++;
//       /* code */
//      }
//      while (j<=end)
//      {
//        temp.push_back(arr[j]);
//          j++;
//       /* code */
//      }
//      for (int idx = 0; idx < temp.size(); idx++)
//      {
//       arr[idx+start]= temp[idx];
//       /* code */
//      }
     
     
     
//  }
//   void mergesort( vector<int> &arr, int  start, int end ){
//     if (start< end)
//     {
//       int mid= start +(end-start)/2;
//       mergesort( arr, start, mid);
//       mergesort( arr, mid+1, end);

//       merge( arr,start,mid,end );


//       /* code */
//     }
    

//   }
//   int main(){
//     vector<int> arr={ 12,31,35,8,32,17};
//     mergesort( arr,0,arr.size()-1);
//     for( int val: arr){
//        cout<<val<<" ";

//     }
//     cout<<endl;
  
    
//     return 0;


//   }




