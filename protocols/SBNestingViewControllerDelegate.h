
@protocol SBNestingViewControllerDelegate <SBNestingViewControllerTransitionObserver>

@optional

- (<UIViewControllerAnimatedTransitioning> *)nestingViewController:(SBNestingViewController *)arg1 animationControllerForOperation:(long long)arg2 onViewController:(SBNestingViewController *)arg3 animated:(bool)arg4;
- (<UIViewControllerInteractiveTransitioning> *)nestingViewController:(SBNestingViewController *)arg1 interactionControllerForAnimationController:(id <UIViewControllerAnimatedTransitioning>)arg2;

@end
