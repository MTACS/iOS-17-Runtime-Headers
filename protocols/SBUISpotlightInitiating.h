
@protocol SBUISpotlightInitiating <NSObject>

@required

- (void)cleanupAfterSpotlightDismissal;
- (void)resetForSpotlightDismissalAnimated:(bool)arg1;
- (void)setDisplayLayoutElementActive:(bool)arg1;
- (void)setTransitionContext:(SBViewControllerTransitionContext *)arg1;
- (UIViewController *)spotlightHeaderAcquiringViewController;
- (SBViewControllerTransitionContext *)transitionContext;

@end
