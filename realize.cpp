#include "vector.h"

/**
 * copyFrom  从一个数组复制得到一个新的数组
 * 
 */


template <typename T>
void copyFrom(T const*A,Rank lo,Rank hi){  //数组空间为[lo,hi) 开区间
      _elem =new T[_capacity = 2*(hi - lo)];
      _size = 0;
      for (_size=0;lo<hi;lo++,_size++){
          _elem[_size] = A[lo];
      }
}