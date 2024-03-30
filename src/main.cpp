#include <Arduino.h>
#include "LinkedListNode.hpp"


 LinkedListNode <int>*test;

void setup(){
  Serial.begin(9600);
 test = new LinkedListNode<int>(10);

  // LinkedListNode<int> test1(10);


  test->insert(20);
  test->insert(30);

  test= test->next();
  
  delete(test);
}

void loop(){

}