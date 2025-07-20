System - C++  
#include<iostream>
#include<fstream>
using namespace std;

class Library {
    public:
    void addBook() {
        ofstream file("books.txt", ios::app);
        string title, author;
        cout << "Enter Book Title: ";
        cin >> ws;
        getline(cin, title);
        cout << "Enter Author Name: ";
        getline(cin, author);
        file << title << "," << author << endl;
        file.close();
        cout << "Book Added Successfully!\n";
    }

    void displayBooks() {
        ifstream file("books.txt");
        string line;
        cout << "Books Available:\n";
        while(getline(file, line)) {
            cout << line << endl;
        }
        file.close();
    }
};

int main() {
    Library lib;
    int choice;
    do {
        cout << "\n1. Add Book\n2. View Books\n3. Exit\nEnter choice: ";
        cin >> choice;
        switch(choice) {
            case 1: lib.addBook(); break;
            case 2: lib.displayBooks(); break;
            case 3: cout << "Exiting...\n"; break;
            default: cout << "Invalid Choice!\n";
        }
    } while(choice != 3);
    return 0;
}
