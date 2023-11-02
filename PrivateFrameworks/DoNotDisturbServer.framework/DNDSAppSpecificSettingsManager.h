
@interface DNDSAppSpecificSettingsManager : NSObject <DNDSIDSSyncEngineDataSource> {
    DNDSIDSSyncEngine * _idsSyncEngine;
    DNDSCoreDataBackingStore * _store;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) DNDSCoreDataBackingStore *store;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_allAppSpecificSettingsOfType:(Class)arg1;
- (id)_allModeSpecificSettingsOfType:(Class)arg1;
- (void)_allPerModeSettingsMOsOfType:(Class)arg1 processBlock:(id /* block */)arg2;
- (id)_initWithBackingStoreURL:(id)arg1;
- (void)_modesToSave:(id)arg1 modesToDelete:(id)arg2;
- (id)_perModeSettingsMOsOfType:(Class)arg1 modeIdentifier:(id)arg2 processBlock:(id /* block */)arg3;
- (id)appActionWithIdentifier:(id)arg1 forApplicationIdentifier:(id)arg2 modeIdentifier:(id)arg3 error:(id*)arg4;
- (id)appConfigurationPredicateForActionIdentifier:(id)arg1 forApplicationIdentifier:(id)arg2 modeIdentifier:(id)arg3 error:(id*)arg4;
- (id)appConfigurationPredicateForApplicationIdentifier:(id)arg1 modeIdentifier:(id)arg2 error:(id*)arg3;
- (id)appConfigurationTargetContentIdentifierPrefixForActionIdentifier:(id)arg1 forApplicationIdentifier:(id)arg2 modeIdentifier:(id)arg3 error:(id*)arg4;
- (id)appConfigurationTargetContentIdentifierPrefixForApplicationIdentifier:(id)arg1 modeIdentifier:(id)arg2 error:(id*)arg3;
- (id)appSpecificSettingsOfType:(Class)arg1 identifier:(id)arg2 modeIdentifier:(id)arg3 applicationIdentifier:(id)arg4 error:(id*)arg5;
- (id)appSpecificSettingsOfType:(Class)arg1 modeIdentifier:(id)arg2 applicationIdentifier:(id)arg3 error:(id*)arg4;
- (id)appSpecificSettingsOfType:(Class)arg1 modeIdentifier:(id)arg2 error:(id*)arg3;
- (void)idsSyncEngine:(id)arg1 didFetchRecord:(id)arg2;
- (void)idsSyncEngine:(id)arg1 prepareRecordToSave:(inout id)arg2;
- (void)idsSyncEngine:(id)arg1 recordWithIDWasDeleted:(id)arg2;
- (id)init;
- (id)initWithIDSSyncEngine:(id)arg1 backingStoreURL:(id)arg2;
- (id)modeSpecificSettingsOfType:(Class)arg1 identifier:(id)arg2 modeIdentifier:(id)arg3 error:(id*)arg4;
- (id)modeSpecificSettingsOfType:(Class)arg1 modeIdentifier:(id)arg2 error:(id*)arg3;
- (void)purgeRecordsForIDSSyncEngine:(id)arg1;
- (id)recordIDsForIDSSyncEngine:(id)arg1;
- (bool)removeAppSpecificSettingsForApplicationIdentifier:(id)arg1 error:(id*)arg2;
- (bool)removeModeSpecificSettingsForModeIdentifier:(id)arg1 error:(id*)arg2;
- (id)removeModeSpecificSettingsForModeIdentifiersNotInModeIdentifiers:(id)arg1 error:(id*)arg2;
- (bool)setAppSpecificSettings:(id)arg1 identifier:(id)arg2 type:(Class)arg3 applicationIdentifier:(id)arg4 modeIdentifier:(id)arg5 error:(id*)arg6;
- (bool)setModeSpecificSettings:(id)arg1 identifier:(id)arg2 type:(Class)arg3 modeIdentifier:(id)arg4 error:(id*)arg5;
- (id)store;
- (id)systemActionWithIdentifier:(id)arg1 modeIdentifier:(id)arg2 error:(id*)arg3;

@end
