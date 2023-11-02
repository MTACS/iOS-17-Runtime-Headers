
@interface HMDSecureRemoteMessageTransportDefaultDataSource : NSObject <HMDSecureRemoteMessageTransportDataSource> {
    HMDAccountRegistry * _accountRegistry;
    HMDRemoteDeviceMonitor * _deviceMonitor;
    HMDModernTransportDeviceReachabilityObserver * _reachabilityObserver;
    NSArray * _transports;
}

@property (nonatomic, readonly) HMDAccountRegistry *accountRegistry;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HMDRemoteDeviceMonitor *deviceMonitor;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMDModernTransportDeviceReachabilityObserver *reachabilityObserver;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *transports;

- (void).cxx_destruct;
- (id)accountRegistry;
- (id)deviceMonitor;
- (id)init;
- (id)reachabilityObserver;
- (id)secureSessionWithDevice:(id)arg1;
- (id)transports;

@end
