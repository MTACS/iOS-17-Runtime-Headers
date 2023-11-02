
@interface HPSAccessorySettingService : NSObject {
    <HPSAccessorySettingServiceDelegate> * _delegate;
    bool  _migrationToHH2Complete;
    int  _notifyRegisterToken;
    <HPSAccessorySettingServiceConnectionProvider> * _provider;
    NSXPCConnection * _xpcConnection;
}

@property (nonatomic) <HPSAccessorySettingServiceDelegate> *delegate;
@property (nonatomic, readonly) NSDictionary *heldAssertions;
@property (nonatomic, readonly) NSDictionary *keyPaths;
@property (getter=isMigrationToHH2Complete, nonatomic) bool migrationToHH2Complete;
@property (nonatomic) int notifyRegisterToken;
@property (getter=hasOptedToHH2, nonatomic, readonly) bool optedToHH2;
@property (nonatomic, readonly) <HPSAccessorySettingServiceConnectionProvider> *provider;
@property (nonatomic, retain) NSXPCConnection *xpcConnection;

- (void).cxx_destruct;
- (void)_handleConnectionInterrupted;
- (void)aggregateAllSettingsInScope:(unsigned long long)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)aggregateAllSettingsWithCompletionHandler:(id /* block */)arg1;
- (void)dealloc;
- (id)delegate;
- (void)fetchAllSettingsWithCompletionHandler:(id /* block */)arg1;
- (void)getAllSettingsWithCompletionHandler:(id /* block */)arg1;
- (void)getKeyPathsAvailabilityWithCompletionHandler:(id /* block */)arg1;
- (void)getKeyPathsWithCompletionHandler:(id /* block */)arg1;
- (bool)hasOptedToHH2;
- (id)heldAssertions;
- (void)heldAssertionsWithCompletionHandler:(id /* block */)arg1;
- (id)init;
- (id)initWithConnectionProvider:(id)arg1 delegate:(id)arg2;
- (id)initWithDelegate:(id)arg1;
- (bool)isMigrationToHH2Complete;
- (void)isSettingAvailableForKeyPath:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)keyPaths;
- (id)keyPathsAvailability;
- (void)mergeSettingsInScope:(unsigned long long)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)notifyDidUpdateSetting:(id)arg1 forKeyPath:(id)arg2;
- (int)notifyRegisterToken;
- (void)optedToHH2WithCompletionHandler:(id /* block */)arg1;
- (void)overrideOptedToHH2State:(bool)arg1;
- (id)provider;
- (void)reconcileSettingsInScope:(unsigned long long)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;
- (void)setMigrationToHH2Complete:(bool)arg1;
- (void)setNotifyRegisterToken:(int)arg1;
- (void)setXpcConnection:(id)arg1;
- (id)settingForKeyPath:(id)arg1;
- (void)settingForKeyPath:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)settingsForKeyPaths:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)startXPCConnection;
- (id)updateSettingForKeyPath:(id)arg1 setting:(id)arg2;
- (void)updateSettingForKeyPath:(id)arg1 setting:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)updateSettingWithoutSynchronizationForKeyPath:(id)arg1 setting:(id)arg2;
- (void)updateSettingWithoutSynchronizationForKeyPath:(id)arg1 setting:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)xpcConnection;

@end
