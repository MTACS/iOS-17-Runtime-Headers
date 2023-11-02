
@interface HMDPrimaryResidentCapabilitiesAggregator : NSObject <HMEEventConsumer, HMFLogging> {
    NSMutableSet * _accessories;
    <HMDPrimaryResidentCapabilitiesAggregatorDataSource> * _dataSource;
    <HMDPrimaryResidentCapabilitiesAggregatorDelegate> * _delegate;
    NSUUID * _homeUUID;
    bool  _isPrimaryResident;
    NSNotificationCenter * _notificationCenter;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)accessoryCapabilitiesForAccessory:(id)arg1 ifDifferentFrom:(id)arg2;
- (void)didAddAccessory:(id)arg1;
- (void)didReceiveCachedEvent:(id)arg1 topic:(id)arg2 source:(id)arg3;
- (void)didReceiveEvent:(id)arg1 topic:(id)arg2;
- (void)didRemoveAccessory:(id)arg1;
- (void)handlePrimaryResidentIsCurrentDeviceChangeNotification:(id)arg1;
- (id)initWithDataSource:(id)arg1 delegate:(id)arg2 queue:(id)arg3 notificationCenter:(id)arg4 homeUUID:(id)arg5 accessories:(id)arg6;
- (id)logIdentifier;
- (id)publicPairingIdentityForAccessory:(id)arg1 ifDifferentFrom:(id)arg2;
- (id)residentCapabilitiesForAccessory:(id)arg1 ifDifferentFrom:(id)arg2;
- (void)startIfPrimaryResident;

@end
