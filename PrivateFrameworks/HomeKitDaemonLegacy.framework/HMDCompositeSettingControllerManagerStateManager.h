
@interface HMDCompositeSettingControllerManagerStateManager : NSObject <HMDCompositeSettingControllerManagerStateManager, HMFLogging> {
    <HMDCompositeSettingControllerManagerStateManagerDataSource> * _dataSource;
    <HMDCompositeSettingControllerManagerStateTransitionDelegate> * _delegate;
    NSMutableDictionary * _homeUUIDToState;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    unsigned long long  _notificationOptions;
    <HMDCompositeSettingNotificationRegistrationProviding> * _notificationRegistrationProvider;
    NSUUID * _uuid;
}

@property (readonly) <HMDCompositeSettingControllerManagerStateManagerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) <HMDCompositeSettingControllerManagerStateTransitionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long notificationOptions;
@property (readonly) <HMDCompositeSettingNotificationRegistrationProviding> *notificationRegistrationProvider;
@property (readonly) Class superclass;
@property (readonly, copy) NSUUID *uuid;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_computeResidentStateChangeForHome:(id)arg1;
- (void)_createStateForHomeUUIDIfNotExist:(id)arg1;
- (void)_handleAccessoryLanguagesChangedNotification:(id)arg1;
- (void)_handleAccessoryRemovedNotification:(id)arg1;
- (void)_handleCompositeSettingsControllerConfiguredNotification:(id)arg1;
- (void)_handleHomeAdded:(id)arg1;
- (void)_handleResidentDeviceUpdated:(id)arg1;
- (void)_handleSiriEndpointProfileCreation:(id)arg1;
- (void)_handleSiriEndpointProfileSettingsUpdate:(id)arg1;
- (void)_registerForNotifications;
- (void)_unregisterForNotifications;
- (id)dataSource;
- (id)delegate;
- (id)initWithDataSource:(id)arg1 notificationRegistrationProvider:(id)arg2 subscribeWithOptions:(unsigned long long)arg3 delegate:(id)arg4 uuid:(id)arg5;
- (id)logIdentifier;
- (unsigned long long)notificationOptions;
- (id)notificationRegistrationProvider;
- (long long)stateForHomeUUID:(id)arg1;
- (id)uuid;

@end
