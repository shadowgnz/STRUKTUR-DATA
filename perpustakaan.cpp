#include <iostream>
#include <list>
#include <stack>
#include <string>
#include <vector>
using namespace std;

//Struktur data untuk buku
struct Buku {
	string judul;
	string penulis;
	int tahun;
};

//menampilkan detail buku
void infoBuku (const Buku& buku) {
	cout << "judul\t\t:" << buku.judul << endl;
	cout << "penulis\t\t:" << buku.penulis << endl;
	cout << "tahun terbit\t:" << buku.tahun << endl;
	cout << "-------------------------------" << endl; 
}

int main () {
	//menyimpan buku dalam vektor
	vector<Buku> library;
	
	while (true) {
		cout << "pilih operasi" << endl;
		cout << "1. menambahkan buku" << endl;
		cout << "2. mencari buku" << endl;
		cout << "3. keluar" << endl;
		
		int pilihan;
		cin >> pilihan;
		
		if (pilihan == 1) {
			//menambahkan buku ke perpustakaan
			Buku bukubaru;
			cin.ignore();
			cout << "Masukkan judul\t\t:";
			getline(cin, bukubaru.judul);
			cout << "Masukkan nama penulis\t:";
			getline(cin, bukubaru.penulis);
			cout << "Masukkan tahun terbit\t:";
			cin >> bukubaru.tahun;
			library.push_back(bukubaru);
				
		} else if (pilihan == 2) {
				//mencari buku berdasarkan judul
				string cariJudul;
				cin.ignore();
				cout << "Masukkan judul buku yang dicari: ";
				getline(cin, cariJudul);
				
				bool ketemu = false;
				for (Buku& buku : library) {
					if (buku.judul == cariJudul) {
						infoBuku (buku);
						ketemu = true;
					}
				}
				
				if (!ketemu) {
					cout << "Buku tidak ditemukan" << endl;
					
				}
				
			} else if (pilihan == 3) {
				break;
			} else {
				cout << "pilihan tidak valid" <<endl;
			}
	}
	return 0;
}