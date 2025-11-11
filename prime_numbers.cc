#include <iostream>
#include <string>
#include <set>
using namespace std;


//Función para detectar el último primo usando el input del usuario como limite
int primos(int num){
    
    //Setteamos las variables que usaremos para almacenar el limite, el último numero primo y un set con todos los primos (Aunque en esta parte del código no lo usemos, se podría usar en otros avances)
    int limit=num;
    int ultimoPrimo;
    set<int> numPrimos={};
    
    //If statement para verificar que nos den un numero valido para ser primo, si no, enviaremos mensaje de error
    if (limit<=0){
        return limit;
    }
    
    //Si el limite es 1, como no hay número más pequeño que no sea cero ni si quiera va a intentar el programa y va a terminarlo
    if (limit==1){
        return limit;
        
    //Solo hacer la función si el número es mayor a 1
    }
    else {
        
        //For loop para que itere por todos los números del 2 al límite dado por el usuario
        for (int i = 2; i <= limit; ++i) {
            bool esPrimo = true;
            
            //Segundo For loop para que divida el current number entre todos los números antes de la raiz de este. Usamos la regla matemática que dice que si la raíz de un número no tiene dividisores, cualquier
            for (int j = 2; j * j <= i; ++j) {
                if (i % j == 0) {
                    esPrimo = false;
                    break;
                }
            }
            
            //Ultimo if que verifica si el booleano fue modificado o no. Si si entra al if y lo agrega al set y updatea el ultimo dato.
            if (esPrimo) {
                numPrimos.insert(i); 
                ultimoPrimo = i;
            }
        }
    }
    
    return ultimoPrimo;
}

int main(){
    int num;
    cout<<"Dame un número límite para encontrar el primo más cercano: ";cin>>num;
    if(num>=1){
     cout<<"El último primo es: "<<primos(num);   
    }
    else{
        cout<<"Los números primos tienen que ser positivos";
    }
    
}