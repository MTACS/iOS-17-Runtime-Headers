
@interface HMFExponentialBackoffTimer : HMFTimer {
    long long  _exponentialFactor;
    bool  _increasing;
    double  _maximumTimeInterval;
    double  _minimumTimeInterval;
}

@property (nonatomic, readonly) long long exponentialFactor;
@property (getter=isIncreasing, nonatomic, readonly) bool increasing;
@property (nonatomic, readonly) double maximumTimeInterval;
@property (nonatomic, readonly) double minimumTimeInterval;

- (void)__fire;
- (long long)exponentialFactor;
- (id)initWithMinimumTimeInterval:(double)arg1 maximumTimeInterval:(double)arg2 exponentialFactor:(long long)arg3 options:(unsigned long long)arg4;
- (id)initWithTimeInterval:(double)arg1 options:(unsigned long long)arg2;
- (bool)isIncreasing;
- (double)maximumTimeInterval;
- (double)minimumTimeInterval;
- (void)reset;
- (double)timeInterval;

@end
