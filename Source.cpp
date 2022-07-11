#include <iostream> 
using namespace std;

class book { // Creates an classification of an object called book

private: //private descriptors of an object go here. Only code in the class book can be called from private. <- important
	string genre; //book now has a genre that can only be accessed in this class


public: //public descriptors of an object go here
	string title; //book now has a title descriptor
	string author; //book now has an author descriptor
	int pages; //book now has a set amount of pages descriptor


	book() { //this is the default constructor. creating a book book1 (with no args) with create this. 
		title = "None";
		author = "Doesnt exist";
		genre = "N/A";
		pages = 0;
	}

	book(string aTitle, string aAuthor, string aGenre, int aPages) { // for the argument to work, it must have the same name as the class
		//cout << "The entire code has been run through and an object is being created uwu" << endl;
		title = aTitle;
		author = aAuthor;
		setGenre(aGenre);
		pages = aPages;
	}

	bool isLong() { //Boolean to check if the book is long
		if (pages >= 300) {
			return true;
		}
		return false;
	}

	void setGenre(string aGenre) { //sets valid genres for the constructor
		if (aGenre == "Horror" || aGenre == "Fiction" || aGenre == "Nonfiction" || aGenre == "Romance" || aGenre == "Self-Help") {
			genre = aGenre; //if the string aGenre in the constructor is == to these, then the genre is valid and will print
		}
		else {
			genre = "Invalid"; //if the string in the aGenre contructor != to these, then the genre is invalid
		}
	}

	string getGenre() { //a function that allows the function to be called in other parts of code
		return genre;
	}

	void printer() { //Created an easily accessible print function 
		cout << "Title: " << title << endl;
		cout << "Author: " << author << endl;;
		cout << "Genre: " << getGenre() << endl;
		cout << "Pages: " << pages << endl;
		cout << "Is it Long? ";
		if (isLong() == true) {
			cout << "Yes" << endl << endl;
		}
		else {
			cout << "No" << endl << endl;
		}
	}
};



int main() {

	book book1; //creates the book object. This will only work this way if there's a default constructor. see line 11
	book1.title = "Doctor Marshmallow's hoodrat notes"; //book1 now has a title
	book1.author = "Dr. Marshmallow Ph.D"; //book1 now has an author
	book1.pages = 42069; //book1 now has a set amount of pages
	book1.setGenre("Nonfiction");
	
	//cout << book1.pages << endl << book1.isLong() << endl; //Checks if the book is long. If 0 then true if 1 then false

	book1.printer();
	

	book book2("Why Baby Bongo needs pets", "Dr Marshmallow, Ph.D", "Self-Help", 0); //Constructs a book the same way as above, but in one line
	//book2.title = "no"; // rewrites the book's title
	//cout << book2.title << endl << book2.author << endl << book2.getGenre() << endl << book2.pages << endl; //prints (upd8 I made it easier lel)
	book2.setGenre("Horror"); //overwrites the "Self-Help" to horror. Bc Bongo needs the pets
	//cout << book2.getGenre(); //prints the genre
	book2.printer();


	return 0;
}