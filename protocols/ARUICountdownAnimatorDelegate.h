
@protocol ARUICountdownAnimatorDelegate <NSObject>

@optional

- (void)countdownAnimator:(ARUICountdownAnimator *)arg1 completedAnimation:(id <ARUICountdownAnimation>)arg2;
- (void)countdownAnimator:(ARUICountdownAnimator *)arg1 performingAnimation:(id <ARUICountdownAnimation>)arg2 withDuration:(double)arg3;
- (void)countdownAnimator:(ARUICountdownAnimator *)arg1 willBeginAnimation:(id <ARUICountdownAnimation>)arg2 afterDelay:(double)arg3;
- (void)countdownAnimatorDidFinishAnimating:(ARUICountdownAnimator *)arg1;
- (void)countdownAnimatorWillBeginAnimating:(ARUICountdownAnimator *)arg1;

@end
