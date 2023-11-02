
@interface SLDCloudKitSyncBase : NSObject <CKSyncEngineDataSource> {
    bool  _accountChangesCheckScheduled;
    SLDCloudKitConfiguration * _configuration;
    CKContainer * _container;
    SLDCloudKitSyncPersistence * _persistence;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _saltLocked;
    CKSyncEngine * _syncEngine;
    double  _timestamp;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)accountChangedNotification:(id)arg1;
- (void)accountStatusChanged;
- (void)addMetadataToRecord:(id)arg1;
- (void)checkForAccountChanges;
- (void)checkForAccountChangesNow;
- (id)configuration;
- (id)container;
- (void)createSyncEngine;
- (double)currentTimestamp;
- (id)database;
- (unsigned long long)getIncrementedBatchNumber;
- (void)handleMetadataSizeBecomingEligibleForSync;
- (id)idStringForType:(id)arg1 uniqueData:(id)arg2;
- (id)idStringForType:(id)arg1 uniqueString:(id)arg2;
- (id)initWithConfiguration:(id)arg1;
- (void)initializeState;
- (id)persistence;
- (id)queue;
- (bool)recordSupportsOurVersion:(id)arg1;
- (void)reset;
- (id)salt;
- (id)syncEngine;
- (void)syncEngine:(id)arg1 didDeleteRecordWithID:(id)arg2;
- (void)syncEngine:(id)arg1 didFetchRecord:(id)arg2;
- (void)syncEngine:(id)arg1 didSaveRecord:(id)arg2;
- (void)syncEngine:(id)arg1 didUpdateMetadata:(id)arg2;
- (void)syncEngine:(id)arg1 failedToDeleteRecordWithID:(id)arg2 error:(id)arg3;
- (void)syncEngine:(id)arg1 failedToSaveRecord:(id)arg2 error:(id)arg3;
- (id)syncEngine:(id)arg1 recordToSaveForRecordID:(id)arg2;
- (void)syncEngine:(id)arg1 recordWithIDWasDeleted:(id)arg2 recordType:(id)arg3;

@end
