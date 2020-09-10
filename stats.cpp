#include "stats.h"

float findAverage(const std::vector<float>& numbers)
{
    int i,sum=0;
    float avg;
    
    for(i=0; i<numbers.size(); i++)
        sum = sum + numbers[i];
    avg = sum/numbers.size();
    return avg;
}

float findMax(const std::vector<float>& numbers)
{
    int i;
    float max = numbers[0];
    
    for(i=0; i<numbers.size(); i++)
    {
        if(numbers[i] > max)
            max = numbers[i];
    }
    return max;
}

float findMin(const std::vector<float>& numbers)
{
    int i;
    float min = numbers[0];
    
    for(i=0; i<numbers.size(); i++)
    {
        if(numbers[i] < min)
            min = numbers[i];
    }
    return min;
}

Stats Statistics::ComputeStatistics(const std::vector<float>& numbers) {
    //Implement statistics here
    Stats obj;
    
    obj.average = obj.findAverage(numbers);
    obj.max = obj.findMax(numbers);
    obj.min = obj.findMin(numbers);
    return obj;
}
