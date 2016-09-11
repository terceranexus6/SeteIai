#include <iostream>
using namespace std;

//programa para consultar katas de sete iai

//utilizo una clase con la idea de extender las opciones a redefinir los katas,
//pendiente de mejorar ese detalle
class Kata{
private:
	string nombre;
	string descripcion;
	int num;
public:

//kata por defento, el primero
	Kata(){
		nombre="Ippon me, Mae";
		num=1;
		descripcion="empezar en posición de seiza. Incorporarse de rodillas lentamente mientras se desenvaina, antes de desenvainar del todo, colocar la pierna derecha delante a 90 grados y terminar el desenvaine en horizontal. Llevar la punta de la espada a la oreja izquierda con un movimiento de muñeca, alzar la espada por encima de la cabeza a 45 grados mientras se juntan pie derecho y rodilla izquierda, cortar en somen mientras estiramos de nuevo la pierna derecha para colocarla en 90 grados. Realizar el corte un poco por debajo de la rodilla derecha y la mano derecha pegando al muslo. girar levemente hacia la derecha la hoja y llevar atrás manteniendo ese ángulo, mientras colocamos la mano izquierda extendida sobre la saya. Traer la mano derecha a la sien colocando kashira a la vista del ojo derecho, elevando el cuerpo, limpiar la espada de sangre con un golpe seco. llevar la boca de la saya con la mano izquierda al centro y envainar.";
	}
	
	//aun no se necesitan
	/*void set_nom(string nom){
		nombre=nom;
	}
	void set_num(int n){
		num=n;
	}

	void set_des(string des){
		descripcion=des;
	}
	*/

  //conseguir la descripcion de un kata mediente su número, faltan apartir del 6, en proceso
	string get_des(int num){
		string n;
		if(num==1){
			n="empezar en posición de seiza. Incorporarse de rodillas lentamente mientras se desenvaina, antes de desenvainar del todo, colocar la pierna derecha delante a 90 grados y terminar el desenvaine en horizontal. Llevar la punta de la espada a la oreja izquierda con un movimiento de muñeca, alzar la espada por encima de la cabeza a 45 grados mientras se juntan pie derecho y rodilla izquierda, cortar en somen mientras estiramos de nuevo la pierna derecha para colocarla en 90 grados. Realizar el corte un poco por debajo de la rodilla derecha y la mano derecha pegando al muslo. girar levemente hacia la derecha la hoja y llevar atrás manteniendo ese ángulo, mientras colocamos la mano izquierda extendida sobre la saya. Traer la mano derecha a la sien colocando kashira a la vista del ojo derecho, elevando el cuerpo, limpiar la espada de sangre con un golpe seco. llevar la boca de la saya con la mano izquierda al centro y envainar.\n";
		}
		else if(num==2){
			n="Empezar de espaldas al kamiza. Levantarse pivotando sobre la pierna izquierda y terminar el deselvaine al darse la vuelta totalmente. Continuar el kata como en el primero.\n";
		}

		else if(num==3){
			n="Enemigo a la izquierda. colocarse de lado al kamiza (kamiza a la izquierda). mirar al enemigo a la izquierda, empezar a desenvainar mientras Levantas la rodilla izquierda, bloquear el ataque mientras te levantas colocando los pies en posición triangular y los dedos de los pies juntos, kesagiri mientras deslizas el pie izquiero atrás, quedando ligerament ladeado hacia la izquierda. Colocar el filo de la espada hacia abajo a la derecha apoyándoloen el muslo, noto.\n";
		}

		else if(num==4){
			n="Enemigo atrás y alante. Comenzar sentado en tate-iza, incorporarse lentamente sin desenvainar para hacer atemi sobre un enemigo al frente, acto seguido desenvainar echando hacia atrás la saya, pegar la hoja al pecho al ladear el cuerpo 90 grados colocandose sobre la rodilla derecha y el pie izquierdo, y atacar horizontalmente sin retirar la mano más allá del pecho. Llevar la espada para cargar en shomen hacie el primer enemigo, atacar, y dejar la espada ligeramente por debajo de la rodilla, con la mano derecha pegando al muslo derecho, teniendo que quedar la rodilla derecha arriba en posición la pierna de 90 grados. Noto.\n";
		}

		else if(num==5){
			n="Se comienza de pie. Primer paso, el segundo paso empezamos a coger la empuñadura, en el tercer paso, desenvainar con Migi Kesagiri y recolocar la saya a la posición original una vez acabado el desenvaine, para llevar la mano izquierda a la empuñadura en la carga de shomen, y cortar makko giri. Arrastrar el pie derecho hacia atrás mientras se recoge la espada cololandola en 45 grados y la empuñadura cerca de la clavícula derecha, chiburi mientras se arrastra pie izquierdo atrás, noto.\n";
		}

		else if(num==6){
			n="Roppon me, Morotetsuki";
		}

		else if(num==7){
			n="Nanahon me, Sanpogiri";
		}

		else if(num==8){
			n="Hachihon me, Ganmenate";
		}

		else if(num==9){
			n="Kyuhon me, Soetetsuki";
		}

		else if(num==10){
			n="Juppon me, Shihogiri";
		}

		else if(num==11){
			n="Juichippon me, Sougiri";
		}

		else if(num==12){
			n="Junippon me, Nuki uchi";
		}



		return n;
	}

  //conseguir el nombre de un kata por su numero
	string get_nom(int num){
		string n;
		if(num==1){
			n="ippon me mae";
		}
		else if(num==2){
			n="Nihon me, Ushiro";
		}

		else if(num==3){
			n="Sanbon me, Ukenagashi";
		}

		else if(num==4){
			n="Yonhon me, Tsuka-ate";
		}

		else if(num==5){
			n="Gohon me, Kesagiri";
		}

		else if(num==6){
			n="Roppon me, Morotetsuki";
		}

		else if(num==7){
			n="Nanahon me, Sanpogiri";
		}

		else if(num==8){
			n="Hachihon me, Ganmenate";
		}

		else if(num==9){
			n="Kyuhon me, Soetetsuki";
		}

		else if(num==10){
			n="Juppon me, Shihogiri";
		}

		else if(num==11){
			n="Juichippon me, Sougiri";
		}

		else if(num==12){
			n="Junippon me, Nuki uchi";
		}



		return n;
	}

};

int main(){

  //definicion del objeto kata y otras variables
	Kata primero;
	int n;
	int aux;
	string nombre;
	string descripcion;

	aux=1;

//repetición del programa por defecto hasta que el usuario decida salir
	while(aux!=0){
	cout<<"Hola, dime el numero del kata que quieres saber: ";
	cin>>n;

  //reescribir variables nombre y descripcion por cada iteracion
	nombre=primero.get_nom(n);
	descripcion=primero.get_des(n);

  //muestra por pantalla
	cout<<"\nel kata es: ";
	cout<<nombre;
	cout<<"\n";
	cout<<"y su descripcion: ";
	cout<<descripcion;
	cout<<"\n\n";
	cout<<"repetir? 1-si 0-no >> ";
	cin>>aux;
	}
	
	//salida
	cout<<"\ngracias!\n";

}
