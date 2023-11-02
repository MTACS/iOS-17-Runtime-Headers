
@protocol HKSampleAggregateCacheProviding <NSObject>

@required

- (long long)bucketIndexForIntervalComponents:(NSDateComponents *)arg1 anchorDate:(NSDate *)arg2;
- (bool)getData:(id*)arg1 error:(id*)arg2;

@end
