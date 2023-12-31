
@protocol OFViewControllerInteractiveTransitioning <NSObject>

@required

- (void)endInteractiveTransitionWithContext:(id <OFViewControllerTransitioningContext>)arg1 transitionCompleted:(bool)arg2;
- (void)makeCurrentTransitionInteractiveWithContext:(id <OFViewControllerTransitioningContext>)arg1 andProgress:(double)arg2;
- (void)startInteractiveTransitionWithContext:(id <OFViewControllerTransitioningContext>)arg1;
- (bool)tracksWithFinger;
- (void)updateInteractiveTransitionWithContext:(id <OFViewControllerTransitioningContext>)arg1 andProgress:(double)arg2;

@end
