
@interface HUPreloadedTransitionController : NSObject <UIViewControllerAnimatedTransitioning> {
    NAFuture * _completionFuture;
}

@property (nonatomic, readonly) NAFuture *completionFuture;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (id)completionFuture;
- (id)init;
- (double)transitionDuration:(id)arg1;

@end
