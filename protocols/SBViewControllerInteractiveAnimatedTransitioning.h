
@protocol SBViewControllerInteractiveAnimatedTransitioning <SBViewControllerReversibleAnimatedTransitioning, SBViewControllerPercentCompletionReporting>

@required

- (void)finishInteractiveTransition:(id <SBViewControllerContextTransitioning>)arg1 withCompletionSpeed:(double)arg2 completionCurve:(long long)arg3;
- (void)updateTransition:(id <SBViewControllerContextTransitioning>)arg1 withPercentComplete:(double)arg2;

@end
