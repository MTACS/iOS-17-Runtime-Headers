
@interface ARUIFloat2Animation : NSObject <ARUIRingGroupAnimation> {
    id /* block */  _applier;
    bool  _completed;
    void _currentValue;
    <ARUIRingGroupAnimationDelegate> * _delegate;
    double  _duration;
    void _endValue;
    double  _percent;
    void _startValue;
    CAMediaTimingFunction * _timingFunction;
}

@property (nonatomic, readonly) void currentValue;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ARUIRingGroupAnimationDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) void endValue;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) void startValue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) CAMediaTimingFunction *timingFunction;

+ (id)animationWithDuration:(void *)arg1 startValue:(void *)arg2 endValue:(void *)arg3 timingFunction:(void *)arg4 applier:(void *)arg5; // needs 5 arg types, found 3: double, id, id /* block */

- (void).cxx_destruct;
- (void)completeAnimation;
- (void)currentValue;
- (void)dealloc;
- (id)delegate;
- (double)duration;
- (void)endValue;
- (id)initWithDuration:(void *)arg1 startValue:(void *)arg2 endValue:(void *)arg3 timingFunction:(void *)arg4 applier:(void *)arg5; // needs 5 arg types, found 3: double, id, id /* block */
- (bool)isAnimating;
- (void)setDelegate:(id)arg1;
- (void)startValue;
- (id)timingFunction;
- (void)update:(double)arg1;

@end
