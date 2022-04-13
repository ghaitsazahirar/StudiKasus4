using namespace std;

class Output {
public:
  void cetak() {
    cout<<"menghitung keperluan\n";
    cout<<"pemasukan = "<<data_file[0]<<endl;
    cout<<"keperluan kuliah = "<<data_file[1]<<endl;
    cout<<"uang jajan = "<<data_file[2]<<endl;
    cout<<"uang yang ditabung = "<<data_file[3]<<endl;
  }

  void getData(){
    ambil_data.open("../dummy/output.txt");
    while(!ambil_data.eof()){
      
      ambil_data >> data_file[index];
      index += 1;
      cout <<"data file" <<data_file[index]<<endl;
    }
    ambil_data.close();
  }

private:
ifstream ambil_data;
string data_file[2];
int index = 0;
};
