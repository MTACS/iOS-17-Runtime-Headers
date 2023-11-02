
@protocol CKAnimationTimerObserver <NSObject>

@required

- (bool)animationExplicitlyResumed;
- (void)animationTimerFired:(double)arg1;

@end
