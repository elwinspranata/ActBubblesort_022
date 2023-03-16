#include<iostream>
using namespace std;


int a[20];         // Deklarasi array a dengan ukuran 20 
int n;             // Deklarasi variabel n untuk menyimpan banyaknya elemen pada array 


void input() {     // Method untuk input 
    while (true) { // Looping 
        cout << "masukan banyaknya elemen pada arrray : "; // Qutput ke layar 
        cin >> n;  // input dari pengguna 
        if (n <= 20) // jika n kurang dari atau sama dengan 20 
            break;  // keluar dari loop 
        else {     // jika n lebih dari 20 
            cout << "\nArray dapat mempunyai maksimal 20 elemen.\n"; // Qutput ke layar 
        }
    }
    cout << endl;                           // Qutput baris kosong 
    cout << "===================" << endl;  // Qutput ke layar 
    cout << "masukan elemen array" << endl;  // Qutput ke layar 
    cout << "===================" << endl;   // Qutput ke layar 

    for (int i = 0; i < n; i++) {    // Looping dengan i dimulai dari 0 hingga n-1 
        cout << "Data ke-" << (i + 1) << ": ";    // Qutput ke layar 
        cin >> a[i];                     // input dari pengguna 
    }
}

void display() {  // Method untuk menampilkan hasil 
    cout << endl;                             // Qutput baris kosong 
    cout << "=================================" << endl;    // Qutput ke layar 
    cout << "Element Array yang telah tersusun" << endl;     // Qutput ke layar 
    cout << "=================================" << endl;    // Qutput ke layar 
    for (int j = 0; j < n; j++) {           // Looping dengan j dimulai dari 0 hingga n-1 
        cout << a[j] << endl;                // Qutput ke layar 
    }
    cout << endl;                            // Qutput baris kosong 
}

void bubblesortArray() {    // method untuk mengurutkan array dengan metode bubble sort 
    for (int i = 1; i < n; i++) {        // Looping dengan i dimulai dari 1 hingga n-1 
        for (int j = 0; j < n - i; j++) { // Looping dengan j dimulai dari 0 hingga n-i-1 
            if (a[j] > a[j + 1]) {        // jika nilai pada a[j] lebih besar dari a[j+1] 
                int temp = a[j];          // simpan nilai a[j] ke variabel sementara temp 
                a[j] = a[j + 1];          // Assign nilai a[j+1] ke a[j] 
                a[j + 1] = temp;          // Assign nilai temp ke a[j+1] 
            }
        }
    }
}


int main() {
    // membuat objek obj dari class Bubblesort 
    input();      // memanggil read() dari class Bubblesort 
    bubblesortArray();   // memanggil bubblesortArray() dari class Bubblesort 
    display();   // memanggil display() dari class Bubblesort 
    return 0;
} 