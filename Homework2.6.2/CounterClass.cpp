#include "HeaderCounts.h"


    Counter::Counter() {
        counts = 1;
    }
    Counter::Counter(int counts) {
        this->counts = counts;
    }
    void Counter::increase() {
        counts = counts++;
    }
    void Counter::decrease() {
        counts = counts--;
    }
    int Counter::get_counts() {
        return counts;
    }