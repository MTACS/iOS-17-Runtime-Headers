
@interface TeaUI.ImplicitAnimationGroup : NSObject <UIViewAnimating, UIViewImplicitlyAnimating> {
    void animators;
}

@property (nonatomic) double fractionComplete;
@property (nonatomic) bool reversed;
@property (nonatomic, readonly) bool running;
@property (nonatomic, readonly) long long state;

- (void).cxx_destruct;
- (void)addCompletion:(id /* block */)arg1;
- (void)continueAnimationWithTimingParameters:(id)arg1 durationFactor:(double)arg2;
- (void)finishAnimationAtPosition:(long long)arg1;
- (double)fractionComplete;
- (id)init;
- (bool)isReversed;
- (bool)isRunning;
- (void)pauseAnimation;
- (void)setFractionComplete:(double)arg1;
- (void)setReversed:(bool)arg1;
- (void)startAnimation;
- (void)startAnimationAfterDelay:(double)arg1;
- (long long)state;
- (void)stopAnimation:(bool)arg1;

@end
