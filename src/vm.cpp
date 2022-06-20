//
// Created by root on 20.06.2022.
//

#include "vm.h"
#include "parser.h"

vector<Code> translate(Exp exp) {

    // (1 + 2) * 3
    // Push 1, Push 2, Push 3, Plus, Mult

    string s;

    if(typeid(exp) == typeid(PlusExp)) {
        exp = (PlusExp) exp;
        s.append("Push ");
        s.append("Push ");
        s.append("PLUS");
    } else if(typeid(exp) == typeid(MultExp)) {
        exp = (MultExp) exp;
        s.append("Push" );
        s.append("Push" );
        s.append("Mult");
    } else { //type = IntExp
        exp = (IntExp) exp;
        s.append("Push " + exp.val);
    }
}
