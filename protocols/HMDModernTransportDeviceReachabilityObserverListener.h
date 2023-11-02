
@protocol HMDModernTransportDeviceReachabilityObserverListener <NSObject>

@required

- (void)modernTransportDeviceReachabilityObserverDidUpdate:(HMDDeviceAddress *)arg1 isReachable:(bool)arg2;

@end
