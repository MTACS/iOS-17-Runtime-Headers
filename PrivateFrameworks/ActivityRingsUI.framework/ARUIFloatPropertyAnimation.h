
@interface ARUIFloatPropertyAnimation : ARUIAnimatableObjectPropertyAnimation {
    float  _currentValue;
    float  _endValue;
    float  _startValue;
}

@property (nonatomic, readonly) float currentValue;
@property (nonatomic, readonly) float endValue;
@property (nonatomic, readonly) float startValue;

+ (id)animationWithEndingFloatValue:(float)arg1 duration:(double)arg2 customTimingFunction:(id /* block */)arg3 completion:(id /* block */)arg4;
+ (id)animationWithEndingFloatValue:(float)arg1 duration:(double)arg2 timingFunction:(id)arg3 completion:(id /* block */)arg4;

- (id)_currentValue;
- (id)_endValue;
- (void)_setCurrentValue:(id)arg1;
- (void)_setEndValue:(id)arg1;
- (void)_setStartValue:(id)arg1;
- (id)_startValue;
- (void)_updateWithProgress:(float)arg1;
- (float)currentValue;
- (float)endValue;
- (float)startValue;
- (id)valueByAddingCurrentValueToValue:(id)arg1;

@end
