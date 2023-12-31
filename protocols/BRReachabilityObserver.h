
@protocol BRReachabilityObserver <NSObject>

@required

- (void)reachabilityMonitor:(BRReachabilityMonitor *)arg1 didChangeReachabilityStatusTo:(bool)arg2;

@optional

- (void)reachabilityMonitor:(BRReachabilityMonitor *)arg1 didChangeReachabilityFlagsTo:(unsigned int)arg2;

@end
