
@interface ARUIAnimatableObjectPropertyAnimation : NSObject {
    id /* block */  _animationTimingFunction;
    id /* block */  _completionHandler;
    double  _currentAnimationTime;
    double  _duration;
}

@property (setter=_setCurrentValue:, nonatomic, retain) id _currentValue;
@property (setter=_setEndValue:, nonatomic, retain) id _endValue;
@property (setter=_setStartValue:, nonatomic, retain) id _startValue;
@property (nonatomic, readonly) id /* block */ completionHandler;
@property (nonatomic, readonly) double duration;

+ (id)animationWithDuration:(double)arg1 timingFunction:(id /* block */)arg2 completion:(id /* block */)arg3;
+ (id /* block */)linearTimingFunction;
+ (id /* block */)timingFunctionForMediaTimingFunction:(id)arg1;

- (void).cxx_destruct;
- (id)_currentValue;
- (id)_endValue;
- (void)_setCurrentValue:(id)arg1;
- (void)_setEndValue:(id)arg1;
- (void)_setStartValue:(id)arg1;
- (id)_startValue;
- (void)_updateWithProgress:(float)arg1;
- (void)callAndReleaseCompletionHandler;
- (id /* block */)completionHandler;
- (double)duration;
- (bool)isFinishedAnimating;
- (void)update:(double)arg1;
- (id)valueByAddingCurrentValueToValue:(id)arg1;

@end
