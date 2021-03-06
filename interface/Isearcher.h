#ifndef PROJB_ISEARCHER_H
#define PROJB_ISEARCHER_H

#include <string>
#include "Solver.h"
#include <stdio.h>

using std::string;

//interface
template<class P, class T>
class Isearcher : public Solver<P *, list<State<T> *>> {
protected:

public:
    virtual list<State<T> *> *solve(P p) = 0;

    virtual State<T> *search(Searchable<T> *searchable) = 0;

    virtual int getNumberOfNodesEvaluated() = 0;

};


#endif //PROJB_ISEARCHER_H
