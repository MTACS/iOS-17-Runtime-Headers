
@protocol HMDSecureRemoteMessageTransportDataSource <NSObject>

@required

- (HMDAccountRegistry *)accountRegistry;
- (HMDRemoteDeviceMonitor *)deviceMonitor;
- (HMDModernTransportDeviceReachabilityObserver *)reachabilityObserver;
- (<HMDSecureRemoteSession> *)secureSessionWithDevice:(HMDDevice *)arg1;
- (NSArray *)transports;

@end
