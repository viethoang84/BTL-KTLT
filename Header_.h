#pragma once
#include<iostream>
#include<string>
#include<vector>
#include<cctype>
#include<fstream>
using namespace std;



struct Date
{
	unsigned int ngay;
	unsigned int thang;
	unsigned int nam;

};

struct sanPham
{
	string maSP;
	string tenSP;
	string mauSac;
	int soluongCon;
	double giaNhap;
	double giaBan;
	string size;
};


struct hoaDon
{
	string maHD;
	Date ngaynhapDon;
	int soLuongSanPham;
	double tongGiaTriHD;
};






//Hien thi
void Menu();
void MenuQLMH();
void MenuQLHD();
void MenuSua();
void MenuSuaHD();
// san pham
void ThemSanPham();
void InListSp(const vector<sanPham>& ds);
void InListSp1();
string canGiua1(const string& str, int width);
string canGiua2(double value, int width);
int find_vitri_maSP(string maSP);
void SuaTenSanPham();
void SuaMaSanPham();
void SuaSoLuong();
void SuaGiaNhap();
void SuaGiaBan();
void SuaSize();
void SuaMauSac();
void XoaSanPham();
void TimKiemTheoMa();
void InSP(sanPham sp);
void TimKiemTheoTen();
bool KiemtraChuoicon(const string& subStr, const string& str);
void TimKiemTrenKhoangGiaBan();
void SapXepGiaTangDan();
void SapXepGiaGiamDan();
void MenuSapXepGia();
void swapSp(sanPham& a, sanPham& b);

// Hoa Don
void inHoaDon(hoaDon HD);
void themHoaDon();
int findHoaDon(string maHD);
void suaNgayHoaDon();
void suaSoSPHoaDon();
void suaTongGiaTriHoaDon();
void xuatHoaDon();
void xoaHoaDon();
void inHoaDon(hoaDon hd);
void inListHoaDon(const vector<hoaDon>& ds);
void inListHoaDon1();
void timKiemHoaDonTheoNgay();

