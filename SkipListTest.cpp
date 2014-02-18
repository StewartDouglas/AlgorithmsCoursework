#include <iostream>
#include "SkipList.hpp"

using namespace std;

int main(){

  SkipList* skipList = new SkipList(10);
  Key key1 = "hello";
  Key key2 = "foo";
  Key key3 = "bar";
  Key key4 = "nointhelist";

  skipList->add(key1,false);
  skipList->add(key2,false);
  skipList->add(key3,false);
  //skipList->add(key3,false);

  skipList->find(key1,true);
  skipList->find(key2,true);
  skipList->find(key3,true);
  skipList->find(key4,true);

  //skipList->del(key3,true);

  //skipList->find(key3,true);

  //cout << "got here" << endl;

  return 0;

}
