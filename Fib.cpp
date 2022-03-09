#include "Fib.h"
     
     Fib::Fib(int n){
         f=0;g=1;
         while(g<n){
             next();
         } 
     }

     int Fib::get(){
         return g;
     }

     int Fib::next(){
         g =g +f;
         f = g-f;

         return g;
     }

     int Fib::prev(){
         f = g-f;
         g = g -f;

         return g;
     }