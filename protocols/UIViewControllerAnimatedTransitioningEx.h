
@protocol UIViewControllerAnimatedTransitioningEx <UIViewControllerAnimatedTransitioning>

@required

- (bool)interactionAborted;
- (UIPercentDrivenInteractiveTransition *)interactionController;
- (long long)operation;
- (void)setInteractionAborted:(bool)arg1;
- (void)setInteractionController:(UIPercentDrivenInteractiveTransition *)arg1;
- (void)setOperation:(long long)arg1;

@optional

- (UIWindow *)window;

@end
