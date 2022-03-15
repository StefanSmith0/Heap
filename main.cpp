#include <iostream>
#include "Node.h"

using namespace std;

void printTree(Node* current);

int main() {
  int heapSize = 101;
  int heap[101];
  for(int i = 0; i < heapSize; i++) {
    heap[i] = (100 - i);
  }
  int largestValue = heap[1];
  Node* root = new Node(largestValue);

  printTree(root);
  
  return 0;
}

void printTree(Node* current) { //Prints postfix from binary tree
  if(current == NULL) {
    return;
  }
  cout << current->getValue();
  if(current->getRight() != NULL) {
    printTree(current->getRight());
  }
  if(current->getLeft() != NULL) {
    printTree(current->getLeft());
  } 
}
