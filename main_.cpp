
#include"Header.h"
int main()
{
    int choice;
    Menu();
    cin >> choice;
    switch (choice)
    {
    case 1: {
        int luachon;
        do {
            MenuQLMH();
            cin >> luachon;
            getchar(); // Dung de tam dung man hinh
            switch (luachon)
            {
            case 1: {
                InListSp1(); // In list san pham
                break;
            }
            case 2: {
                ThemSanPham(); // Them san pham
                break;
            }
            case 3: {
                int choice1;
                MenuSua();   // Sua san pham
                cin >> choice1;
                getchar();
                switch (choice1)
                {
                case 1: {
                    SuaMaSanPham();
                    break;
                }
                case 2: {
                    SuaTenSanPham();
                    break;
                }
                case 3: {
                    SuaSoLuong();
                    break;
                }
                case 4: {
                    SuaGiaNhap();
                    break;
                }
                case 5: {
                    SuaGiaBan();
                    break;
                }
                case 6: {
                    SuaSize();
                    break;
                }
                case 7: {
                    SuaMauSac();
                    break;
                }
                case 0: {
                    cout << "\n Ban chon thoat\n";
                    cout << "Nhan phim bat ky de thoat\n";
                    getchar();
                    break;
                }
                }
                break;
            }
            case 4: {
                XoaSanPham(); // Xoa san pham
                break;
            }
            case 5: {
                TimKiemTheoMa(); // Tim san pham theo ma
                break;
            }
            case 6: {
                TimKiemTheoTen(); // Tim san pham theo ten
                break;
            }
            case 7: {
                TimKiemTrenKhoangGiaBan(); // Tim kiem san pham tren khoang gia ban
                break;
            }
            case 8: {
                int choice2;
                MenuSapXepGia();
                cin >> choice2;
                getchar();
                switch (choice2) {
                case 1: {
                    SapXepGiaTangDan(); // In ra list sp co gia tang dan
                    break;
                }
                case 2: {
                    SapXepGiaGiamDan(); // In ra list sp co gia giam dan
                    break;
                }
                }
            }
            case 0: {
                cout << "\n Ban chon thoat\n";
                cout << "Nhan phim bat ky de thoat\n";
                getchar();
                break;
            }
            }

        } while (luachon != 0);
    }
          break;
    case 2:
    {
        int luaChonBill;
        do {
            MenuQLHD();
            cin >> luaChonBill;
            getchar();
            switch (luaChonBill) {
            case 1: {
                themHoaDon();
                break;
            }
            case 2: {
                MenuSuaHD();
                int choiceSuaHD;
                cin >> choiceSuaHD;
                getchar();
                switch (choiceSuaHD)
                {
                case 1: {
                    suaNgayHoaDon();
                    break;
                }
                case 2: {
                    suaSoSPHoaDon();
                    break;
                }
                case 3: {
                    suaTongGiaTriHoaDon();
                    break;
                }
                case 0: {
                    cout << "\n Ban chon thoat\n";
                    cout << "Nhan phim bat ky de thoat\n";
                    getchar();
                    break;
                }
                }
                break;
            }
            case 3: {
                xoaHoaDon();
                break;
            }
            case 4: {
                xuatHoaDon();
                break;
            }
            case 5: {
                timKiemHoaDonTheoNgay();
                break;
            }
            case 6: {
                inListHoaDon1();
            }
            case 0: {
                cout << "\n Ban chon thoat\n";
                cout << "Nhan phim bat ky de thoat\n";
                getchar();
                break;
            }
            }
        } while (luaChonBill != 0);
    }

    }
}