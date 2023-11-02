
@protocol SBViewControllerTransitionContextDelegate <NSObject>

@optional

- (void)transitionDidBegin:(SBViewControllerTransitionContext *)arg1;
- (void)transitionDidFinish:(SBViewControllerTransitionContext *)arg1;
- (void)transitionDidReverse:(SBViewControllerTransitionContext *)arg1;
- (void)transitionWillBegin:(SBViewControllerTransitionContext *)arg1;
- (void)transitionWillFinish:(SBViewControllerTransitionContext *)arg1;
- (void)transitionWillReverse:(SBViewControllerTransitionContext *)arg1;

@end
