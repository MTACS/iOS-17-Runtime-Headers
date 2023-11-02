
@interface DNDSSettingsManager : NSObject <DNDSSyncSettingsProviderDelegate, DNDSSysdiagnoseDataProvider> {
    <DNDSBackingStore> * _backingStore;
    CNContactStore * _contactStore;
    <DNDSSettingsManagerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
    DNDSSyncSettingsProvider * _syncSettingsProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <DNDSSettingsManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *sysdiagnoseDataIdentifier;

- (void).cxx_destruct;
- (id)_readSettingsReturningError:(id*)arg1;
- (unsigned long long)_saveBehaviorSettings:(id)arg1 scheduleSettings:(id)arg2 error:(id*)arg3;
- (unsigned long long)_saveConfiguration:(id)arg1 forModeIdentifier:(id)arg2 error:(id*)arg3;
- (unsigned long long)_writeSettingsRecord:(id)arg1 error:(id*)arg2;
- (id)behaviorSettingsWithError:(id*)arg1;
- (void)dealloc;
- (id)delegate;
- (id)fallbackConfiguration;
- (id)initWithBackingStore:(id)arg1 contactStore:(id)arg2;
- (void)pairedDeviceDidChange;
- (id)phoneCallBypassSettingsWithError:(id*)arg1;
- (id)scheduleSettingsWithError:(id*)arg1;
- (bool)setBehaviorSettings:(id)arg1 withError:(id*)arg2;
- (void)setDelegate:(id)arg1;
- (void)setPairSyncEnabled:(bool)arg1;
- (bool)setScheduleSettings:(id)arg1 withError:(id*)arg2;
- (void)syncSettingsProvider:(id)arg1 didReceiveUpdatedSyncSettings:(id)arg2;
- (id)syncSettingsWithError:(id*)arg1;
- (id)sysdiagnoseDataForDate:(id)arg1 redacted:(bool)arg2;
- (id)sysdiagnoseDataIdentifier;

@end
