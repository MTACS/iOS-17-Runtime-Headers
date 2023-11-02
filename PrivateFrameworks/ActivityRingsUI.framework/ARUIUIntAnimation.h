
@interface ARUIUIntAnimation : NSObject <ARUIRingGroupAnimation> {
    id /* block */  _applier;
    bool  _completed;
    unsigned long long  _currentValue;
    <ARUIRingGroupAnimationDelegate> * _delegate;
    double  _duration;
    unsigned long long  _endValue;
    double  _percent;
    unsigned long long  _startValue;
    CAMediaTimingFunction * _timingFunction;
}

@property (nonatomic, readonly) unsigned long long currentValue;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ARUIRingGroupAnimationDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) unsigned long long endValue;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long startValue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) CAMediaTimingFunction *timingFunction;

+ (id)animationWithDuration:(double)arg1 startValue:(unsigned long long)arg2 endValue:(unsigned long long)arg3 timingFunction:(id)arg4 applier:(id /* block */)arg5;

- (void).cxx_destruct;
- (void)completeAnimation;
- (unsigned long long)currentValue;
- (void)dealloc;
- (id)delegate;
- (double)duration;
- (unsigned long long)endValue;
- (id)initWithDuration:(double)arg1 startValue:(unsigned long long)arg2 endValue:(unsigned long long)arg3 timingFunction:(id)arg4 applier:(id /* block */)arg5;
- (bool)isAnimating;
- (void)setDelegate:(id)arg1;
- (unsigned long long)startValue;
- (id)timingFunction;
- (void)update:(double)arg1;

@end
