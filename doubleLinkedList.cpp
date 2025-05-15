#include <iostream>
#include <string>
using namespace std;

class Node {
    public:
        int noMhs;
        Node *next;
        Node *prev;
};

class DoubleLinkedList {
    private:
        Node *START;

    public:
        DoubleLinkedList() {
            START = NULL;
        }

    void addNode() {
        int nim;
        string nm;
        cout << "\nEnter the roll number of the student";
        cin >> nim;

        Node *newNode = new Node(); // step 1

        newNode -> noMhs = nim; // step 2

        if (START ==  NULL || nim <= START -> noMhs) {
            if (START != NULL && nim == START -> noMhs) {
                cout << "\nDuplicate number not allowed" << endl;
                return;
            }
            newNode -> next = START;

            if (START != NULL)
                START -> prev = NULL;

            newNode -> prev = NULL;

            START = newNode;
            return;
        }
        Node *current = START;
        while (current -> next != NULL && current -> next -> noMhs < nim) {
            current = current -> next;
        }
        if (current -> next != NULL && nim == current -> next -> noMhs) {
            cout << "\nDuplicate roll number not allowed" << endl;
            return;
        }

        newNode -> next = current -> next;
        newNode -> prev = current;

        if (current -> next != NULL) 
            current -> next -> prev = newNode;

        current -> next = newNode;
    }
    
    void hapus() {
        if (START == NULL) {
            cout << "\nList is empty" << endl;
            return;
        }

    cout << "\nEnter the roll number of the student whose record is to be deleted: ";
        int rollNO;
            cin >> rollNO;

    Node *current = START;

    while (current != NULL && current -> noMhs != rollNO)
        current = current -> next;



    }






};

