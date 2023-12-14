#include "../Database/DatabaseMember.h"
#include <string>
#include <iostream>

using namespace std;

void mAddMember(string inpnama, string inpnoTelp, string inpemail, string inppassword) {
    namaMember[nMember] = inpnama;
    noTelp[nMember] = inpnoTelp;
    email[nMember] = inpemail;
    password[nMember] = inppassword;
    nMember++;
}

void mViewMember(){
    cout << "Data Member" << endl;
    cout << "Jumlah Member: " << nMember << endl;
    cout << "====================================================================" << endl;
    cout << "Nama\t\tNo. Telp\t\tEmail\t\tPassword" << endl;
    cout << "====================================================================" << endl;
    for (int i = 0; i < nMember; i++) {
        cout << namaMember[i] << "\t\t" << noTelp[i] << "\t" << email[i] << "\t\t" << password[i] << endl;
    }
    cout << "====================================================================" << endl;
}

int mSearchMember(string inpnoTelp) {
    for (int i = 0; i < nMember; i++) {
        if (noTelp[i] == inpnoTelp) {
            return i;
        }
    }
    return -1;
}

void mUpdatePass(string inpNoTep, string inpPass){
    int index = mSearchMember(inpNoTep);
    if (index != -1) {
        password[index] = inpPass;
        cout << "Password berhasil diubah" << endl;
    } else {
        cout << "No. Telp tidak ditemukan" << endl;
    }
}