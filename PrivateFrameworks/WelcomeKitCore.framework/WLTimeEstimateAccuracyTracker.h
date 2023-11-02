
@interface WLTimeEstimateAccuracyTracker : NSObject {
    NSArray * _samples;
    unsigned long long  _thresholdBelowLastSample;
    NSArray * _thresholds;
}

@property (nonatomic, retain) NSArray *samples;
@property (nonatomic, retain) NSArray *thresholds;

- (void).cxx_destruct;
- (unsigned long long)_indexOfThresholdGreaterThanOrEqualToEstimate:(unsigned long long)arg1;
- (unsigned long long)_thresholdAtIndex:(unsigned long long)arg1;
- (void)didCalculateTimeEstimate:(unsigned long long)arg1 atDate:(id)arg2 associatedObject:(id)arg3;
- (void)estimatesDidResolveAtDate:(id)arg1 block:(id /* block */)arg2;
- (id)init;
- (id)samples;
- (void)setSamples:(id)arg1;
- (void)setThresholds:(id)arg1;
- (id)thresholds;

@end
