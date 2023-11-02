
@interface GKDashboardPresentationController : NSObject <UIViewControllerAnimatedTransitioning, UIViewControllerTransitioningDelegate> {
    bool  _presenting;
    double  _transitionDuration;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool presenting;
@property (readonly) Class superclass;
@property (nonatomic) double transitionDuration;

+ (void)presentViewController:(id)arg1 presentingViewController:(id)arg2 animated:(bool)arg3;

- (void)animateTransition:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)animationEnded:(bool)arg1;
- (id)init;
- (bool)presenting;
- (void)setPresenting:(bool)arg1;
- (void)setTransitionDuration:(double)arg1;
- (double)transitionDuration;
- (double)transitionDuration:(id)arg1;

@end
