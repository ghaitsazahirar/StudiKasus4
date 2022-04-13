using namespace std;

class Input{
  public:
    void cetak()
    {
      cout<<"==============================="<<endl;
      cout<<"|| Menghitung Keperluan Andi ||"<<endl;
      cout<<"==============================="<<endl;
      cout<<"Uang Saku Andi : ";cin>>uang_saku;
      cout<<"Jumlah bulan : ";cin>>bulan;
      for (int i=0; i<bulan; i++){
          cout<<"Keperluan Kuliah : ";cin>>kuliah[i];
          cout<<"Jajan : ";cin>>jajan[i];
        }
    }
    
    void toFile()
    {
      tulisdata.open("../dummy/input.txt");
      tulisdata<<uang_saku<<endl;
      tulisdata<<bulan<<endl;
      tulisdata<<kuliah<<endl;
      tulisdata<<jajan<<endl;
      tulisdata.close();
    }
  private:
    int uang_saku, kuliah[20], jajan[20], bulan;
    ofstream tulisdata;
};
