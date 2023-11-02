
@interface DNDSModeConfigurationManager : NSObject <DNDSKeybagStateObserver, DNDSModeConfigurationProviding, DNDSModeConfigurationsStoreDelegate, DNDSSysdiagnoseDataProvider> {
    <DNDSModeConfigurationsStoring> * _backingStore;
    <DNDSModeConfigurationManagerDelegate> * _delegate;
    <DNDSKeybagStateProviding> * _keybag;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <DNDSModeConfigurationManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *sysdiagnoseDataIdentifier;

- (void).cxx_destruct;
- (void)_fixupConfigurationsIfNeeded;
- (id)_inheritFromDefaultModeConfiguration:(id)arg1;
- (void)_notifyChangeOfModeConfigurationFrom:(id)arg1 to:(id)arg2;
- (id)_prepareModeConfigurationForStorage:(id)arg1 withError:(out id*)arg2;
- (id)_readModeConfigurationsReturningError:(id*)arg1;
- (id)_removedModeConfigurationRecordForModeRecord:(id)arg1;
- (unsigned long long)_saveModeConfiguration:(id)arg1 writeSecurePartition:(bool)arg2 error:(id*)arg3;
- (id)_sysdiagnoseDataShouldRedact:(bool)arg1;
- (unsigned long long)_writeModeConfigurationsRecord:(id)arg1 writeSecurePartition:(bool)arg2 error:(id*)arg3;
- (id)availableModesFilteringPlaceholders:(bool)arg1 returningError:(id*)arg2;
- (id)backingStore:(id)arg1 migrateDictionaryRepresentation:(id)arg2 fromVersionNumber:(unsigned long long)arg3 toVersionNumber:(unsigned long long)arg4;
- (void)dealloc;
- (id)delegate;
- (unsigned long long)exceptionForApplication:(id)arg1 thread:(id)arg2 forModeIdentifier:(id)arg3;
- (unsigned long long)exceptionForApplicationIdentifier:(id)arg1 thread:(id)arg2 forModeIdentifier:(id)arg3;
- (unsigned long long)exceptionForContactHandle:(id)arg1 forModeIdentifier:(id)arg2;
- (id)initWithBackingStore:(id)arg1 keybag:(id)arg2;
- (void)keybagDidUnlockForTheFirstTime:(id)arg1;
- (id)modeConfigurationForModeIdentifier:(id)arg1 withError:(id*)arg2;
- (void)modeConfigurationStore:(id)arg1 didUpdateAvailableModes:(id)arg2;
- (id)modeConfigurationsWithError:(id*)arg1;
- (id)relevantApplicationIdentifiers;
- (id)relevantContacts;
- (bool)removeModeConfigurationForModeIdentifier:(id)arg1 deletePlaceholder:(bool)arg2 withError:(id*)arg3;
- (bool)removeModeConfigurationForModeIdentifier:(id)arg1 withError:(id*)arg2;
- (void)setDelegate:(id)arg1;
- (bool)setModeConfiguration:(id)arg1 withError:(id*)arg2;
- (id)sysdiagnoseDataForDate:(id)arg1 redacted:(bool)arg2;
- (id)sysdiagnoseDataIdentifier;

@end
