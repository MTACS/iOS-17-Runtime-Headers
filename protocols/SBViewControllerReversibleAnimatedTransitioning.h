
@protocol SBViewControllerReversibleAnimatedTransitioning <SBViewControllerAnimatedTransitioning, SBViewControllerRestartableTransitioning>

@required

- (void)cancelTransition:(id <SBViewControllerContextTransitioning>)arg1 withCompletionSpeed:(double)arg2 completionCurve:(long long)arg3;

@end
