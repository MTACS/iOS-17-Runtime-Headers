
@interface HFAccessorySettingManagedConfigurationAdapter : HFAccessorySettingAdapter <HFAccessorySettingAdapterDisplayArbitrating, MCProfileConnectionObserver> {
    bool  _isSettingUp;
    MCProfileConnection * _profileConnectionForSynchronization;
    NSHashTable * _profileObservers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isSettingUp;
@property (nonatomic, readonly) unsigned long long numberOfProfiles;
@property (nonatomic, readonly) MCProfileConnection *profileConnectionForSynchronization;
@property (nonatomic, retain) NSHashTable *profileObservers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_beginMonitoringSettingsKeyPath:(id)arg1;
- (void)_dispatchWasUpdated;
- (id)_installedProfileData;
- (id)_profilesSettingData;
- (void)_rebootForReason:(id)arg1;
- (id)_removeProfileFromProfileManager:(id)arg1;
- (void)_setupDebugHandler;
- (id)_synchronizeHomeKitToManagedConfiguration;
- (id)_synchronizeManagedConfigurationToHomeKit;
- (void)addProfileObserver:(id)arg1;
- (void)dealloc;
- (void)homeKitSettingWasUpdated:(id)arg1 value:(id)arg2;
- (id)initWithHomeKitSettingsVendor:(id)arg1 keyPaths:(id)arg2 mode:(unsigned long long)arg3 updateHandler:(id /* block */)arg4;
- (id)initWithHomeKitSettingsVendor:(id)arg1 keyPaths:(id)arg2 updateHandler:(id /* block */)arg3;
- (id)initWithHomeKitSettingsVendor:(id)arg1 mode:(unsigned long long)arg2;
- (bool)isSettingUp;
- (unsigned long long)numberOfProfiles;
- (void)profileConnectionDidReceiveProfileListChangedNotification:(id)arg1 userInfo:(id)arg2;
- (id)profileConnectionForSynchronization;
- (id)profileObservers;
- (id)profiles;
- (id)profilesSettingFuture;
- (id)removeProfileDataFromHomeKit:(id)arg1;
- (id)removeProfileFromHomeKit:(id)arg1;
- (void)removeProfileObserver:(id)arg1;
- (void)setIsSettingUp:(bool)arg1;
- (void)setProfileObservers:(id)arg1;
- (bool)shouldShowSettingsEntity:(id)arg1;

@end
