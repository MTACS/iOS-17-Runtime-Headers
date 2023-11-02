
@interface HMDCompositeSettingsControllerManager : NSObject <HMDAccessorySettingsLocalMessageHandlerDelegate, HMDCompositeSettingControllerManagerStateManagerDataSource, HMDCompositeSettingControllerManagerStateTransitionDelegate, HMDCompositeSettingsControllerDelegate, HMFLogging> {
    id /* block */  _compositeSettingsControllerFactory;
    <HMDCompositeSettingsControllerManagerDataSource> * _dataSource;
    <HMMLogEventSubmitting> * _logEventDispatcher;
    HMDCompositeSettingsOwnerToDatabaseAdapterRegistry * _registry;
    <HMDCompositeSettingControllerManagerStateManager> * _stateManager;
    NSMapTable * _stringToCompositeSettingsController;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly) <HMDCompositeSettingsControllerManagerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSArray *homes;
@property (readonly) <HMMLogEventSubmitting> *logEventDispatcher;
@property (readonly) <HMDCompositeSettingControllerManagerStateManager> *stateManager;
@property (readonly, copy) NSMapTable *stringToCompositeSettingsController;
@property (readonly) Class superclass;

+ (id)immutableSettingFromFetchReturn:(id)arg1;
+ (id)logCategory;
+ (id)zoneNameForHomeUUID:(id)arg1;

- (void).cxx_destruct;
- (void)_createSettingControllerForAccessory:(id)arg1 homeUUID:(id)arg2;
- (void)accessorySettingsLocalMessageHandler:(id)arg1 didReceiveFetchRequestMessage:(id)arg2 withHomeUUID:(id)arg3 accessoryUUID:(id)arg4 keyPaths:(id)arg5 callerVersion:(id)arg6 callerPrivilege:(unsigned long long)arg7 siriAvailableLanguagesSetting:(id)arg8;
- (void)accessorySettingsLocalMessageHandler:(id)arg1 didReceiveUpdateRequestMessage:(id)arg2 withHomeUUID:(id)arg3 accessoryUUID:(id)arg4 keyPath:(id)arg5 value:(id)arg6 callerVersion:(id)arg7;
- (void)applyOnboardingSelections:(id)arg1 accessoryUUID:(id)arg2 homeUUID:(id)arg3 completion:(id /* block */)arg4;
- (id)dataSource;
- (void)didConfigureCompositeSettingsControllerForHomeUUID:(id)arg1 accessoryUUID:(id)arg2;
- (void)didUpdateCurrentRunState:(long long)arg1 updatedState:(long long)arg2 forHome:(id)arg3;
- (void)didUpdateSiriEndpointSettingForHomeUUID:(id)arg1 accessoryUUID:(id)arg2;
- (id)dumpStateInfo;
- (id)homes;
- (id)initWithDataSource:(id)arg1;
- (id)initWithDataSource:(id)arg1 registry:(id)arg2 controllerFactory:(id /* block */)arg3 stateManagerFactory:(id /* block */)arg4 logEventDispatcher:(id)arg5;
- (void)languagesDidChangeForHome:(id)arg1;
- (void)localFetchSettingsForUUID:(id)arg1 homeUUID:(id)arg2 withKeyPaths:(id)arg3 callerVersion:(id)arg4 callerPrivilege:(unsigned long long)arg5 completion:(id /* block */)arg6;
- (void)localFetchSettingsForUUID:(id)arg1 homeUUID:(id)arg2 withKeyPaths:(id)arg3 completion:(id /* block */)arg4;
- (void)localUpdateSettingForUUID:(id)arg1 homeUUID:(id)arg2 keyPath:(id)arg3 value:(id)arg4 callerVersion:(id)arg5 completion:(id /* block */)arg6;
- (void)localUpdateSettingForUUID:(id)arg1 homeUUID:(id)arg2 keyPath:(id)arg3 value:(id)arg4 completion:(id /* block */)arg5;
- (id)logEventDispatcher;
- (void)removeHomeZone:(id)arg1;
- (void)settingsController:(id)arg1 didUpdateSettings:(id)arg2 metadata:(id)arg3;
- (id)stateManager;
- (id)stringToCompositeSettingsController;

@end
