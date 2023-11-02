
@interface RTTokenBucket : NSObject {
    double  _capacity;
    double  _fillRate;
    double  _interArrivalTime;
    double  _lastArrivalTime;
    double  _lastBucketFill;
    double  _operationCost;
    unsigned long long  _operationsAllowed;
    double  _tokenBucket;
    double  _totalInterArrivalTime;
    unsigned long long  _totalOperations;
    double  _totalTokensConsumed;
    double  _totalTokensGenerated;
    double  _wastedTokens;
}

@property (nonatomic) double interArrivalTime;
@property (nonatomic) double lastBucketFill;

- (bool)_consumeTokens:(unsigned long long)arg1;
- (void)_replenishTokens;
- (unsigned long long)countOfOperationsAllowed;
- (unsigned long long)countOfOperationsAllowedWithCost:(double)arg1;
- (id)dumpStatistics;
- (id)init;
- (id)initWithFillRate:(double)arg1 capacity:(double)arg2;
- (id)initWithFillRate:(double)arg1 capacity:(double)arg2 initialAllocation:(double)arg3;
- (double)interArrivalTime;
- (double)lastBucketFill;
- (bool)operationAllowed;
- (bool)operationAllowedWithCost:(double)arg1;
- (void)reset;
- (void)setInterArrivalTime:(double)arg1;
- (void)setLastBucketFill:(double)arg1;
- (double)timeIntervalUntilOperationAllowed;
- (double)timeIntervalUntilOperationAllowedWithCost:(double)arg1;

@end
