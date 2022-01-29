#include <iostream>
#include "vector.h"
using namespace std;

int main(){
   int a[6]={1,2,3,4,5,6};
   
   Vector<int> myvector(10,10,0);//调用构造函数
  
   cout<<myvector.size()<<endl;
   //myvector.insert(2,3);

   for(int i=0;i<10;i++){
        myvector[i]=0;
    }
   
    for(int i=0;i<10;i++){
       cout<< myvector[i]<<" ";
    }

    cout<<endl;

   cout<<myvector.deduplicate();

   //  cout<<myvector.find(1,0,1)<<endl;
   //  cout<<myvector.find(1,0,2)<<endl;
   //  cout<<myvector.find(2,0,2)<<endl;
   //  myvector.remove(1,3);

   // for(int i=0;i<10;i++){
   //     cout<< myvector[i]<<" ";
   //  }

   //  cout<<myvector.size()<<endl;
    



      

   return 0;
}