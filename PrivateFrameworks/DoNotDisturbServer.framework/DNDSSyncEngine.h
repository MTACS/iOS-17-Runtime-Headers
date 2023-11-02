
@interface DNDSSyncEngine : NSObject <CKSyncEngineDataSource, DNDSKeybagStateObserver, DNDSSysdiagnoseDataProvider> {
    NSObject<OS_dispatch_source> * _accountUpdateSource;
    bool  _allowSyncEngineCreation;
    CKContainer * _container;
    <DNDSKeybagStateProviding> * _keybag;
    <DNDSSyncEngineLastChanceDataStoring> * _lastChanceStore;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    <DNDSSyncEngineMetadataStoring> * _metadataStore;
    NSMapTable * _sourcesByZoneName;
    struct { 
        bool syncEnabled; 
        bool featureEnabled; 
        bool accountAvailable; 
        bool encryptionAvailable; 
        bool supportedDevice; 
        bool testing; 
    }  _state;
    <DNDSSyncEngineMetadataStoring> * _store;
    <DNDSSyncEngineSynchronizing> * _syncEngine;
    NSObject<OS_dispatch_queue> * _syncEngineQueue;
}

@property (nonatomic, readonly) unsigned long long cloudSyncState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasLocalChanges;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (getter=isSyncAvailable, nonatomic, readonly) bool syncAvailable;
@property (getter=isSyncEnabled, nonatomic, readonly) bool syncEnabled;
@property (getter=isSyncPreferenceEnabled, nonatomic) bool syncPreferenceEnabled;
@property (nonatomic, readonly, copy) NSString *sysdiagnoseDataIdentifier;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_cloudKitAccountChanged:(id)arg1;
- (void)_fetchAccountStateWithCompletionHandler:(id /* block */)arg1;
- (void)_handleAccountFetchWithUpdatedUserRecordID:(id)arg1 updatedAccountStatus:(long long)arg2 updatedEncryptionAvailable:(bool)arg3 updatedSyncEnabled:(bool)arg4;
- (void)_initialSyncForDataSource:(id)arg1 withZoneName:(id)arg2;
- (void)_initialSyncForDataSources;
- (long long)_lock_currentAccountStatus;
- (id)_lock_currentUserRecordID;
- (id)_lock_dataSourceForRecord:(id)arg1;
- (id)_lock_dataSourceForZoneID:(id)arg1;
- (id)_lock_dataSources;
- (void)_lock_destroySyncEngine;
- (bool)_lock_encryptionAvailable;
- (bool)_lock_isSyncAvailable;
- (bool)_lock_isSyncEnabled;
- (bool)_lock_isSyncPreferenceEnabled;
- (void)_lock_purgeData;
- (void)_lock_setCurrentAccountStatus:(long long)arg1;
- (void)_lock_setCurrentUserRecordID:(id)arg1;
- (void)_lock_setEncryptionAvailable:(bool)arg1;
- (id)_lock_syncEngine;
- (void)_migrateOldStoresWithSyncEnabledState:(bool)arg1;
- (void)_purgeDataFromDataSources;
- (void)_retryLastChanceRecords;
- (void)_retryLastChanceRecordsForDataSource:(id)arg1 withZoneName:(id)arg2;
- (void)_syncEngineQueue_updateAccountWithSyncEnabledState:(bool)arg1;
- (void)_updateAccountWithCurrentSyncEnabledState;
- (void)_updateAccountWithSyncEnabledState:(bool)arg1;
- (id)_zoneIDForRecord:(id)arg1;
- (void)addRecordIDsToSave:(id)arg1 recordIDsToDelete:(id)arg2;
- (void)addRecordZonesToSave:(id)arg1 recordZoneIDsToDelete:(id)arg2;
- (unsigned long long)cloudSyncState;
- (void)fetchChanges:(bool)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)handleDeletedRecordID:(id)arg1;
- (void)handleFetchedRecord:(id)arg1;
- (bool)hasLocalChanges;
- (id)initWithMetadataStore:(id)arg1 lastChanceDataStore:(id)arg2 keybag:(id)arg3 syncEnabled:(bool)arg4;
- (id)initWithMetadataStore:(id)arg1 lastChanceDataStore:(id)arg2 syncEngine:(id)arg3 keybag:(id)arg4 syncEnabled:(bool)arg5;
- (bool)isSyncAvailable;
- (bool)isSyncEnabled;
- (bool)isSyncPreferenceEnabled;
- (void)keybagDidUnlockForTheFirstTime:(id)arg1;
- (id)lastChanceRecordForRecordID:(id)arg1;
- (void)pairedDeviceDidChange;
- (void)purgeZoneWithID:(id)arg1;
- (void)removeZoneWithID:(id)arg1;
- (void)sendChangesWithCompletionHandler:(id /* block */)arg1;
- (void)setDataSource:(id)arg1 forZoneName:(id)arg2;
- (void)setSyncPreferenceEnabled:(bool)arg1;
- (void)setTesting:(bool)arg1;
- (void)sync:(bool)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)syncEngine:(id)arg1 didDeleteRecordWithID:(id)arg2;
- (void)syncEngine:(id)arg1 didFetchRecord:(id)arg2;
- (void)syncEngine:(id)arg1 didSaveRecord:(id)arg2;
- (void)syncEngine:(id)arg1 didUpdateMetadata:(id)arg2;
- (void)syncEngine:(id)arg1 failedToDeleteRecordWithID:(id)arg2 error:(id)arg3;
- (void)syncEngine:(id)arg1 failedToSaveRecord:(id)arg2 error:(id)arg3;
- (id)syncEngine:(id)arg1 recordToSaveForRecordID:(id)arg2;
- (void)syncEngine:(id)arg1 recordWithIDWasDeleted:(id)arg2 recordType:(id)arg3;
- (bool)syncEngine:(id)arg1 shouldFetchChangesForZoneID:(id)arg2;
- (void)syncEngine:(id)arg1 zoneWithIDWasDeleted:(id)arg2;
- (void)syncEngine:(id)arg1 zoneWithIDWasPurged:(id)arg2;
- (id)sysdiagnoseDataForDate:(id)arg1 redacted:(bool)arg2;
- (id)sysdiagnoseDataIdentifier;

@end
