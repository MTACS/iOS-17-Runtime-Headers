
@protocol HMDPrimaryResidentDiscoveryManagerDataSource <NSObject>

@required

- (HMFExponentialBackoffTimer *)createBackoffTimer;
- (<HMDPrimaryResidentDiscoveryOperation> *)createPrimaryResidentDiscoveryOperationWithContext:(id <HMDResidentDeviceManagerContext>)arg1;
- (NSNotificationCenter *)notificationCenter;
- (HMDRemoteDeviceMonitor *)remoteDeviceMonitorFromContext:(id <HMDResidentDeviceManagerContext>)arg1;
- (HMFFuture *)transportStartFutureFromContext:(id <HMDResidentDeviceManagerContext>)arg1;

@end
