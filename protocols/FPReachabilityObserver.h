
@protocol FPReachabilityObserver <NSObject>

@required

- (void)reachabilityMonitor:(FPReachabilityMonitor *)arg1 didChangeReachabilityStatusTo:(bool)arg2;

@optional

- (void)reachabilityMonitor:(FPReachabilityMonitor *)arg1 didChangeReachabilityFlagsTo:(unsigned int)arg2;

@end
