
@interface HMDSiriEndpointSettingsSyncManager : HMFObject <HMDCompositeSettingsSiriEndpointProfileBridge, HMEEventConsumer, HMFLogging> {
    <HMDSiriEndpointSettingsSyncManagerDataSource> * _dataSource;
    NSMutableSet * _homeUUIDsManagedByCurrentDevice;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSNotificationCenter * _notificationCenter;
    <HMESubscriptionProviding> * _subscriptionProvider;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly) <HMDSiriEndpointSettingsSyncManagerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSMutableSet *homeUUIDsManagedByCurrentDevice;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly) <HMESubscriptionProviding> *subscriptionProvider;
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;
+ (id)siriEndPointHomeKitBackedKeyPaths;

- (void).cxx_destruct;
- (void)_beginManagingAccessory:(id)arg1 forHome:(id)arg2;
- (void)_beginManagingHome:(id)arg1;
- (void)_matchingHomeforUUID:(id)arg1 accessoryUUID:(id)arg2 home:(id*)arg3 accessory:(id*)arg4;
- (void)_stopManagingAccessory:(id)arg1 forHome:(id)arg2;
- (void)_stopManagingHome:(id)arg1;
- (void)_synchronizeSettingsForAccessoryUUID:(id)arg1 homeUUID:(id)arg2;
- (void)_updateManagedHomes;
- (void)_writeSetting:(id)arg1 toAccessory:(id)arg2 forKeyPath:(id)arg3;
- (void)_writeSettingValue:(id)arg1 toAccessory:(id)arg2 forKeyPath:(id)arg3;
- (void)_writeSettingValue:(id)arg1 toAccessory:(id)arg2 forKeyPath:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)configure;
- (id)dataSource;
- (void)didReceiveEvent:(id)arg1 topic:(id)arg2;
- (void)handleAccessoryIsReachableNotification:(id)arg1;
- (void)handleCompositeSettingsControllerDidConfigureNotification:(id)arg1;
- (void)handleHAPMediaProfileAddedNotification:(id)arg1;
- (void)handleHomeAddedNotification:(id)arg1;
- (void)handleHomeRemovedNotification:(id)arg1;
- (void)handlePrimaryResidentUpdateNotification:(id)arg1;
- (void)handleSiriEndPointAddedNotification:(id)arg1;
- (id)homeUUIDsManagedByCurrentDevice;
- (id)initWithDataSource:(id)arg1 subscriptionProvider:(id)arg2 notificationCenter:(id)arg3 workQueue:(id)arg4;
- (id)notificationCenter;
- (id)readValueValueForAccessoryUUID:(id)arg1 homeUUID:(id)arg2 forKeyPath:(id)arg3;
- (void)registerForAccessoryNotificationsOnHapAccessory:(id)arg1;
- (long long)siriEndpointCertificationReasonForAccessoryUUID:(id)arg1 homeUUID:(id)arg2 error:(id*)arg3;
- (id)subscriptionProvider;
- (void)unregisterFromAccessoryNotificationsOnHapAccessory:(id)arg1;
- (id)workQueue;
- (void)writeSettingValue:(id)arg1 accessoryUUID:(id)arg2 homeUUID:(id)arg3 forKeyPath:(id)arg4 completionHandler:(id /* block */)arg5;

@end
