
@protocol UIViewControllerInteractiveTransitioning <NSObject>

@required

- (void)startInteractiveTransition:(id <UIViewControllerContextTransitioning>)arg1;

@optional

- (long long)completionCurve;
- (double)completionSpeed;
- (bool)wantsInteractiveStart;

@end
