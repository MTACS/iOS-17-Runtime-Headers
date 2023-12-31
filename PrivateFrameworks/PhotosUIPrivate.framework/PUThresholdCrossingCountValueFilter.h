
@interface PUThresholdCrossingCountValueFilter : PUValueFilter {
    long long  _crossingCount;
    long long  _maximumCrossingCount;
    double  _thresholdValue;
}

@property (nonatomic) long long maximumCrossingCount;
@property (nonatomic) double thresholdValue;

- (long long)maximumCrossingCount;
- (void)setMaximumCrossingCount:(long long)arg1;
- (void)setThresholdValue:(double)arg1;
- (double)thresholdValue;
- (double)updatedValue:(double)arg1 withTargetValue:(double)arg2;

@end
