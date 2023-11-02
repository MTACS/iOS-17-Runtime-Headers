
@interface DNDSModeConfigurationsStore : NSObject <DNDSCachedBackingStoreDelegate, DNDSContactMonitorListener, DNDSIDSSyncEngineDataSource, DNDSModeConfigurationsStoring, DNDSSyncEngineDataSource> {
    <DNDSBackingStore> * _backingStore;
    NSMutableSet * _ckRecordIDsToForceSave;
    NSNumber * _compatibilityVersion;
    NSData * _contactHistoryToken;
    <DNDSContactMonitoring> * _contactMonitor;
    <DNDSModeConfigurationsStoreDelegate> * _delegate;
    NSMutableSet * _idsRecordIDsToForceSave;
    DNDSIDSSyncEngine * _idsSyncEngine;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    DNDSSyncEngine * _syncEngine;
}

@property (nonatomic, retain) NSNumber *compatibilityVersion;
@property (nonatomic, copy) NSData *contactHistoryToken;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <DNDSModeConfigurationsStoreDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSSet *monitoredContacts;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_lock_existingConfigurations;
- (bool)_lock_mergeLocalConfigurationRecord:(id)arg1 withRemoteCKRecord:(id)arg2 deleteModeOnCorruption:(bool)arg3;
- (bool)_lock_mergeLocalConfigurationRecord:(id)arg1 withRemoteConfigurationRecord:(id)arg2 modeIdentifier:(id)arg3 sourceDeviceIdentifier:(id)arg4 sourceFrameworkVersion:(struct { long long x1; long long x2; long long x3; })arg5 sourceIsCloud:(bool)arg6 sourceWantsToForce:(bool)arg7 deleteModeOnCorruption:(bool)arg8;
- (id)_lock_modeConfigurationForCKRecordID:(id)arg1;
- (id)_lock_modeConfigurationForDNDSIDSRecordID:(id)arg1;
- (id)_lock_modeConfigurationForModeIdentifier:(id)arg1;
- (id)_lock_modeIdentifiers;
- (id)_lock_mutableExistingConfigurations;
- (long long)_lock_populateCKRecord:(id)arg1 lastChanceRecord:(id)arg2;
- (bool)_lock_populateDNDSIDSRecord:(id)arg1;
- (void)_lock_purgeData;
- (void)_lock_purgeRecordIDs:(id)arg1;
- (id)_lock_recordIDsForIDSSyncEngine:(id)arg1;
- (void)_lock_removeModeConfigurationWithCKRecordID:(id)arg1;
- (void)_lock_removeModeConfigurationWithModeIdentifier:(id)arg1;
- (void)_lock_updateModeConfigurationWithConfiguration:(id)arg1;
- (unsigned long long)_lock_writeRecord:(id)arg1 writePartition:(bool)arg2 error:(id*)arg3;
- (void)_notifyDelegateOfAvailableModes;
- (void)_purgeData;
- (void)_purgeRecordIDs:(id)arg1;
- (id)backingStore:(id)arg1 migrateDictionaryRepresentation:(id)arg2 fromVersionNumber:(unsigned long long)arg3 toVersionNumber:(unsigned long long)arg4;
- (void)cachedBackingStoreDidPurgeCache:(id)arg1;
- (id)compatibilityVersion;
- (id)contactHistoryToken;
- (void)contactMonitor:(id)arg1 didReceiveUpdatedContacts:(id)arg2 deletedContactIdentifiers:(id)arg3 withContactHistoryToken:(id)arg4;
- (void)contactMonitor:(id)arg1 didReceiveUpdatedContactsForContactsWithoutIdentifiers:(id)arg2;
- (id)delegate;
- (void)idsSyncEngine:(id)arg1 didFetchRecord:(id)arg2;
- (void)idsSyncEngine:(id)arg1 prepareRecordToSave:(inout id)arg2;
- (void)idsSyncEngine:(id)arg1 recordWithIDWasDeleted:(id)arg2;
- (id)initWithBackingStore:(id)arg1 syncEngine:(id)arg2 idsSyncEngine:(id)arg3;
- (id)monitoredContacts;
- (void)purgeRecordsForIDSSyncEngine:(id)arg1;
- (void)purgeRecordsForSyncEngine:(id)arg1;
- (id)readRecordWithError:(id*)arg1;
- (id)recordIDsForIDSSyncEngine:(id)arg1;
- (id)recordIDsForSyncEngine:(id)arg1;
- (void)setCompatibilityVersion:(id)arg1;
- (void)setContactHistoryToken:(id)arg1;
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
