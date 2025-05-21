
#include"Header.h"
int nSanPham = 0;
int nHoaDon = 0;
double tienHang = 0;
vector<sanPham> listSP;
vector<hoaDon> listHD;
/*Menu*/
void Menu() {
    cout << "*********************************************\n";
    cout << "**      CHUONG TRINH QUAN LY BAN HANG      **\n";
    cout << "**         1.Quan ly mat hang              **\n";
    cout << "**         2.Quan ly hoa don               **\n";
    cout << "**         3.Thong ke                      **\n";
    cout << "**         0.Thoat                         **\n";
    cout << "*********************************************\n";
    cout << "**       Nhap lua chon cua ban:            **\n";

}
//Menu mat hang
void MenuQLMH() {
    cout << "***********************************************\n";
    cout << "**             MENU QUAN LY MAT HANG         **\n";
    cout << "**           1.In danh sach san pham         **\n";
    cout << "**           2.Them san pham moi             **\n";
    cout << "**           3.Sua san pham                  **\n";
    cout << "**           4.Xoa san pham                  **\n";
    cout << "**           5.Tim kiem sp theo ma           **\n";
    cout << "**           6.Tim kiem sp theo key word     **\n";
    cout << "**           7.Tim kiem tren khoang gia ban  **\n";
    cout << "**           8.Sap xep theo gia ban          **\n";
    cout << "**           0.Thoat                         **\n";
    cout << "***********************************************\n";
    cout << "**         Nhap lua chon cua ban:            **\n";

}
//Menu hoa don
void MenuQLHD() {
    cout << "***************************************************\n";
    cout << "**       MENU QUAN LY HOA DON                    **\n";
    cout << "**         1.Them hoa don                        **\n";
    cout << "**         2.Sua hoa don                         **\n";
    cout << "**         3.Xoa hoa don                         **\n";
    cout << "**         4.Xuat hoa don theo ma                **\n";
    cout << "**         5.Tim kiem hoa don theo khoang ngay   **\n";
    cout << "**         6.Liet ke tat ca hoa don              **\n";
    cout << "**         0.Thoat                               **\n";
    cout << "***************************************************\n";
    cout << "**       Nhap lua chon cua ban:                  **\n";
}

// Menu sua san pham
void MenuSua() {
    cout << "*********************************************\n";
    cout << "**       Ban muon sua thong tin gi         **\n";
    cout << "**         1.Sua ma san pham               **\n";
    cout << "**         2.Sua ten san pham              **\n";
    cout << "**         3.Sua so luong san pham         **\n";
    cout << "**         4.Sua gia nhap san pham         **\n";
    cout << "**         5.Sua gia ban san pham          **\n";
    cout << "**         6.Sua size giay                 **\n";
    cout << "**         7.Sua mau giay                  **\n";
    cout << "**         0.Thoat                         **\n";
    cout << "*********************************************\n";
    cout << "**       Nhap lua chon cua ban:            **\n";
}
//Menu sua hoa don
void MenuSuaHD() {
    cout << "**************************************************\n";
    cout << "**       Ban muon sua thong tin gi              **\n";
    cout << "**         1.Sua ngay cua hoa don               **\n";
    cout << "**         2.Sua so luong san pham cua hoa don  **\n";
    cout << "**         3.Sua tong gia tri hoa don           **\n";
    cout << "**         0.Thoat                              **\n";
    cout << "**************************************************\n";
    cout << "**       Nhap lua chon cua ban:                 **\n";
}
// Menu sap xep gia
void MenuSapXepGia() {
    cout << "*********************************************\n";
    cout << "**       Ban muon sap xep san pham ?       **\n";
    cout << "**         1.Gia tang dan                  **\n";
    cout << "**         2.Gia giam dan                  **\n";
    cout << "**         0.Thoat                         **\n";
    cout << "*********************************************\n";
    cout << "**       Nhap lua chon cua ban:            **\n";
}
// Ham them san pham
void ThemSanPham()
{
    sanPham sp;
    cout << "Nhap vao ma giay: ";
    cin >> sp.maSP;
    cin.ignore();
    cout << "Nhap vao ten giay: ";
    getline(cin, sp.tenSP);
    cout << "Nhap vao so luong giay: ";
    cin >> sp.soluongCon;
    cout << "Nhap vao gia nhap: ";
    cin >> sp.giaNhap;
    cout << "Nhap vao gia ban: ";
    cin >> sp.giaBan;
    cout << "Nhap size giay: ";
    cin >> sp.size;
    cout << "Nhap mau sac cua giay: ";
    cin.ignore();
    getline(cin,sp.mauSac);
    listSP.push_back(sp);
    nSanPham += 1;
    cout << "Da them thanh cong! " << endl;
}

//// căn giữa 1 chuỗi
string canGiua1(const string& str, int width) {
    int khoangTrang = width - str.size();
    int left = khoangTrang / 2;
    int right = khoangTrang - left;
    return (string(left, ' ') + str + string(right, ' '));
}

//// căn giữa số
string canGiua2(double value, int width) {
    string str = to_string(value);
    /// xóa các số 0 ở cuối ( sau dấu chấm thập phân )
    str.erase(str.find_last_not_of('0') + 1, string::npos);
    if (str.back() == '.') str.pop_back();
    return canGiua1(str, width);
}


// In ra danh sach san pham
void InListSp(const vector<sanPham>& ds)
{
    const int width = 12;
    // In tiêu đề 
    cout << "+-----+------------+------------------+------------+----------------+--------------------+------------+------------+" << std::endl;
    cout << "| " << canGiua1("STT", 4) << "|"
        << canGiua1("Code", width) << "|"
        << canGiua1("Name", 18) << "|"
        << canGiua1("Count", width) << "|"
        << canGiua1("Size", 16) << "|"
        << canGiua1("Color", 20) << "|"
        << canGiua1("Input Price", width) << "|"
        << canGiua1("Output Price", width) << "|" << std::endl;
    cout << "+-----+------------+------------------+------------+----------------+--------------------+------------+------------+" << std::endl;

    // In thông tin
    int i = 1;
    for (const auto& sanPham : ds) {
        cout << "| " << canGiua1(to_string(i), 4) << "|"
            << canGiua1(sanPham.maSP, width) << "|"
            << canGiua1(sanPham.tenSP, 18) << "|"
            << canGiua2(sanPham.soluongCon, width) << "|"
            << canGiua1(sanPham.size, 16) << "|"
            << canGiua1(sanPham.mauSac, 20) << "|"
            << canGiua2(sanPham.giaNhap, width) << "|"
            << canGiua2(sanPham.giaBan, width) << "|" << std::endl;
        cout << "+-----+------------+------------------+------------+----------------+--------------------+------------+------------+" << std::endl; // s? = -
        i++;
    }
}

void InListSp1() {
    InListSp(listSP);
}
// Ham main khong goi duoc tham so nen dung ham nay de in
void InSP(sanPham sp) {
    const int width = 12;
    // In tiêu đề
    cout << "+-----+------------+------------------+------------+----------------+--------------------+------------+------------+" << std::endl;
    cout << "| " << canGiua1("STT", 4) << "|"
        << canGiua1("Code", width) << "|"
        << canGiua1("Name", 18) << "|"
        << canGiua1("Count", width) << "|"
        << canGiua1("Size", 16) << "|"
        << canGiua1("Color", 20) << "|"
        << canGiua1("Input Price", width) << "|"
        << canGiua1("Output Price", width) << "|" << std::endl;
    cout << "+-----+------------+------------------+------------+----------------+--------------------+------------+------------+" << std::endl;

    // In thông tin
    cout << "| " << canGiua1(to_string(1), 4) << "|"
        << canGiua1(sp.maSP, width) << "|"
        << canGiua1(sp.tenSP, 18) << "|"
        << canGiua2(sp.soluongCon, width) << "|"
        << canGiua1(sp.size, 16) << "|"
        << canGiua1(sp.mauSac, 20) << "|"
        << canGiua2(sp.giaNhap, width) << "|"
        << canGiua2(sp.giaBan, width) << "|" << std::endl;
    cout << "+-----+------------+------------------+------------+----------------+--------------------+------------+------------+" << std::endl; // s? = -


}
//Tim vi tri cua san pham co ma la xxx
int find_vitri_maSP(string maSP) {
    int i = 0;
    for (const auto& sp : listSP) {
        if (maSP == sp.maSP) return i;
        else i++;
    }
    if (i == listSP.size())
        return -1;

}
// Sua san pham theo ma
void SuaMaSanPham() {
    string maSP;
    cout << "Nhap vao ma san pham can sua: ";
    getline(cin, maSP);
    if (find_vitri_maSP(maSP) == -1) {
        cout << "Khong ton tai ma san pham";
        return;
    }
    sanPham sp = listSP[find_vitri_maSP(maSP)];
    cout << "Nhap ma san pham moi: ";
    cin >> sp.maSP;
    listSP[find_vitri_maSP(maSP)] = sp;
    cout << "\nSua ma san pham thanh cong! ";
}
// Sua san pham theo ten
void SuaTenSanPham() {
    string maSP;
    cout << "Nhap vao ma san pham can sua: ";
    getline(cin, maSP);
    if (find_vitri_maSP(maSP) == -1) {
        cout << "Khong ton tai ma san pham";
        return;
    }
    sanPham sp = listSP[find_vitri_maSP(maSP)];
    cout << "Nhap ten san pham moi: ";
    cin >> sp.tenSP;
    listSP[find_vitri_maSP(maSP)] = sp;
    cout << "\nSua ten san pham thanh cong! ";
}
// Sua so luong san pham
void SuaSoLuong() {
    string maSP;
    cout << "Nhap vao ma san pham can sua: ";
    getline(cin, maSP);
    if (find_vitri_maSP(maSP) == -1) {
        cout << "Khong ton tai ma san pham";
        return;
    }
    sanPham sp = listSP[find_vitri_maSP(maSP)];
    cout << "Nhap so luong san pham moi: ";
    cin >> sp.soluongCon;
    listSP[find_vitri_maSP(maSP)] = sp;
    cout << "\nSua so luong san pham thanh cong! ";
}
// Sua gia nhap san pham
void SuaGiaNhap() {
    string maSP;
    cout << "Nhap vao ma san pham can sua: ";
    getline(cin, maSP);
    if (find_vitri_maSP(maSP) == -1) {
        cout << "Khong ton tai ma san pham";
        return;
    }
    sanPham sp = listSP[find_vitri_maSP(maSP)];
    cout << "Nhap gia nhap moi: ";
    cin >> sp.giaNhap;
    listSP[find_vitri_maSP(maSP)] = sp;
    cout << "\nSua gia nhap thanh cong! ";
}
// Sua gia ban san pham
void SuaGiaBan() {
    string maSP;
    cout << "Nhap vao ma san pham can sua: ";
    getline(cin, maSP);
    if (find_vitri_maSP(maSP) == -1) {
        cout << "Khong ton tai ma san pham";
        return;
    }
    sanPham sp = listSP[find_vitri_maSP(maSP)];
    cout << "Nhap gia ban moi: ";
    cin >> sp.giaBan;
    listSP[find_vitri_maSP(maSP)] = sp;
    cout << "\nSua gia ban thanh cong! ";
}
// Sua size giay
void SuaSize() {
    string maSP;
    cout << "Nhap vao ma san pham can sua: ";
    getline(cin, maSP);
    if (find_vitri_maSP(maSP) == -1) {
        cout << "Khong ton tai ma san pham";
        return;
    }
    sanPham sp = listSP[find_vitri_maSP(maSP)];
    cout << "Nhap size san pham moi: ";
    cin >> sp.size;
    listSP[find_vitri_maSP(maSP)] = sp;
    cout << "\nSua size san pham thanh cong! ";
}
// Sua mau giay
void SuaMauSac() {
    string maSP;
    cout << "Nhap vao ma san pham can sua: ";
    getline(cin, maSP);
    if (find_vitri_maSP(maSP) == -1) {
        cout << "Khong ton tai ma san pham";
        return;
    }
    sanPham sp = listSP[find_vitri_maSP(maSP)];
    cout << "Nhap mau cho san pham moi: ";
    cin >> sp.mauSac;
    listSP[find_vitri_maSP(maSP)] = sp;
    cout << "\nSua mau san pham thanh cong! ";
}
// Xoa san pham
void XoaSanPham() {
    string maSP;
    cout << "Nhap ma san pham can xoa: ";
    getline(cin, maSP);
    if (find_vitri_maSP(maSP) == -1) {
        cout << "Khong ton tai ma san pham";
        return;
    }

    int i = find_vitri_maSP(maSP);
    sanPham sp = listSP[find_vitri_maSP(maSP)];
    if (i == listSP.size() - 1) {
        listSP.pop_back();

    }
    else {
        for (i; i < listSP.size() - 1; i++) {
            listSP[i] = listSP[i + 1];
        }
        listSP.pop_back(); // xoa phan tu cuoi cung cua danh sach
    }
    nSanPham = listSP.size();
    cout << "Da xoa mat hang co ma: " << sp.maSP << " khoi danh sach. \n";
}
// Tim kiem san pham theo ma
void TimKiemTheoMa() {
    string maSP;
    cout << "Nhap ma san pham can tim: ";
    getline(cin, maSP);
    if (find_vitri_maSP(maSP) == -1) {
        cout << "Khong ton tai ma san pham" << endl;
        return;
    }

    sanPham sp = listSP[find_vitri_maSP(maSP)];
    InSP(sp);
}
// Kiem tra xem co ton tai chuoi xxx trong ten san pham khong
bool KiemtraChuoicon(const string& subStr, const string& str) {
    if (subStr.length() > str.length()) return false;
    if (subStr.empty()) return true; // chuoi rong

    for (size_t i = 0; i <= str.length() - subStr.length(); i++) {
        size_t j;
        for (j = 0; j < subStr.length(); j++) {
            if (tolower(str[i + j]) != tolower(subStr[j])) break;
        }

        if (j == subStr.length()) return true;
    }
    return false;
}
//Tim kiem san pham theo chuoi ki tu goi y
void TimKiemTheoTen() {
    string tenSP;
    cout << "Nhap vao ten goi y: ";
    getline(cin, tenSP);
    vector<sanPham> listKQ;
    for (auto sp : listSP) {
        if (KiemtraChuoicon(tenSP, sp.tenSP)) {
            listKQ.push_back(sp);
        }
    }
    InListSp(listKQ);
}
// Tim kiem san pham tren khoang gia ban
void TimKiemTrenKhoangGiaBan() {
    double from, to;
    vector<sanPham> listKQ;
    cout << "Nhap vao khoang gia (den nghin dong): " << endl;
    cout << "Tu: "; cin >> from;
    cout << "Den: "; cin >> to;
    for (int i = 0; i < listSP.size(); i++) {
        if (listSP[i].giaBan >= from && listSP[i].giaBan <= to) {
            listKQ.push_back(listSP[i]);
        }
    }
    InListSp(listKQ);
}
//Doi vi tri 2 san pham cho nhau
void swapSp(sanPham& a, sanPham& b) {
    sanPham tmp = a;
    a = b;
    b = tmp;
}
//Sap xep gia san pham tang dan
void SapXepGiaTangDan() { // Selection Sort
    vector<sanPham> listKQ = listSP;
    for (int i = 0; i < listKQ.size() - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < listKQ.size(); j++) {
            if (listKQ[j].giaBan < listKQ[minIndex].giaBan) {
                minIndex = j;
            }
        }
        swapSp(listKQ[i], listKQ[minIndex]);
    }
    InListSp(listKQ);
}
// Sap xep gia san pham giam dan
void SapXepGiaGiamDan() { // Selection Sort
    vector<sanPham> listKQ = listSP;
    for (int i = 0; i < listKQ.size() - 1; i++) {
        int maxIndex = i;
        for (int j = i + 1; j < listKQ.size(); j++) {
            if (listKQ[j].giaBan > listKQ[maxIndex].giaBan) {
                maxIndex = j;
            }
        }
        swapSp(listKQ[i], listKQ[maxIndex]);
    }
    InListSp(listKQ);
}

// Hoa Don
void inHoaDon(hoaDon newHD) {
    cout << "Ma hoa don: " << newHD.maHD << '\n';
    cout << "Ngay tao hoa don: " << newHD.ngaynhapDon.ngay << '/' << newHD.ngaynhapDon.thang << '/' << newHD.ngaynhapDon.nam << '/' << '\n';
    cout << "So  san pham: " << newHD.soLuongSanPham << '\n';
    cout << "Tong gia tri don hang: " << newHD.tongGiaTriHD << '\n';
}
void inListHoaDon(const vector<hoaDon>& ds) {
    for (int i = 0; i < nHoaDon; i++) {
        inHoaDon(ds[i]);
    }
}
void inListHoaDon1() {
    inListHoaDon(listHD);
}
void themHoaDon() {
    hoaDon newHD;
    cout << "Nhap ma hoa don: \n";
    getline(cin, newHD.maHD);
    cout << "Nhap nam: \n";
    cin >> newHD.ngaynhapDon.nam;
    cout << "Nhap thang: \n";
    cin >> newHD.ngaynhapDon.thang;
    cout << "Nhap ngay: \n";
    cin >> newHD.ngaynhapDon.ngay;
    cout << "Nhap so san pham: \n";
    cin >> newHD.soLuongSanPham;
    cout << "Nhap gia tri don hang: \n";
    cin >> newHD.tongGiaTriHD;
    listHD.push_back(newHD);
    nHoaDon++;
    cout << "\nThem hoa don thanh cong! ";
}
int findHoaDon(string maHD) {
    int i = 0;
    for (const auto& hd : listHD) {
        if (maHD == hd.maHD) return i;
        else i++;
    }
    if (i == listHD.size()) return -1;
}
void suaNgayHoaDon() {
    string maHD;
    cout << "Nhap vao ma hoa don can sua: ";
    getline(cin, maHD);
    if (findHoaDon(maHD) == -1) {
        cout << "Khong ton tai hoa don nay";
        return;
    }
    hoaDon newHD = listHD[findHoaDon(maHD)];
    cout << "Nhap ngay thang nam moi cua hoa don: \n";
    cout << "Nhap nam: \n";
    cin >> newHD.ngaynhapDon.nam;
    cout << "Nhap thang: \n";
    cin >> newHD.ngaynhapDon.thang;
    cout << "Nhap ngay: \n";
    cin >> newHD.ngaynhapDon.ngay;
    listHD[findHoaDon(maHD)] = newHD;
    cout << "\nSua hoa don thanh cong! ";
}
void suaSoSPHoaDon() {
    string maHD;
    cout << "Nhap vao ma hoa don can sua: ";
    getline(cin, maHD);
    if (findHoaDon(maHD) == -1) {
        cout << "Khong ton tai hoa don nay";
        return;
    }
    hoaDon newHD = listHD[findHoaDon(maHD)];
    cout << "Nhap so san pham moi: \n";
    cin >> newHD.soLuongSanPham;
    listHD[findHoaDon(maHD)].soLuongSanPham = newHD.soLuongSanPham;
    cout << "\nSua hoa don thanh cong! ";
}
void suaTongGiaTriHoaDon() {
    string maHD;
    cout << "Nhap vao ma hoa don can sua: ";
    getline(cin, maHD);
    if (findHoaDon(maHD) == -1) {
        cout << "Khong ton tai hoa don nay";
        return;
    }
    hoaDon newHD = listHD[findHoaDon(maHD)];
    cout << "Nhap gia tri hoa don moi: \n";
    cin >> newHD.tongGiaTriHD;
    listHD[findHoaDon(maHD)].soLuongSanPham = newHD.tongGiaTriHD;
    cout << "\nSua hoa don thanh cong! ";
}
void xoaHoaDon() {
    string NewmaHD;
    cout << "Nhap ma hoa don can xoa: ";
    getline(cin, NewmaHD);
    if (findHoaDon(NewmaHD) == -1) {
        cout << "Khong ton tai ma hoa don!";
        return;
    }

    int i = findHoaDon(NewmaHD);
    hoaDon HD = listHD[findHoaDon(NewmaHD)];
    if (i == listHD.size() - 1) {
        listHD.pop_back();

    }
    else {
        for (i; i < listHD.size() - 1; i++) {
            listHD[i] = listHD[i + 1];
        }
        listHD.pop_back(); // xoa phan tu cuoi cung cua danh sach
    }
    nHoaDon = listHD.size();
    cout << "Da xoa hoa don khoi danh sach. \n";
}
void xuatHoaDon() {

    string maHD;
    cout << "Nhap vao ma hoa don can xuat: ";
    getline(cin, maHD);
    if (findHoaDon(maHD) == -1) {
        cout << "Khong ton tai hoa don nay";
        return;
    }
    string filename = "hoaDonXuat.txt";
    std::ofstream file(filename);
    if (!file) {
        std::cerr << "Khong the mo tep: " << filename << std::endl;
        return;
    }
    file << "Ma Hoa Don: " << listHD[findHoaDon(maHD)].maHD << "\n";
    file << "Ngay xuat: " << listHD[findHoaDon(maHD)].ngaynhapDon.ngay << '/' << listHD[findHoaDon(maHD)].ngaynhapDon.thang << '/' << listHD[findHoaDon(maHD)].ngaynhapDon.nam << "\n";
    file << "So luong hoa don: " << listHD[findHoaDon(maHD)].soLuongSanPham << "\n";
    file << "Gia tri hoa don: " << listHD[findHoaDon(maHD)].tongGiaTriHD << "\n";
    file.close();
}
void timKiemHoaDonTheoNgay() {
    bool found = false;
    int namFind, thangFind, ngayBatDau, ngayKetThuc;
    cout << "Nhap nam tim kiem: ";
    cin >> namFind;
    cout << "Nhap thang tim kiem: ";
    cin >> thangFind;
    cout << "Tu ngay: ";
    cin >> ngayBatDau;
    cout << "Den ngay: ";
    cin >> ngayKetThuc;
    for (int i = 0; i < nHoaDon; i++) {
        if (listHD[i].ngaynhapDon.nam == namFind && listHD[i].ngaynhapDon.thang == thangFind) {
            if ((listHD[i].ngaynhapDon.ngay >= ngayBatDau && listHD[i].ngaynhapDon.ngay <= ngayKetThuc) || (listHD[i].ngaynhapDon.ngay <= ngayBatDau && listHD[i].ngaynhapDon.ngay >= ngayKetThuc)) {
                inHoaDon(listHD[i]);
                found = true;
            }
        }
    }
    if (found == false) {
        cout << "Khong tim thay hoa don trong khoang ngay nay\n";
    }
}




