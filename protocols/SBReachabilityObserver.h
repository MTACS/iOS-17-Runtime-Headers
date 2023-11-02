
@protocol SBReachabilityObserver <NSObject>

@optional

- (void)handleDidEndReachabilityAnimation;
- (void)handleReachabilityModeActivated;
- (void)handleReachabilityModeDeactivated;
- (void)handleReachabilityYOffsetDidChange;
- (void)handleWillBeginReachabilityAnimation;

@end
