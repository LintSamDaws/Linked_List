#include "header.h"


Node* Node::reverse(Node* head) {
    Node* previous = NULL;
    Node* current = head;
    Node* next = head->next;

    while (current) {
        current->next = previous;

        previous = current;
        current = next;
        if (next) next = next->next;
    }
    return previous;
}

int Node::length(Node* head) {
    int res = 0;
    while (head) {
        res++;
        head = head->next;
    }
    return res;
}

void Node::insertAtTheEnd(Node**head, int newVal) {

    Node* last = new Node(newVal);

    Node* newNode = *head;
    if (*head == NULL) {
        *head = last;
        return;
    }
    while(newNode->next != NULL) {

        newNode = newNode->next;
    }
    newNode->next = last;
}

void Node::insertAtTheFront(Node**head, int newVal) {
    Node* front = new Node(newVal);
    front->next = *head;
    *head = front;
}

void Node::printLL(Node* head) {
    while (head != NULL) {
        std::cout << head->value << " ";
        head = head->next;
    }
    std::cout << "\n";
}

    // Deletes the Element with given Index (index from 0 to length-1)

void Node::deleteElement(Node**head, int index) {
    if (index >= Node::length(*head)) {
        std::cout << "Index is not Valid\n";
        return;
    }
    else {
        Node* temp = *head;

        if (index == 0) {
            *head = temp->next;
            return;
        }
        else {
            Node* previous = NULL;
            Node* current = *head;
            while (current) {
                if (index == 0) {
                    previous->next = current->next;
                    *head = temp;
                    return;
                }
                else {
                    index--;
                    previous = current;
                    current = current->next;
                }
            }
        }
    }
}

    // Sort valid only for 0 | 1 values

Node* Node::binaryInputsort(Node* head) {
    Node* newHead = head;
    Node* current = newHead;
    Node* second = newHead->next;

    while (second != NULL) {
        if (second->value == 0) {
            current->next = second->next;
            second->next = newHead;
            newHead = second;
            second = current->next;

        }
        else {
            second = second->next;
            current = current->next;
        }
    }
    return newHead;
}

Node* Node::insertionSort(Node* head) {
    Node* temp = head;

    while (temp->next != NULL) {
        Node* a = temp->next;
        while (a) {
            if (temp->value > a->value) std::swap(temp->value, a->value);
            a = a->next;
        }
        temp = temp->next;
    }
    return head;
}

bool Node::isPalindrome(Node* head) {
    int len = head->length(head);

    if (len == 1) return true;
    if (len == 2) {
        Node* temp = head->next;
        if (temp->value == head->value) return true;
        else return false;
    }

    int mid;
    mid = len/2 + 1;
    Node* A = head;
    Node* B = head;
    Node* temp = head;

    if (len % 2 == 1) {
        for (int i=0; i<mid-1; i++) {
            temp = temp->next;
        }
        B = Node::reverse(temp);
        temp->next = NULL;

        while (A && B) {
             if (A->value == B->value) {
                A = A->next;
                B = B->next;
             }
             else return false;
        }
        return true;
    }
    else {
        for (int i=0; i<mid-2; i++) {
            temp = temp->next;
        }
        B = Node::reverse(temp->next);
        temp->next = NULL;

        while (A && B) {
             if (A->value == B->value) {
                A = A->next;
                B = B->next;
             }
             else return false;
        }
        return true;
    }
}
