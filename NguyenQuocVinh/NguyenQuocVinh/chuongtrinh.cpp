#include "thuvie.h"
int main()
{
	DaySo x;
	int m;
	//nhapDaySo(x);
	//cout << "Day so vua nhap la: " << endl;
	//xuatDaySo(x);
	//cout << "Tong cac phan tu cua day so la: ";
	//cout << tongDS(x) << endl;
	//if (luuDaySo(x, "dayso.txt"))
	//	cout << "Day so da duoc luu" << endl;
	//else
	//	cout << "Luu khong thanh cong" << endl;
	if (docDaySo(x, "dayso.txt")) {
		//cout << "Day so da duoc doc" << endl;
		//xuatDaySo(x);
		//cout << "Tich cac phan tu cua day so la: " << tichDS(x) << endl;
		//cout << "So pt la: "<< demPTDuong(x) << endl;
		//cout << "so chan trog day: " << endl;
		//xuatchan(x);
		//cout << "Tong cac phan tu chan cua day so la: "<<tongchanDS(x) << endl;
		//cout << "CHI so la: " << tichPTChiSoChan(x) << endl;
		//cout << "Tong cac phan tu  so la: " << tongnguyenDS(x) << endl;
		//cout << "So pt la: " << demPTshtDS(x) << endl;
		if (minDuong(x, m) == true)
			cout << "mind " << m << endl;
		cout << vtmax(x)<<endl;
		cout << demmax(x) <<endl;
		cout << vtmin(x) <<endl;
		cout << ssnt(x) << endl;
		if (sntmin(x, m) == true)
			cout << "sntmin " << m << endl;
		cout << demkhacnhau(x) << endl;
		cout << demsht(x) << endl;
		if (shtmax(x, m) == true)
			cout << "sntmax " << m << endl;
	}	
	else
		cout << "Doc khong thanh cong" << endl;

	


	return 0;
}