
@interface HMDPrimaryResidentDiscoveryManagerDefaultDataSource : NSObject <HMDPrimaryResidentDiscoveryManagerDataSource> {
    NSNotificationCenter * _notificationCenter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)createBackoffTimer;
- (id)createPrimaryResidentDiscoveryOperationWithContext:(id)arg1;
- (id)init;
- (id)notificationCenter;
- (id)remoteDeviceMonitorFromContext:(id)arg1;
- (id)transportStartFutureFromContext:(id)arg1;

@end
