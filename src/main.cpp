#include <iostream>
#include "Header.hpp"
#include <list>
#include <deque>
#include <random>
#include <algorithm>
#include <set>

int main(){
    //Важное условие, банки так то не хранят все кридиты в одном пуле, 
    //отдельно в наших деревянных, отдельно валютные так что контейнеров с разными валютами быть не может!
    /*
    std::deque<Credit> my_deq;
    for (int i = 0; i < 10; ++i){
        my_deq.push_back(generate_random_credit(std::to_string(i), "RUB"));
    }
    for (int i = 0; i < 10 ;++i){
        std::cout << my_deq[i];
        std::cout << std::endl;
    }

    std::sort(my_deq.begin(), my_deq.end()); 
    std::cout << "sorted" << std::endl;

    for (int i = 0; i < 10 ;++i){
        std::cout << my_deq[i];
        std::cout << std::endl;
    }

    std::cout << "copy" << std::endl;

    std::list<Credit> lst;
    std::copy(my_deq.begin(), my_deq.end(), std::back_inserter(lst));

    for (std::list<Credit>::iterator itr = lst.begin(); itr != lst.end(); ++itr){
        std::cout << *itr;
        std::cout << std::endl;
    }
    */
    std::set<Credit,CompareByValue> my_set;
    for (int i = 0; i < 10; ++i){
        Credit a = generate_random_credit(std::to_string(i), "RUB");
        my_set.insert(a);
        my_set.insert(a);
    }
    for (std::set<Credit,CompareByValue>::iterator itr = my_set.begin(); itr != my_set.end(); ++itr){
        std::cout << *itr;
        std::cout << std::endl;
    }


}