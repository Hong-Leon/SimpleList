#include "include/list.h"
#include "include/database.h"

int main(int arg_count, char *args[]){
    List SimpleList;
    Database data;

    if (arg_count > 1) {
        SimpleList.name = string(args[1]);
        SimpleList.mainList = data.read();
        bool userFound = SimpleList.find_userList();
        SimpleList.print_menu();
        data.write(SimpleList.mainList);
    }
    else {
        cout << "Username not supplied .. exiting the program" << endl;
    }

    return 0;
}
