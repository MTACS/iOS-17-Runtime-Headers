
@protocol SBHMultiplexingViewControllerObserver <NSObject>

@required

- (void)multiplexingViewControllerDidActivate:(SBHMultiplexingViewController *)arg1;

@optional

- (void)multiplexingViewControllerWillDeactivate:(SBHMultiplexingViewController *)arg1;

@end
