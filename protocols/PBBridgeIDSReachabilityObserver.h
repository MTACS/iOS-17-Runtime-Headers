
@protocol PBBridgeIDSReachabilityObserver <NSObject>

@required

- (void)reachability:(PBBridgeIDSReachability *)arg1 device:(NRDevice *)arg2 connectionStatus:(unsigned long long)arg3;

@end
