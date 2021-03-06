

#ifndef PROJB_SEARCHER_H
#define PROJB_SEARCHER_H

#include <list>
#include "Searchable.h"
#include "Isearcher.h"
#include <stdio.h>
#include <string>

using std::string;

//abstract
template<class P, class T>
class Searcher : public Isearcher<P, T> {
protected:
    list<State<T> *> *stateList;
    State<T> *initial;
    State<T> *goal;
public:
    Searcher() : Isearcher<P, T>() {
    }

    virtual State<T> *search(Searchable<T> *searchable) = 0;

    virtual list<State<T> *> *solve(P p) override {
        State<T> *goal = this->search(p);
        list<State<T> *> *path = new list<State<T> *>;
        while (goal != nullptr) {
            path->push_back(goal);
            goal = goal->getCameFrom();
        }
        return path;
    }


    virtual int getNumberOfNodesEvaluated() {
        return 0;
    }
};


#endif //PROJB_SEARCHER_H
