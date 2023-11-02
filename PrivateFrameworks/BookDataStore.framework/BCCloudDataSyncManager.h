
@interface BCCloudDataSyncManager : NSObject <BCCloudDataSyncProvider, BCCloudKitDatabaseObserver> {
    double  _backOffInterval;
    BCCloudKitController * _cloudKitController;
    <BCCloudDataMapper> * _dataMapper;
    <BCCloudDataSyncManagerDelegate> * _delegate;
    bool  _processingCloudData;
    bool  _serverPushPostponed;
    NSObject<OS_dispatch_queue> * _syncQueue;
    unsigned long long  _tooBigBatch;
}

@property (nonatomic) double backOffInterval;
@property (nonatomic, retain) BCCloudKitController *cloudKitController;
@property (nonatomic, retain) <BCCloudDataMapper> *dataMapper;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <BCCloudDataSyncManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool processingCloudData;
@property (nonatomic) bool serverPushPostponed;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *syncQueue;
@property (nonatomic) unsigned long long tooBigBatch;

- (void).cxx_destruct;
- (id)_batchFromCloudData:(id)arg1;
- (void)_enterDispatchGroup:(id)arg1 times:(unsigned long long)arg2;
- (void)_fromBatch:(id)arg1 getRecordsToSave:(id*)arg2 recordIDsToDelete:(id*)arg3 buildingMap:(id*)arg4;
- (void)_leaveDispatchGroup:(id)arg1 times:(unsigned long long)arg2;
- (unsigned long long)_maxCloudDataPerBatch;
- (id /* block */)_modifyRecordsCompletionBlockWithDispatchGroup:(id)arg1 cloudDataMap:(id)arg2 recordCount:(unsigned long long)arg3 operation:(id)arg4;
- (void)_syncQueueSyncForCloudData:(id)arg1 completion:(id /* block */)arg2;
- (void)_updateRetryParametersFromModifyRecordsOperationError:(id)arg1 batchSize:(unsigned long long)arg2;
- (double)backOffInterval;
- (id)cloudKitController;
- (id)dataMapper;
- (void)databaseController:(id)arg1 attachmentChanged:(bool)arg2;
- (void)databaseController:(id)arg1 fetchedAllRecordsInZone:(id)arg2;
- (void)databaseController:(id)arg1 reachabilityChanged:(bool)arg2;
- (void)databaseController:(id)arg1 recordWithIDWasDeleted:(id)arg2 recordType:(id)arg3;
- (void)databaseController:(id)arg1 recordsChanged:(id)arg2;
- (id)delegate;
- (void)fetchRecordForRecordID:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithCloudKitController:(id)arg1;
- (id)initWithCloudKitController:(id)arg1 dataMapper:(id)arg2;
- (id)privacyDelegate;
- (bool)processingCloudData;
- (bool)serverPushPostponed;
- (void)setBackOffInterval:(double)arg1;
- (void)setCloudKitController:(id)arg1;
- (void)setDataMapper:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setProcessingCloudData:(bool)arg1;
- (void)setServerPushPostponed:(bool)arg1;
- (void)setSyncQueue:(id)arg1;
- (void)setTooBigBatch:(unsigned long long)arg1;
- (void)signalSyncToCK;
- (void)startSyncToCKWithCompletion:(id /* block */)arg1;
- (void)syncCloudData:(id)arg1 completion:(id /* block */)arg2;
- (id)syncQueue;
- (unsigned long long)tooBigBatch;

@end
