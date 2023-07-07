#include <iostream>

class Counter {
    public:
        static Counter* getInstance() {
        static Counter instance;

        return &instance;
        }

        void inc(int value = 1) {
        count += value;
        }

        int get() {
            return count;
        }

    private:
        int count = 0;

        Counter() { };
};

int main() {
    Counter* counterFoo = Counter::getInstance();
    counterFoo->inc();
    std::cout << counterFoo->get() << std::endl;

    Counter* counterBar = Counter::getInstance();
    counterBar->inc(2);
    std::cout << counterFoo->get() << std::endl;

    std::cout << Counter::getInstance() << "=" << Counter::getInstance() << std::endl;

    return 0;
}
