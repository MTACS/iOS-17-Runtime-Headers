
@protocol ANAnnounceReachabilityManagerDelegate <NSObject>

@required

- (void)reachabilityLevel:(unsigned long long)arg1 didChangeForHome:(HMHome *)arg2;
- (void)reachabilityLevel:(unsigned long long)arg1 didChangeForRoom:(HMRoom *)arg2 inHome:(HMHome *)arg3;

@end
