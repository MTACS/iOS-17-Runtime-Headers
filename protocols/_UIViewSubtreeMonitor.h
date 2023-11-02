
@protocol _UIViewSubtreeMonitor <NSObject>

@required

- (void)_monitoredView:(UIView *)arg1 didMoveFromSuperview:(UIView *)arg2 toSuperview:(UIView *)arg3;
- (void)_monitoredView:(UIView *)arg1 willMoveFromSuperview:(UIView *)arg2 toSuperview:(UIView *)arg3;
- (bool)_monitorsView:(UIView *)arg1;

@end
