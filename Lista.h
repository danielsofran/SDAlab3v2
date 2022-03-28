#pragma once

typedef int TElem;

class IteratorLP;

struct Nod_ {
    TElem value;
    Nod_* next = nullptr;
    Nod_* prev = nullptr;
};
typedef Nod_* Nod;

class Lista {
private:
	friend class IteratorLP;
	Nod first;
    Nod last;
public:

		// constructor
		Lista (); // O(1)

		// returnare dimensiune
		int dim() const; // O(n)

		// verifica daca lista e vida
		bool vida() const; // theta(1)

		// prima pozitie din lista
		IteratorLP prim() const; // O(1)

		// returnare element de pe pozitia curenta
		//arunca exceptie daca poz nu e valid
		TElem element(IteratorLP poz) const; // O(1)

		// modifica element de pe pozitia poz si returneaza vechea valoare
		//arunca exceptie daca poz nu e valid
		TElem modifica(IteratorLP poz, TElem e); // O(1)

		// adaugare element la inceput
		void adaugaInceput(TElem e);//O(1)

		// adaugare element la sfarsit
		void adaugaSfarsit(TElem e);//O(1)

		// adaugare element dupa o pozitie poz
		// dupa adaugare poz este pozitionat pe elementul adaugat
		// arunca exceptie daca poz nu e valid
		void adauga(IteratorLP& poz, TElem e);

		// sterge element de pe o pozitie poz si returneaza elementul sters
		// dupa stergere poz este pozitionat pe elementul de dupa cel sters
		// arunca exceptia daca poz nu e valid
		TElem sterge(IteratorLP& poz);

		// cauta element si returneaza prima pozitie pe care apare (sau iterator invalid)
		IteratorLP cauta(TElem e) const;//O(n)

		//destructor

		~Lista(); // theta(n)
};
