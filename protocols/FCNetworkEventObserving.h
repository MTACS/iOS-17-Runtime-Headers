
@protocol FCNetworkEventObserving

@required

- (void)networkEventMonitor:(FCNetworkBehaviorMonitor *)arg1 loggedEvent:(NTPBNetworkEvent *)arg2 inSession:(NTPBNetworkSession *)arg3;

@end
