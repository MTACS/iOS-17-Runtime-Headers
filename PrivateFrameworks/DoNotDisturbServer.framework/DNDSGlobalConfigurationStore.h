
@interface DNDSGlobalConfigurationStore : NSObject <DNDSBackingStoreDelegate, DNDSGlobalConfigurationStoring, DNDSIDSSyncEngineDataSource, DNDSSyncEngineDataSource> {
    <DNDSBackingStore> * _backingStore;
    DNDSGlobalConfiguration * _configuration;
    <DNDSGlobalConfigurationStoreDelegate> * _delegate;
    DNDSIDSSyncEngine * _idsSyncEngine;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    DNDSSyncEngine * _syncEngine;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <DNDSGlobalConfigurationStoreDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_createConfigurationFromCKRecord:(id)arg1;
- (id)_createConfigurationFromDNDSIDSRecord:(id)arg1;
- (id)_lock_existingConfiguration;
- (id)_lock_mutableExistingConfigurationInStore:(id)arg1;
- (void)_lock_prepareCKRecordToSave:(id)arg1;
- (void)_lock_prepareDNDSIDSRecordToSave:(id)arg1;
- (void)_lock_purgeData;
- (void)_lock_updateConfigurationWithCKRecord:(id)arg1;
- (void)_lock_updateConfigurationWithDNDSIDSRecord:(id)arg1;
- (unsigned long long)_lock_writeRecord:(id)arg1 writePartition:(bool)arg2 error:(id*)arg3;
- (void)_notifyDelegateOfConfigurationChange;
- (void)_populateCKRecord:(id)arg1 withGlobalConfiguration:(id)arg2;
- (void)_populateDNDSIDSRecord:(id)arg1 withGlobalConfiguration:(id)arg2;
- (void)_purgeData;
- (id)backingStore:(id)arg1 migrateDictionaryRepresentation:(id)arg2 fromVersionNumber:(unsigned long long)arg3 toVersionNumber:(unsigned long long)arg4;
- (id)delegate;
- (void)globalConfigurationSyncManager:(id)arg1 didReceiveUpdatedGlobalConfiguration:(id)arg2;
- (void)idsSyncEngine:(id)arg1 didFetchRecord:(id)arg2;
- (void)idsSyncEngine:(id)arg1 prepareRecordToSave:(inout id)arg2;
- (void)idsSyncEngine:(id)arg1 recordWithIDWasDeleted:(id)arg2;
- (id)initWithBackingStore:(id)arg1 syncEngine:(id)arg2 idsSyncEngine:(id)arg3;
- (void)purgeRecordsForIDSSyncEngine:(id)arg1;
- (void)purgeRecordsForSyncEngine:(id)arg1;
- (id)readRecordWithError:(id*)arg1;
- (id)recordIDsForIDSSyncEngine:(id)arg1;
- (id)recordIDsForSyncEngine:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)syncEngine:(id)arg1 didFetchRecord:(id)arg2;
- (void)syncEngine:(id)arg1 failedToDeleteRecordWithID:(id)arg2 error:(id)arg3;
- (long long)syncEngine:(id)arg1 prepareRecordToSave:(inout id)arg2;
- (id)syncEngine:(id)arg1 recordTypeForRecordID:(id)arg2;
- (void)syncEngine:(id)arg1 recordWithIDWasDeleted:(id)arg2;
- (void)syncEngine:(id)arg1 resolveConflictBetweenClientRecord:(id)arg2 andServerRecord:(id)arg3;
- (long long)syncEngine:(id)arg1 wantsRecord:(id)arg2;
- (void)syncEngine:(id)arg1 zoneWithIDWasDeleted:(id)arg2 removingRecordIDs:(id)arg3;
- (unsigned long long)writeRecord:(id)arg1 error:(id*)arg2;
- (unsigned long long)writeRecord:(id)arg1 writePartition:(bool)arg2 error:(id*)arg3;

@end
