#pragma once

#include "Utils.h"

class SolverGreedy:	public Solver {
public:
	static ProblemSolution Run(InputData input, ProblemMode problemMode, std::vector<double> args);
};

