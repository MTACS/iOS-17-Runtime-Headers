
@protocol SBUIAnimationControllerObserver <BSTransactionObserver>

@optional

- (void)animationController:(SBUIAnimationController *)arg1 willBeginAnimation:(bool)arg2;
- (void)animationControllerDidFinishAnimation:(SBUIAnimationController *)arg1;
- (void)animationControllerDidRevealApplication:(SBUIAnimationController *)arg1;

@end
