
#include "MyTestClientHandler.h"

template<class P, class S>
void MyTestClientHandler<P,S>::handleClient() {

    string problem = "dfkgjkdlf";

    P *p;
    S *s;
    if (this->cacheManager->isSolved(p)) {
        s = this->cacheManager->getSolution(p);
    } else {
        s = this->solver->solve(p);
    }

}
