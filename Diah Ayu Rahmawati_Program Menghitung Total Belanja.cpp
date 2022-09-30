//Program Menghitung Total Belanja 
#include<iostream>

using namespace std;
int jumlah_barang,harga_barang,total_harga,diskon,pembayaran,bayar;
main ()

{

	cout<<"==========================================="<<endl;
	cout<<"   Program Menghitung Total Belanja	 "<<endl;
	cout<<"==========================================="<<endl;
	cout<<"\n\nJumlah Barang : ";cin>>jumlah_barang;
	cout<<"Harga Barang : Rp. ";cin>>harga_barang;
	cout<<"Total harga : Rp. "<<jumlah_barang*harga_barang<<endl;
	
	if ((jumlah_barang*harga_barang)>=100000) {
		cout<<"Mendapat diskon 5%"<<endl;
		diskon=jumlah_barang*harga_barang*0.05;
		
	} else {
		cout<<"\nTidak Mendapat Diskon"<<endl;
		diskon=0;
	}
	    bayar=(jumlah_barang*harga_barang)-diskon;
	    
	    cout<<"\n\nJadi total belanja yang harus di bayarkan : Rp. "<<bayar<<endl;
	    cout<<"Jumlah Pembayaran = Rp. ";cin>>pembayaran;
	    cout<<"Uang Kembalian    = Rp. "<<pembayaran-bayar<<endl;
	    cout<<endl;
	    system("pause");
	    return 0;
}


