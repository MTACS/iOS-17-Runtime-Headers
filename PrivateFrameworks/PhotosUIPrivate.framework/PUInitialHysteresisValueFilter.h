
@interface PUInitialHysteresisValueFilter : PUValueFilter {
    bool  _didReachThreshold;
    double  _initialHysteresis;
    double  _thresholdValue;
}

@property (nonatomic, readonly) double outputValueDerivative;
@property (nonatomic) double thresholdValue;

- (double)outputValueDerivative;
- (void)setThresholdValue:(double)arg1;
- (double)thresholdValue;
- (double)updatedValue:(double)arg1 withTargetValue:(double)arg2;

@end
