
@interface CPLMingleChangesScopeTask : CPLEngineScopedTask {
    CPLEngineTransientRepositoryBatchStorage * _batchStorage;
    bool  _didNotifySchedulerPullQueueIsFullOnce;
    CPLBatchExtractionStrategy * _extractionStrategy;
    <CPLEngineTransportFixUpSparseRecordTask> * _fixUpTask;
    NSObject<OS_dispatch_queue> * _lock;
    unsigned long long  _minglingCount;
    bool  _needsToNotifySchedulerPullQueueIsFull;
    NSObject<OS_dispatch_queue> * _notifyQueue;
    CPLEngineScope * _sharedScope;
    bool  _shouldStashRecordsIfNecessary;
    CPLTransportScopeMapping * _transportScopeMapping;
}

- (void).cxx_destruct;
- (void)_acknownledgeFixUpTasks:(id)arg1;
- (id)_filteredBatchByStashingRecordsIfNecessary:(id)arg1 error:(id*)arg2;
- (void)_finishMingling;
- (void)_fixUpPrivateRecordsPointingToRemappedSharedRecords:(id)arg1;
- (void)_mingleOtherChanges;
- (void)_mingleRemappings;
- (void)_mingleSharedRemappings;
- (void)_noteBatchWasAddedInPullQueue:(id)arg1 fromBatch:(id)arg2 transaction:(id)arg3;
- (void)_notifySchedulerPullQueueIsFullInTransaction:(id)arg1;
- (void)_notifySchedulerPullQueueIsFullNowIfNecessary;
- (void)_reallyNotifySchedulerPullQueueIsFull;
- (void)_unstashRecordsForScope:(id)arg1;
- (void)cancel;
- (bool)checkScopeIsValidInTransaction:(id)arg1;
- (id)initWithEngineLibrary:(id)arg1 session:(id)arg2 clientCacheIdentifier:(id)arg3 scope:(id)arg4 transportScope:(id)arg5;
- (void)launch;
- (void)taskDidFinishWithError:(id)arg1;
- (id)taskIdentifier;

@end
