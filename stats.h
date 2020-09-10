#include <vector>

class Stats
{
public:
    float average;
    float max;
    float min;
    float findAverage(const std::vector<float>& );
    float findMax(const std::vector<float>& );
    float findMin(const std::vector<float>& );
};

namespace Statistics {
    Stats ComputeStatistics(const std::vector<float>& );
}
