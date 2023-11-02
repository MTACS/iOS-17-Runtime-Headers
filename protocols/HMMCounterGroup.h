
@protocol HMMCounterGroup <NSObject>

@required

- (void)addObserver:(id <HMMCounterObserver>)arg1 forCounterName:(NSString *)arg2;
- (NSDictionary *)countersInDatePartition:(NSDate *)arg1;
- (NSArray *)datePartitions;
- (void)incrementCounter:(NSString *)arg1;
- (void)incrementCounter:(NSString *)arg1 by:(long long)arg2;
- (<HMMCounterDatePartitionProvider> *)partitionProvider;
- (void)sampleValue:(long long)arg1 forCounter:(NSString *)arg2;
- (bool)statisticsForCounter:(NSString *)arg1 inDatePartition:(NSDate *)arg2 minValue:(long long*)arg3 maxValue:(long long*)arg4 average:(long long*)arg5 updateCount:(long long*)arg6;
- (long long)sumOfCountersInDatePartition:(NSDate *)arg1;
- (long long)valueForCounter:(NSString *)arg1 inDatePartition:(NSDate *)arg2;

@end
