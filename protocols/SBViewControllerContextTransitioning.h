
@protocol SBViewControllerContextTransitioning <UIViewControllerContextTransitioning, SBViewControllerReversibleTransitioning, SBViewControllerPercentCompletionReporting, SBViewControllerTransitionRestartedReporting>

@required

- (bool)initiallyInteractive;
- (bool)isTransitioning;
- (void)restartTransition;
- (bool)supportsCancelling;
- (bool)supportsRestarting;
- (bool)wasPreviousPhaseInteractive;

@end
