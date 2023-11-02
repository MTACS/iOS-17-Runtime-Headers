
@interface CPLBackgroundDownloadsTask : CPLEngineSyncTask {
    unsigned long long  _activeTransferTaskCount;
    NSError * _badError;
    unsigned long long  _currentIntentIndex;
    unsigned long long  _failedDownloadedResourcesCount;
    bool  _hasResetQueue;
    NSArray * _intentsToDownload;
    NSObject<OS_dispatch_queue> * _lock;
    bool  _prioritizeNonDerivatives;
    bool  _shouldStop;
    NSError * _stopError;
    unsigned long long  _successfullyDownloadedResourcesCount;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _taskCountLock;
    unsigned long long  _total;
    unsigned long long  _transportTaskCount;
    NSMutableArray * _transportTasks;
}

- (void).cxx_destruct;
- (unsigned long long)_activeTransferTaskCount;
- (void)_completeBackgroundDownloadForResource:(id)arg1 error:(id)arg2 withTransaction:(id)arg3;
- (void)_downloadTask:(id)arg1 didFinishWithErrorLocked:(id)arg2;
- (void)_enqueueTasksLocked;
- (void)_finishTaskLocked;
- (void)_getResourceTypesToDownload:(const unsigned long long**)arg1;
- (bool)_isErrorCountingForARetry:(id)arg1;
- (void)_launchNecessaryDownloadTasksWithTransaction:(id)arg1;
- (unsigned long long)_transportTaskCount;
- (void)_transportTaskDidFinish:(id)arg1;
- (void)_updateActiveDownloadTaskCount;
- (void)cancel;
- (id)description;
- (id)initWithEngineLibrary:(id)arg1 session:(id)arg2;
- (void)launch;
- (void)taskDidFinishWithError:(id)arg1;
- (id)taskIdentifier;

@end
