#include <iostream>
using namespace std;
int main() {

    int riadky,stlpce;
    cin >> riadky >> stlpce;

    //alokacia   - vyhradene miesta v pameti
    int** pole = new int*[riadky];
    for (int i = 0; i < riadky; i++) {
        pole[i] = new int[i+1];
    }

    for (int riadok = 0; riadok < riadky; riadok++) {
        for (int stlpce = 0; stlpce < stlpce; stlpce++) {
            cin >> pole[riadok][stlpce];
        }
    }

    //dealokacia
    for (int i = 0; i < riadky; i++) {
        delete[] pole[i];
    }
    delete[] pole;






























//     char chessboard[8][8] = {};
//
//    for (int riadok = 0; riadok < 8; riadok++) {
//        for (int stlpech = 0; stlpech < 8; stlpech++) {
//            cin >> chessboard[riadok][stlpech];
//        }
//    }
//
//     // biele Velkymi
//     //cierne malimi
//     int body_biele = 0;
//     int body_cierne = 0;
//     for (int riadok = 0; riadok < 8; riadok++) {
//         for (int stlpech = 0; stlpech < 8; stlpech++) {
//             auto poloha = chessboard[riadok][stlpech];
//             cout << poloha;
//             if (poloha == 7) {
//
//             }
//
//             switch (poloha) {
//                 case 'P': body_biele++;break;
//                 case 'p': body_cierne++;break;
//                 case 'N': body_biele+=3;break;
//                 case 'n': body_cierne+=3;break;
//                 case 'B': body_biele+=3;break;
//                 case 'b': body_cierne+=3;break;
//                 case 'R': body_biele+=5;break;
//                 case 'r': body_cierne+=5;break;
//                 case 'Q': body_biele+=9;break;
//                 case 'q': body_cierne+=9;break;
//             }
//
//             // if (poloha == 'P') {body_biele++;}
//             // if (poloha == 'p') {body_cierne++;}
//             // if (poloha == 'R') {body_biele=+5;}
//             // if (poloha == 'r') {body_cierne=+5;}
//             // if (poloha == 'B') {body_biele=+3;}
//             // if (poloha == 'b') {body_cierne=+3;}
//             // if (poloha == 'Q') {body_biele+=9;}
//             // if (poloha == 'q') {body_cierne+=9;}
//             // if (poloha == 'N') {body_biele+=3;}
//             // if (poloha == 'n') {body_cierne+=3;}
//             // if (stlpech == 7) {
//             //     cout << endl;
//             }
//         }
//     cout << endl << endl;
//     cout << "Biele maju bodov: " << body_biele << endl;
//     cout << "Cierne maju bodov: " << body_cierne << endl;
//     if (body_biele > body_cierne) {cout << "Vyhravaju cierne o " << body_biele - body_cierne << endl;}else if (body_biele==body_cierne){cout << "Nikto nevyhrava " << endl;}else {cout << "vyhravaju cierne o " << body_cierne-body_biele << endl;}







    return 0;
}