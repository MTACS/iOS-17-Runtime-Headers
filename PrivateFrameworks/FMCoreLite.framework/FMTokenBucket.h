
@interface FMTokenBucket : NSObject {
    double  _capacity;
    double  _fillRate;
    double  _interArrivalTime;
    double  _lastArrivalTime;
    double  _lastBucketFill;
    double  _operationCost;
    long long  _operationsAllowed;
    double  _tokenBucket;
    double  _totalInterArrivalTime;
    long long  _totalOperations;
    double  _totalTokensConsumed;
    double  _totalTokensGenerated;
    double  _wastedTokens;
}

@property (nonatomic) double capacity;
@property (nonatomic) double fillRate;
@property (nonatomic) double interArrivalTime;
@property (nonatomic) double lastArrivalTime;
@property (nonatomic) double lastBucketFill;
@property (nonatomic, readonly) bool operationAllowed;
@property (nonatomic) double operationCost;
@property (nonatomic) long long operationsAllowed;
@property (nonatomic) double tokenBucket;
@property (nonatomic) double totalInterArrivalTime;
@property (nonatomic) long long totalOperations;
@property (nonatomic) double totalTokensConsumed;
@property (nonatomic) double totalTokensGenerated;
@property (nonatomic) double wastedTokens;

- (bool)_consumeTokens:(long long)arg1;
- (void)_replenishTokens;
- (double)capacity;
- (long long)countOfOperationsAllowed;
- (long long)countOfOperationsAllowedWithCost:(double)arg1;
- (id)dumpStatistics;
- (double)fillRate;
- (id)initWithFillRate:(double)arg1 capacity:(double)arg2;
- (id)initWithFillRate:(double)arg1 capacity:(double)arg2 initialAllocation:(double)arg3;
- (double)interArrivalTime;
- (double)lastArrivalTime;
- (double)lastBucketFill;
- (bool)operationAllowed;
- (bool)operationAllowedWithCost:(double)arg1;
- (double)operationCost;
- (long long)operationsAllowed;
- (void)reset;
- (void)setCapacity:(double)arg1;
- (void)setFillRate:(double)arg1;
- (void)setInterArrivalTime:(double)arg1;
- (void)setLastArrivalTime:(double)arg1;
- (void)setLastBucketFill:(double)arg1;
- (void)setOperationCost:(double)arg1;
- (void)setOperationsAllowed:(long long)arg1;
- (void)setTokenBucket:(double)arg1;
- (void)setTotalInterArrivalTime:(double)arg1;
- (void)setTotalOperations:(long long)arg1;
- (void)setTotalTokensConsumed:(double)arg1;
- (void)setTotalTokensGenerated:(double)arg1;
- (void)setWastedTokens:(double)arg1;
- (double)timeIntervalUntilOperationAllowed;
- (double)timeIntervalUntilOperationAllowedWithCost:(double)arg1;
- (double)tokenBucket;
- (double)totalInterArrivalTime;
- (long long)totalOperations;
- (double)totalTokensConsumed;
- (double)totalTokensGenerated;
- (double)wastedTokens;

@end
