
@protocol SKScreenTrackingDelegate <NSObject>

@required

- (void)sk_didBecomeOffScreen:(UIView *)arg1;
- (void)sk_didBecomeOnScreen:(UIView *)arg1;

@end
