#include<iostream>

using namespace std;

//  class student{
//     private:
//     string name;
//     int age;
//      int height;

//      public:
//      int getAge(){
//         return this->age;

//      }


//  };
//  int main(){
//     student first;
//     cout<<" sb sahi cha; raha hy "<<endl;
//     return 0;



//  }

// inheritance 
// class Human{
//     public :
//     int height;
//     int weight;

//     int age;

//      public : 
//      int getage()
//     {
//         return this->age;
//     }
//     void  setWeight(int w){
//          this->weight =w;

//     }
// };
//  class Male :public Human{
//     public:
//     string color;


//  };

// int main(){
//     Male object1;
//      cout<<object1.age;
//      cout<<object1.weight;
//      cout<<object1.height;
//      object1.setWeight(234);
//      cout<<object1.weight;




// }

// single inharitance 

// class Animal{
//     public:
//     int age;
//      int weight;
//      public:
//      void speak(){
//         cout<<"speaking"<<endl;

//      }
// };
//  class Dog : public Animal{

//  };
// int main(){
//     Dog d;
//     d.speak();
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

#include<iostream>
using namespace std;
class animal{
     public:
      int age;
       int weight;
       public:
        void bark(){
            cout<<" speaking"<<endl;
        }
};
 class human {
     public:
     string color;
     public:
     void speak(){
        cout<<"speaking"<<endl;
     }



 };
 class hybrid :public animal, public human{

 };



int main(){
    hybrid obj1;
    obj1.speak();
    obj1.bark();
    

}