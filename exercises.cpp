#include <cstddef>
#include <cmath>
#include <iostream>
#include <list>
#include <ostream>
#include <vector>
#include <set>
#include <array>


/*
template<typename T, template<typename...> class Cont>
std::size_t sum_all(const Cont<T>& cont) {
    size_t ss{};
    for (auto& e : cont) {
        ss += e;
    }
    return ss;
}

template<typename T, size_t N>
std::size_t sum_all(const T (&arr)[N]) {
    size_t ss{};
    for (int i = 0; i < N; ++i) {
        ss += arr[i];
    }
    return ss;
}


template<typename T>
std::ostream& operator<<(std::ostream& os, const std::vector<T>& vec) {
    for (auto &e : vec) {
        os << e << std::endl;
    }
    return os;
}

struct Person {
    int age;

    friend std::ostream& operator<<(std::ostream& os, const Person& p) {
        os << p.age;
        return os;
    }
};

template<typename T>
int max(T a) {
    return a;
}

template<>
int max(Person a) {
    return a.age;
}

template<typename T, typename ...Ts>
int max(T a, Ts... s) {
    auto m = max(s...);
    return a > m ? a : m;
}

template<typename ...Ts>
int max(Person a, Ts... s) {
    auto m = max(s...);
    return a.age > m ? a.age : m;
}

template<typename... Ts>
size_t total_size(Ts... conts) {
    auto val = (conts.size() + ...);
    return val;
}

int main() {
    // max variadic example
    auto r = max(Person{12}, 2, .3, 5);
    auto r2 = max(11, Person{111}, .3, 5);
    std::cout << r << std::endl;
    std::cout << r2 << std::endl;

    // std::cout template example
    std::vector<Person> a = { {1},{2},{3}};
    std::cout << a << std::endl;

    // variadic example
    std::vector<int> b = {1, 5, 1, 2};
    std::cout << total_size(a, b) << std::endl;
    return 0;
}
*/

/*

template<typename T>
void  print_type(T t) {
	if constexpr (std::is_same_v<T, int>) {
		std::cout << "Hola mundo" << std::endl;
	}
    
    else if constexpr (std::is_same_v<T, double>) {
		std::cout << "Double" << std::endl;
	} 
    
    // const char* != std::string
    else if constexpr(std::is_same_v<T, std::string>) {
		std::cout << t << std::endl;
	}
}

// Está visto para la forma Container<char>
template<typename T, template<typename...> class Container>
size_t count_char(Container<T> cont, char delim) {
    size_t count{};
    for (auto& elem: cont) {
        if (elem == delim) {
            ++count;
        }
    }

    return count;
}


size_t count_char(std::array<char, 5> cont, char delim) {
    size_t count{};
    for (auto& elem : cont) {
        if (elem == delim) {
            ++count;
        }
    }

    return count;
}
*/

template<typename T>
int max(T a) {
    return a;
}

template<typename T, typename... Ts>
int max(T a, Ts... ts) {
    auto b = max(ts...);
    return a > b ? a : b;
}


int main() {
    auto m = max(1, 2, 10, 0.1);
    std::cout << m << std::endl;
    return 0;
}