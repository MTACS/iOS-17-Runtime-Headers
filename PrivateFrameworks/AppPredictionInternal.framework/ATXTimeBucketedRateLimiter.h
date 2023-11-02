
@interface ATXTimeBucketedRateLimiter : NSObject {
    unsigned long long  _countForCurrentBucket;
    NSDate * _endOfCurrentBucket;
    unsigned long long  _maxCount;
    NSDate * _now;
    double  _period;
}

@property (nonatomic, retain) NSDate *now;

- (void).cxx_destruct;
- (void)_resetBucketIfNeeded;
- (id)initWithMaxCount:(unsigned long long)arg1 perPeriod:(double)arg2;
- (id)now;
- (void)setNow:(id)arg1;
- (bool)tryToIncrementCountAndReturnSuccess;

@end
