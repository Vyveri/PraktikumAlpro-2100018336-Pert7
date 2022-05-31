#include <iostream>
#include <iomanip>

using namespace std;

class toko_kelontong{
  public:
    void input(); 
    void proses();
    void output();

  private:
    int n, id_barang[20], clone_id[20],jumlah_stok[20],clone_stok[20],U,i,j,Imaks,temp,Nilai,l,cari,ketemu;
    string nama_barang[20],clone_nama[20];
};

void toko_kelontong::input(){
  cout<<"Masukan banyak data = ";
  cin>>n;
  for(int i=0;i<n;i++){
    cout<<endl;
      cout<<"Data ke-"<<(i+1)<<":"<<endl;
      cout<<"Input Kode Barang : ";cin>>id_barang[i];
      cout<<"Input Nama Barang: ";cin>>nama_barang[i];
      cout<<"Input Stock Barang : ";cin>>jumlah_stok[i];
      clone_id[i]=id_barang[i];
      clone_nama[i]=nama_barang[i];
      clone_stok[i]=jumlah_stok[i];
      }
}

void toko_kelontong::proses(){
//descending jumlah stok
  U=n-1;
  for(i=0; i<=n-2; i++)
  {
    Imaks = i;
    for(j=i+1; j<=U; j++)
    {
      if(jumlah_stok[j] > jumlah_stok[Imaks])
        Imaks = j;
    }
    temp = jumlah_stok[i];
    jumlah_stok[i] = jumlah_stok[Imaks];
    jumlah_stok[Imaks] = temp;
    cout<<endl;
	cout<<"\nJumlah Stok Barang Setelah di urut : ";
 	 	for(i=0; i<n; i++){
    		cout<<setw(3)<<jumlah_stok[i];
  }
  }
//searching id_barang
	cout<<endl;
	cout<<"--------------------------"<<endl;
	cout<<"Input Id Barang yang dicari : ";
	cin>>cari;
	cout<<"--------------------------"<<endl;
	cout<<endl;
	  
	  for(i=0;i<=n;i++)
	  {
		  if (clone_id[i]==cari)
		  {
			  ketemu=1;
			  cout<<"Nama Barang: "<<clone_nama[i];
		  }
	  }
	  if (ketemu==0)
	  {
	  	cout<<"Id Barang tidak ditemukan";
	  }
};

void toko_kelontong::output(){
  
};

int main (void){
  toko_kelontong run;
  run.input();
  run.proses();
  run.output();
   
}
