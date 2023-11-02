
@protocol SBHViewControllerTransitionDelegate <NSObject>

@optional

- (<SBHViewControllerTransitionAnimating> *)animatorForTransition:(SBHViewControllerTransition *)arg1;
- (void)prepareTransition:(SBHViewControllerTransition *)arg1;
- (void)transitionDidProgressToEndState:(SBHViewControllerTransition *)arg1;
- (void)transitionDidReturnToBeginningState:(SBHViewControllerTransition *)arg1;
- (void)transitionWillProgressToEndState:(SBHViewControllerTransition *)arg1;
- (void)transitionWillReturnToBeginningState:(SBHViewControllerTransition *)arg1;

@end
