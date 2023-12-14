#include <iostream>
#include "Model/ModelMember.h"
using namespace std;

int main() {
    // testing model member
    mAddMember("Rizky", "081234567890", "ris@email.com","1234");
    mAddMember("Rahmi", "0312345678", "03100000","1234");
    mAddMember("budi","03123444444", "03100000","1234");

    mUpdatePass("031234","4321");

    mViewMember();

    return 0;
}
