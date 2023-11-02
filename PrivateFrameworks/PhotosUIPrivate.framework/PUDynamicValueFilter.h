
@interface PUDynamicValueFilter : PUValueFilter {
    double  _currentTime;
    double  _targetValue;
}

@property (nonatomic) double currentTime;
@property (nonatomic) double targetValue;

- (void)_update;
- (double)currentTime;
- (id)init;
- (double)outputValue;
- (double)outputValueChangeRate;
- (void)setCurrentTime:(double)arg1;
- (void)setInputValue:(double)arg1;
- (void)setTargetValue:(double)arg1;
- (double)targetValue;
- (double)updatedValue:(double)arg1 withTargetValue:(double)arg2 timeInterval:(double)arg3;

@end
