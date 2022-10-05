#include <time.h>
#include "header.h"



int main(int argc, char *argv[])
{
    srand(time(NULL));

    Node* head = new Node(5);
    for (int i = 0; i<20; i++) {
        head->insertAtTheEnd(&head, rand() % 9);
    }

    head->printLL(head);
    head->printLL(head->insertionSort(head));

    Node* headReverse = head->reverse(head);
    head->printLL(headReverse);


    Node* head2 = new Node(0);
    for (int i = 1; i<20; i++) {
        int randombool = rand() % 2;
        head2->insertAtTheEnd(&head2, randombool);
    }

    head2->printLL(head2);

    Node* binarysorted = binarysorted->binaryInputsort(head2);
    binarysorted->printLL(binarysorted);

    Node* head3 = new Node(1);
    head3->insertAtTheEnd(&head3, 0);
    head3->insertAtTheEnd(&head3, -1);
    head3->insertAtTheEnd(&head3, -2);
    head3->printLL(head3);

    Node* insertionSorted = insertionSorted->insertionSort(head3);
    insertionSorted->printLL(insertionSorted);

    std::cout << head->length(insertionSorted) << "\n";

    std::cout << insertionSorted->isPalindrome(insertionSorted) << "\n";

    Node* head4 = new Node(0);
    head4->insertAtTheEnd(&head4, 0);
    head4->insertAtTheEnd(&head4, 1);
    head4->insertAtTheEnd(&head4, 1);
    head4->insertAtTheEnd(&head4, 0);

    head4->printLL(head4);
    head4->deleteElement(&head4, 0);
    head4->printLL(head4);



    std::cout << head4->isPalindrome(head4) << "\n";





    return 0;
}
