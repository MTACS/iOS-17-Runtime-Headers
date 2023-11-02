
@protocol _CRKCardViewControllerTransitionAnimatorDelegate <NSObject>

@required

- (void)transitionAnimator:(_CRKCardViewControllerTransitionAnimator *)arg1 willTransitionFromCardViewController:(UIViewController<CRKCardViewControlling> *)arg2 toCardViewController:(UIViewController<CRKCardViewControlling> *)arg3 withAnimationCoordinator:(id <CRKAnimationCoordinating>)arg4;

@end
