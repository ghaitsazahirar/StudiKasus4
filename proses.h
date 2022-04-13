using namespace std;

class Proses{
  public:
    void getData() {
      ambildata.open("../dummy/input.txt");
        while(!ambildata.eof()) {
         ambildata>>uang_saku;
          cout<<uang_saku<<endl;
          ambildata>>kuliah[i];
          ambildata>>jajan[i];
          cout<<kuliah<<endl;
          cout<<jajan;
          /*for (int i=0; i<bulan; i++){
            ambildata>>kuliah[i];
            ambildata>>jajan[i];
          }*/
        }
      ambildata.close();
    }
    void toFile() {
    uang_saku=uang_saku*bulan;
    pengeluaran=kuliah[i]+jajan[i];
    sisa=uang_saku-(kuliah[i]+jajan[i]);
    tulisdata.open("../dummy/proses.txt");
      tulisdata<<uang_saku;
      for(int i=0; i<bulan; i++) {
        
        tulisdata<<kuliah[i];
        tulisdata<<jajan[i];
        tulisdata<<pengeluaran;
      }
    tulisdata<<sisa;
    tulisdata.close();
    }
  private:
    int uang_saku;
    int i;
    int kuliah[20];
    int jajan[20];
    int sisa,bulan,pengeluaran;
    ifstream ambildata;
    ofstream tulisdata;
};
