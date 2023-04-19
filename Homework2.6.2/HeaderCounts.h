#pragma once
class Counter {
private:
	int counts;

public:
	Counter();
	Counter(int);
	void increase();
	void decrease();
	int get_counts();
};