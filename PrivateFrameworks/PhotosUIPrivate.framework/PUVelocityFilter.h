
@interface PUVelocityFilter : PUDynamicValueFilter {
    double  __minimumSampleInterval;
    double  __previousVelocityWeight;
    double  _filteredVelocity;
    double  _lastTime;
    double  _lastValue;
    double  _previousVelocity;
    double  _velocity;
}

@property (setter=_setMinimumSampleInterval:, nonatomic) double _minimumSampleInterval;
@property (setter=_setPreviousVelocityWeight:, nonatomic) double _previousVelocityWeight;

+ (id)gestureVelocityFilter;

- (double)_minimumSampleInterval;
- (double)_previousVelocityWeight;
- (void)_setMinimumSampleInterval:(double)arg1;
- (void)_setPreviousVelocityWeight:(double)arg1;
- (id)init;
- (double)outputValue;
- (void)setInputValue:(double)arg1;

@end
