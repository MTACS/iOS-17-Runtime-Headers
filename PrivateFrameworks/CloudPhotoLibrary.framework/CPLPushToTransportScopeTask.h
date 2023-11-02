
@interface CPLPushToTransportScopeTask : CPLEngineScopedTask <CPLUploadPushedChangesTaskDelegate> {
    bool  _contributorsUpdateIsDisabled;
    CPLUploadPushedChangesTask * _currentSubtask;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _currentSubtaskLock;
    NSString * _currentTaskKey;
    bool  _didExtractOneBatch;
    bool  _hasUploadedOneBatch;
    bool  _highPriority;
    NSObject<OS_dispatch_queue> * _lock;
    CPLEnginePushRepository * _pushRepository;
    unsigned long long  _recordCount;
    bool  _retryImmediately;
    long long  _ruleGroup;
    CPLEngineScheduler * _scheduler;
    NSString * _scopeIdentifier;
    CPLEngineScopeStorage * _scopes;
    CPLEngineScope * _sharedScope;
    <CPLEngineTransportGroup> * _storedTransportGroup;
    long long  _taskItem;
    NSDate * _taskStartDate;
    CPLEngineTransport * _transport;
    <CPLEngineTransportGroup> * _transportGroup;
    CPLTransportScopeMapping * _transportScopeMapping;
    <CPLEngineTransportUpdateContributorsTask> * _updateContributorsTask;
    bool  _wasBusy;
}

@property (readonly) CPLUploadPushedChangesTask *currentSubtask;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool highPriority;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_acknowledgeContributorUpdatesAndContinue:(id)arg1;
- (id)_contributorsUpdatesInTransaction:(id)arg1;
- (void)_didFinishTaskWithKey:(id)arg1 error:(bool)arg2 cancelled:(bool)arg3;
- (void)_didStartTaskWithKey:(id)arg1 recordCount:(unsigned long long)arg2;
- (void)_discardCurrentSubtask;
- (void)_excludeScopeFromMingling;
- (void)_includeScopeInMingling;
- (void)_launch;
- (void)_launchSubTask:(id)arg1;
- (void)_noteSuccessfulUpdateInTransaction:(id)arg1;
- (void)_prepareTransportGroupForOneBatch;
- (void)_pushTaskDidFinishWithError:(id)arg1;
- (void)_resetPriority;
- (bool)_shouldNotTrustCloudCacheAfterError:(id)arg1;
- (bool)_shouldUploadBatchesWithDropReason:(id*)arg1 shouldQuarantineRecords:(bool*)arg2 inTransaction:(id)arg3;
- (void)_updateContributors:(id)arg1;
- (void)_updateQuotaStrategyAfterSuccessInTransaction:(id)arg1;
- (void)_uploadChangesWithPriority:(unsigned long long)arg1 maxBatchSize:(unsigned long long)arg2;
- (void)_uploadTask:(id)arg1 didFinishWithError:(id)arg2;
- (void)cancel;
- (void)cancel:(bool)arg1;
- (bool)checkScopeIsValidInTransaction:(id)arg1;
- (id)currentSubtask;
- (bool)highPriority;
- (id)initWithEngineLibrary:(id)arg1 session:(id)arg2 clientCacheIdentifier:(id)arg3 scope:(id)arg4 transportScope:(id)arg5;
- (void)launch;
- (id)phaseDescription;
- (id)phaseDescriptionLastChangeDate:(id*)arg1;
- (id)scopesForTask;
- (void)setHighPriority:(bool)arg1;
- (bool)task:(id)arg1 checkScopeIsValidInTransaction:(id)arg2;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;
- (void)task:(id)arg1 didProgress:(float)arg2 userInfo:(id)arg3;
- (void)task:(id)arg1 noteSuccessfulUpdateInTransaction:(id)arg2;
- (bool)task:(id)arg1 shouldRetryImmediatelyInTransaction:(id)arg2;
- (bool)task:(id)arg1 shouldUploadBatchesWithDropReason:(id*)arg2 shouldQuarantineRecords:(bool*)arg3 inTransaction:(id)arg4;
- (id)taskIdentifier;

@end
