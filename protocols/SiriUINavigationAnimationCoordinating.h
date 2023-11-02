
@protocol SiriUINavigationAnimationCoordinating <NSObject>

@optional

- (void)configureWithNavigationController:(UINavigationController *)arg1;
- (void)coordinateAdditionalTransitionsWithTransitionCoordinator:(id <UIViewControllerTransitionCoordinator>)arg1;
- (long long)operation;
- (void)setOperation:(long long)arg1;

@end
