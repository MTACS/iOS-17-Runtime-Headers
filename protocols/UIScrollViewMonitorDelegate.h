
@protocol UIScrollViewMonitorDelegate

@required

- (void)scrollViewMonitorDidStartMonitoring:(UIScrollView *)arg1;
- (void)scrollViewMonitorDidStopMonitoring:(UIScrollView *)arg1;
- (void)scrollViewMonitorScrollDid:(UIScrollView *)arg1 addView:(UIView *)arg2 removeView:(UIView *)arg3;
- (void)scrollViewMonitorScrollDidScrolled:(UIScrollView *)arg1;

@end
