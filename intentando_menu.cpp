	#include <iostream>
using namespace s;
int contador = 0;
int op;
string nombre;
int main()
{
	


		
cout << "+-----------------------+";
cout << "digite uno para poner su nombre ";
cout <<"digite 2 para salir";
cin >>op;
while (op != 1 && op != 2 && op != 0 )
{
cout << "digite entre las que encuentra en el menu ";
cin >> op;
}










switch(op)
{

case 1:
{


cout << "digite su nombre ";
cin >>nombre;
cout << "mucho gusto, " << nombre <<endl;
system("pause");
break;
}
case 2:
	{
	cout << "usted que quiere ";
}
system("pause");
break;	

while (op != 0);

}

system ("pause");
while (op != 0)
{

cout << "repitamos ";
cin >>op;
}

return 0;
}



