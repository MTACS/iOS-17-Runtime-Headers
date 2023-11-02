
@interface CPLEngineResourceDownloadQueue : CPLEngineStorage <CPLAbstractObject> {
    NSArray * _allHighPriorityQueues;
    NSArray * _allLowPriorityQueues;
    NSArray * _allQueues;
    NSArray * _bestCancellableHighPriorityQueues;
    NSArray * _bestCancellableLowPriorityQueues;
    NSObject<OS_dispatch_queue> * _downloadLock;
    id /* block */  _highPriorityQueuePerResourceTypeAndTransferIntent;
    unsigned long long  _inflightTransferTasksCount;
    NSDate * _lastTransferTaskBurstDate;
    unsigned long long  _lastTransferTasksBurstCount;
    id /* block */  _lowPriorityQueuePerResourceTypeAndTransferIntent;
    bool  _shouldRequestABackgroundDownloadSyncPhase;
    unsigned long long  _transferTasksBurstCount;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CPLPlatformObject *platformObject;
@property (readonly) Class superclass;

+ (bool)shouldRetryDownloadOnError:(id)arg1;

- (void).cxx_destruct;
- (id)_activeQueueForTransferTask:(id)arg1;
- (id)_bestQueueWithCancellableTransportTasks;
- (bool)_canScheduleBackgroundDownloads;
- (void)_dequeueTransferTaskInActiveQueue:(id)arg1;
- (void)_dispatchTransportTasksIfNecessary;
- (id)_downloadTaskForLocalResource:(id)arg1 clientBundleID:(id)arg2 options:(id)arg3 proposedTaskIdentifier:(id)arg4 didStartHandler:(id /* block */)arg5 progressHandler:(id /* block */)arg6 completionHandler:(id /* block */)arg7;
- (void)_enqueueTransferTaskInActiveQueue:(id)arg1;
- (id)_failedTaskWithCompletionHandler:(id /* block */)arg1 error:(id)arg2 resource:(id)arg3 taskIdentifier:(id)arg4 options:(id)arg5;
- (bool)_launchTransportTaskForQueue:(id)arg1;
- (id)_queuesStatus;
- (id)_realDownloadTaskForLocalResource:(id)arg1 taskIdentifier:(id)arg2 cloudResource:(id)arg3 ofRecord:(id)arg4 target:(id)arg5 didStartHandler:(id /* block */)arg6 progressHandler:(id /* block */)arg7 completionHandler:(id /* block */)arg8;
- (void)_requestBackgroundDownloads;
- (id)_resourceStorageCopyTaskForResource:(id)arg1 taskIdentifier:(id)arg2 cloudResource:(id)arg3 ofRecord:(id)arg4 target:(id)arg5 didStartHandler:(id /* block */)arg6 progressHandler:(id /* block */)arg7 completionHandler:(id /* block */)arg8;
- (void)_scheduleBackgroundDownloadsIfNecessary;
- (bool)_shouldTryLowPriorityDownloadWithError:(id*)arg1;
- (unsigned long long)_transportTaskCount;
- (void)_unscheduleBackgroundDownloads;
- (void)barrier;
- (id)cloudResourceForLocalResource:(id*)arg1 cloudRecord:(id*)arg2 target:(id*)arg3 shouldNotTrustCaches:(bool*)arg4 allowUnsafeClientCache:(bool)arg5 transportScopeMapping:(id)arg6 error:(id*)arg7;
- (unsigned long long)countOfQueuedDownloadTasks;
- (id)createGroupForBackgroundDownloadsOfResourceType:(unsigned long long)arg1 transferIntent:(unsigned long long)arg2 transport:(id)arg3;
- (bool)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long*)arg3 error:(id*)arg4;
- (id)dequeueNextBackgroundDownloadTasksForResourceType:(unsigned long long)arg1 andIntent:(unsigned long long)arg2 maximumSize:(unsigned long long)arg3 maximumCount:(unsigned long long)arg4 error:(id*)arg5;
- (id)downloadTaskForLocalResource:(id)arg1 clientBundleID:(id)arg2 options:(id)arg3 proposedTaskIdentifier:(id)arg4 didStartHandler:(id /* block */)arg5 progressHandler:(id /* block */)arg6 completionHandler:(id /* block */)arg7;
- (bool)enqueueBackgroundDownloadTaskForResource:(id)arg1 intent:(unsigned long long)arg2 downloading:(bool)arg3 error:(id*)arg4;
- (id)enumeratorForDownloadedResources;
- (bool)hasActiveOrQueuedBackgroundDownloadOperations;
- (id)initWithEngineStore:(id)arg1 name:(id)arg2;
- (bool)markBackgroundDownloadTaskForResourceAsSuceeded:(id)arg1 error:(id*)arg2;
- (bool)reenqueueBackgroundDownloadTaskForResource:(id)arg1 bumpRetryCount:(bool)arg2 didDiscard:(bool*)arg3 error:(id*)arg4;
- (bool)removeAllBackgroundDownloadTasksForItemWithScopedIdentifier:(id)arg1 error:(id*)arg2;
- (bool)removeBackgroundDownloadTaskForResource:(id)arg1 error:(id*)arg2;
- (bool)resetDequeuedBackgroundDownloadTasksWithError:(id*)arg1;
- (unsigned long long)scopeType;
- (id)status;

@end
