
@protocol SBViewControllerTransitionCoordinatorContext <UIViewControllerTransitionCoordinatorContext, SBViewControllerTransitionRestartedReporting>

@required

- (BSUIAnimationFactory *)transitionAnimationFactory;
- (unsigned long long)transitionAnimationOptions;
- (bool)wasPreviousPhaseInteractive;

@end
