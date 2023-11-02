
@interface TIHistogram : NSObject {
    NSMutableDictionary * _counts;
    long long  _totalCount;
}

- (void).cxx_destruct;
- (void)addNumber:(id)arg1;
- (long long)countForNumber:(id)arg1;
- (id)descriptionOfCumulativeDistributionFunction;
- (void)enumerateCumulativeDistributionFunctionUsingBlock:(id /* block */)arg1;
- (void)enumerateNumbersUsingBlock:(id /* block */)arg1;
- (id)init;
- (id)sortedNumbers;
- (long long)totalCount;

@end
