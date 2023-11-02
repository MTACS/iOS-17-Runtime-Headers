
@protocol SBNestingViewControllerTransitionObserver <NSObject>

@optional

- (void)nestingViewController:(SBNestingViewController *)arg1 willPerformOperation:(long long)arg2 onViewController:(SBNestingViewController *)arg3 withTransitionCoordinator:(id <SBViewControllerTransitionCoordinator>)arg4;

@end
