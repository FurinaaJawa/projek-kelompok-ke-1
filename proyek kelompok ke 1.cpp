#include <iostream>
using namespace std;

int main(){
	string nama,tempat,jk,alamat,kel,kec,agama,status,pekerjaan,kewarganegaraan;
	long long int nik;
	int ttl,rt,rw,berlaku;
	
	cout<<"masukkan nik : ";
	cin>>nik;
	cout<<"masukkan nama : ";
	cin>>nama;
	cout<<"masukkan tempat : ";
	cin>>tempat;
	cout<<"masukkan jenis kelamin : ";
	cin>>jk;
	cout<<"masukkan alamat : ";
	cin>>alamat;
	cout<<"masukkan tanggal lahir : ";
	cin>>ttl;
	cout<<"masukkan rt : ";
	cin>>rt;
	cout<<"masukkan rw : ";
	cin>>rw;
	cout<<"masukkan kelurahan : ";
	cin>>kel;
	cout<<"masukkan kecamatan : ";
	cin>>kec;
	cout<<"masukkan agama : ";
	cin>>agama;
	cout<<"masukkan status nikah : ";
	cin>>status;
	cout<<"masukkan pekerjaan : ";
	cin>>pekerjaan;
	cout<<"masukkan kewarganegaraan : ";
	cin>>kewarganegaraan;
	cout<<"masukkan masa berlaku : ";
	cin>>berlaku;
	
	system("cls");
	
	cout<<"----------------ktp-------------------"<<endl;
	cout<<" nik : "<<nik<<endl;
	cout<<" nama : "<<nama<<endl;
	cout<<" tempat/tgl lahir : "<<tempat<<", "<<ttl<<endl;
	cout<<" jenis kelamin : "<<jk<<endl;
	cout<<" rt/rw : "<<rt<<"/"<<rw<<endl;
	cout<<" kel/desa : "<<kel<<endl;
	cout<<" kecamatan : "<<kec<<endl;
	cout<<" agama : "<<agama<<endl;
	cout<<" status pernikahan : "<<status<<endl;
	cout<<" pekerjaan : "<<pekerjaan<<endl;
	cout<<" kewarganegaraan : "<<kewarganegaraan<<endl;
	cout<<" masa berlaku : "<<berlaku<<endl;
	cout<<"--------------------------------------"<<endl;
	
	return 0;
		
}






