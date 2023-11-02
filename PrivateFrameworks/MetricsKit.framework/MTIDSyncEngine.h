
@interface MTIDSyncEngine : NSObject {
    NSString * _applicationBundleIdentifierOverrideForNetworkAttribution;
    CKContainer * _container;
    <MTIDSyncEngineDelegate> * _delegate;
    NSMutableSet * _pendingRecordIDs;
    long long  _qualityOfService;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableSet * _queuedRecordIDs;
    long long  _state;
    NSMutableArray * _transactions;
    CKRecordZoneID * _zoneID;
}

@property (retain) NSString *applicationBundleIdentifierOverrideForNetworkAttribution;
@property (nonatomic, retain) CKContainer *container;
@property (nonatomic) <MTIDSyncEngineDelegate> *delegate;
@property (nonatomic, retain) NSMutableSet *pendingRecordIDs;
@property (nonatomic) long long qualityOfService;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSMutableSet *queuedRecordIDs;
@property (nonatomic) long long state;
@property (nonatomic) NSMutableArray *transactions;
@property (nonatomic, retain) CKRecordZoneID *zoneID;

+ (void)setTransactionTimeout:(double)arg1;
+ (double)transactionTimeout;

- (void).cxx_destruct;
- (void)_beginTransaction;
- (void)_endTransaction;
- (void)accountDidChange:(id)arg1;
- (void)addPendingRecordID:(id)arg1;
- (void)addRecordIDsToSave:(id)arg1 recordIDsToDelete:(id)arg2 qualityOfService:(long long)arg3;
- (id)applicationBundleIdentifierOverrideForNetworkAttribution;
- (void)commit;
- (id)container;
- (id)delegate;
- (void)deleteRecordsWithIDs:(id)arg1;
- (void)fetchAllRecords;
- (void)fetchRecordWithID:(id)arg1;
- (id)fetchRecordWithIDs:(id)arg1;
- (void)handleDeletedRecordID:(id)arg1 error:(id)arg2;
- (void)handleEngineStartedWithError:(id)arg1;
- (void)handleFetchedRecords:(id)arg1 error:(id)arg2;
- (void)handleSavedRecord:(id)arg1 error:(id)arg2;
- (void)handleUserRecordID:(id)arg1;
- (id)initWithContainerIdentifier:(id)arg1 zoneID:(id)arg2 queue:(id)arg3 delegate:(id)arg4;
- (id)pendingRecordIDs;
- (long long)qualityOfService;
- (id)queue;
- (id)queuedRecordIDs;
- (void)removePendingRecordID:(id)arg1;
- (void)saveRecordsWithIDs:(id)arg1 qualityOfService:(long long)arg2;
- (void)setApplicationBundleIdentifierOverrideForNetworkAttribution:(id)arg1;
- (void)setContainer:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPendingRecordIDs:(id)arg1;
- (void)setQualityOfService:(long long)arg1;
- (void)setQueue:(id)arg1;
- (void)setQueuedRecordIDs:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setTransactions:(id)arg1;
- (void)setZoneID:(id)arg1;
- (void)setupContainerWithIdentifier:(id)arg1;
- (void)start;
- (void)startEngine;
- (long long)state;
- (id)transactions;
- (id)zoneID;

@end
