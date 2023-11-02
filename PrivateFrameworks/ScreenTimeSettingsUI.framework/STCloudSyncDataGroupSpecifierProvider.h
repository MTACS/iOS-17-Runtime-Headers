
@interface STCloudSyncDataGroupSpecifierProvider : STRootGroupSpecifierProvider <MCProfileConnectionObserver> {
    PSSpecifier * _toggleCloudSyncDataSpecifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PSSpecifier *toggleCloudSyncDataSpecifier;

- (void).cxx_destruct;
- (void)_updateEnabledValue;
- (void)changeCloudSyncData:(bool)arg1;
- (id)cloudSyncData:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)performHSA2RepairIfNeeded:(id /* block */)arg1;
- (void)presentHSA2RepairUI:(id /* block */)arg1;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)setCloudSyncData:(id)arg1 specifier:(id)arg2;
- (void)setCoordinator:(id)arg1;
- (void)setScreenTimeSyncing:(bool)arg1;
- (id)toggleCloudSyncDataSpecifier;

@end
