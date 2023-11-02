
@interface ARUIFloatAnimation : NSObject <ARUIRingGroupAnimation> {
    id /* block */  _applier;
    bool  _completed;
    float  _currentValue;
    <ARUIRingGroupAnimationDelegate> * _delegate;
    double  _duration;
    float  _endValue;
    double  _percent;
    float  _startValue;
    CAMediaTimingFunction * _timingFunction;
}

@property (nonatomic, readonly) float currentValue;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ARUIRingGroupAnimationDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) float endValue;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) float startValue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) CAMediaTimingFunction *timingFunction;

+ (id)animationWithDuration:(double)arg1 startValue:(float)arg2 endValue:(float)arg3 timingFunction:(id)arg4 applier:(id /* block */)arg5;

- (void).cxx_destruct;
- (void)completeAnimation;
- (float)currentValue;
- (void)dealloc;
- (id)delegate;
- (double)duration;
- (float)endValue;
- (id)initWithDuration:(double)arg1 startValue:(float)arg2 endValue:(float)arg3 timingFunction:(id)arg4 applier:(id /* block */)arg5;
- (bool)isAnimating;
- (void)setDelegate:(id)arg1;
- (float)startValue;
- (id)timingFunction;
- (void)update:(double)arg1;

@end
