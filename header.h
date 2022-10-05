#ifndef HEADER_H
#define HEADER_H

#include <iostream>

class Node {


public:

    int value;
    Node* next;

    Node(int val) {
        value = val;
        next = NULL;
    }

    void insertAtTheEnd(Node**head, int newVal);
    void insertAtTheFront(Node**head, int newVal);
    void deleteElement(Node**head, int index);
    void printLL(Node* head);
    int length(Node* head);
    Node* binaryInputsort(Node* head);
    Node* insertionSort(Node* head);
    Node* reverse(Node* head);
    bool isPalindrome(Node* head);


};

#endif // HEADER_H
