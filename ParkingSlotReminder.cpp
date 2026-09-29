#include <iostream>
#include <string>
using namespace std;

int main() {
    int validMembers[3] = {1, 2, 3};
    
    int memberID;
    
    cout << "==========================================" << endl;
    cout << "     PARKING SLOT REMINDER SYSTEM         " << endl;
    cout << "==========================================" << endl;
    cout << "Masukkan Member ID: ";
    cin >> memberID;

    bool isMemberValid = false;
    if (memberID == validMembers[0] || memberID == validMembers[1] || memberID == validMembers[2]) {
        isMemberValid = true;
    }
    else {
        cout << "ACCESS DENIED" << endl;
        cout << "Program selesai" << endl;
        return 0;
    }

    if (memberID == 3) {
        cout << "ANDA TIDAK MEMILIKI KENDARAAN" << endl;
        cout << "Program selesai" << endl;
        return 0;    
    }
    
    string merkKendaraan[3];
    string platNomor[3];
    string warnaKendaraan[3];
    string lokasiParkir[3];

    if (memberID == 1) {
        merkKendaraan[0] = "Toyota Avanza";
        platNomor[0]     = "B 1234 ABC";
        warnaKendaraan[0] = "Hitam";
        lokasiParkir[0]  = "Lantai 1 - Slot A12";

        merkKendaraan[1] = "Honda Vario";
        platNomor[1]     = "B 5678 DEF";
        warnaKendaraan[1] = "Merah";
        lokasiParkir[1]  = "Lantai B1 - Slot M05";

        merkKendaraan[2] = "Mitsubishi Xpander";
        platNomor[2]     = "B 9101 GHI";
        warnaKendaraan[2] = "Putih";
        lokasiParkir[2]  = "Lantai 2 - Slot B03";
    } 
    else if (memberID == 2) {
        merkKendaraan[0] = "Honda HR-V";
        platNomor[0]     = "D 4321 ZXC";
        warnaKendaraan[0] = "Abu-abu";
        lokasiParkir[0]  = "Lantai 1 - Slot C08";

        merkKendaraan[1] = "Yamaha NMAX";
        platNomor[1]     = "D 8765 VBN";
        warnaKendaraan[1] = "Biru";
        lokasiParkir[1]  = "Lantai B1 - Slot M12";

        merkKendaraan[2] = "Suzuki Swift";
        platNomor[2]     = "D 1098 KLM";
        warnaKendaraan[2] = "Kuning";
        lokasiParkir[2]  = "Lantai 3 - Slot A01";
    }

    int repeat = 1;
    while (repeat == 1) {
        cout << "------------------------------------------" << endl;
        cout << "TAMPILKAN INFORMASI KENDARAAN" << endl;
        cout << "------------------------------------------" << endl;
        cout << "Daftar Kendaraan Anda: " << endl;
        cout << "[1] " << merkKendaraan[0] << " | " << platNomor[0] << " | Warna: " << warnaKendaraan[0] << endl;
        cout << "[2] " << merkKendaraan[1] << " | " << platNomor[1] << " | Warna: " << warnaKendaraan[1] << endl;
        cout << "[3] " << merkKendaraan[2] << " | " << platNomor[2] << " | Warna: " << warnaKendaraan[2] << endl;
        
        int pilihan;
        cout << "\nPILIH KENDARAAN (1-3): ";
        cin >> pilihan;

        cout << "\n>>> INFORMASI LOKASI PARKIR <<<\n";
        if (pilihan == 1) {
            cout << "Kendaraan : " << merkKendaraan[0] << " (" << platNomor[0] << endl;
            cout << "Lokasi    : " << lokasiParkir[0] << endl;
        } else if (pilihan == 2) {
            cout << "Kendaraan : " << merkKendaraan[1] << " (" << platNomor[1] << endl;
            cout << "Lokasi    : " << lokasiParkir[1] << endl;
        } else if (pilihan == 3) {
            cout << "Kendaraan : " << merkKendaraan[2] << " (" << platNomor[2] << endl;
            cout << "Lokasi    : " << lokasiParkir[2] << endl;
        } else {
            cout << "Pilihan tidak valid!" << endl;
        }

        cout << "TAMPILKAN INFORMASI LAIN? (1: Yes / 0: No): " << endl;
        cin >> repeat;
    }

    cout << "thank you" << endl;
    cout << "Program ends" << endl;

    return 0;
}