
@protocol UIViewAnimating <NSObject>

@required

- (void)finishAnimationAtPosition:(long long)arg1;
- (double)fractionComplete;
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
