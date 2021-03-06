/// @file
///
/// Day 02: Corruption Checksum
///

#pragma once

#include <vector>

#include "advent/utils/base.hh"
#include "advent/utils/types.hh"

namespace advent {

class Day02: public Task {
public:
	Day02() = default;
	~Day02() override = default;

	virtual void solve_part_one() override;
	virtual void solve_part_two() override;

	virtual std::string part_one() const override;
	virtual std::string part_two() const override;

protected:
	int solve_part_one_for_input(const Matrix& input);
	int solve_part_two_for_input(const Matrix& input);
};

}
