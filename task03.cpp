#include <iostream>
#include "Book.h"
using namespace std;

#include "Book.h"

Book::Book(string t, string a, string i) {
    title = t;
    author = a;
    isbn = i;
}

string Book::getTitle() {
    return title;
}

string Book::getAuthor() {
    return author;
}

string Book::getISBN() {
    return isbn;
} 

int main() {
    Book b1("C++ Programming", "Albert Robin", "8357753939");

    cout << "Book Details :" << endl;
    cout << "Title : " << b1.getTitle() << endl;
    cout << "Author : " << b1.getAuthor() << endl;
    cout << "ISBN : " << b1.getISBN() << endl;

    return 0;
}