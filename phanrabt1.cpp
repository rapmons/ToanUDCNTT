#include "Eigen/Eigenvalues" 
#include"Eigen/Core"// tệp tiêu đề 
  #include <iostream> 
  #include<complex>
using namespace std;


  int main () { 
  int n =0;
  cout<< "nhap n=";
  cin>>n;
  
	
Eigen::MatrixXd A(n,n);

 // khai báo ma trận 2x2 thực (kép) 
  Eigen::MatrixXd B(n,n);

  	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "nhap a[" << i << "][" << j << "]: ";
			cin >> A(i,j);
		}
  }
  	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
B (j , i ) = A(i,j);
}
}

  	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
if(B(i,j)!=A(i,j))
{
  cout<<" khong phai la matran doi xung"<<endl; return 0;
  
}
}
}


 Eigen::EigenSolver < Eigen::MatrixXd> s (A); // cá thể s (A) bao gồm hệ thống eigensystem 
  cout << A <<  endl; 
 
   
  for(int i=0;i<n;i++)
  {
   if(real(s.eigenvalues()[i]) <0)
   {
     cout<<" khong phai la ma tran xac dinh duong"; return 0;
   } ;
  }
   
 Eigen::LLT< Eigen::MatrixXd> lltOfA(A); 
Eigen::MatrixXd L = lltOfA.matrixL(); 
 
cout << "Matran L is" << endl << L << endl;
cout << " L * L.transpose()" << endl;
cout << L * L.transpose() << endl;
cout << " matrix A" << endl;


 return 0;
}