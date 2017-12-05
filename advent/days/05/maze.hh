/// @file
///
/// Day 05: A Maze of Twisty Trampolines, All Alike
///

#include <string>

#include "advent/utils/base.hh"

namespace advent {

class Day05: public Task {
public:
	Day05() = default;
	~Day05() override = default;

	virtual void solve_part_one() override;
	virtual void solve_part_two() override;

	virtual void test_part_one() override;
	virtual void test_part_two() override;

	virtual std::string part_one() const override;
	virtual std::string part_two() const override;

private:
	int solve_part_one_for_input(std::vector<int>& input);
	int solve_part_two_for_input(std::vector<int>& input);
};

}
