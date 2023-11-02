
@interface CPLEngineForceSyncTask : CPLForceSyncTask <CPLEngineSyncTaskDelegate> {
    bool  _bypassForceSyncLimitations;
    NSDate * _creationDate;
    CPLEngineSyncTask * _currentTask;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _currentTaskLock;
    <CPLEngineForceSyncTaskDelegate> * _delegate;
    CPLEngineLibrary * _engineLibrary;
    CPLSyncSession * _fakeSession;
    CPLScopeFilter * _filter;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _reallyCancelled;
    bool  _reallyLaunched;
    NSEnumerator * _syncTaskEnumerator;
    id /* block */  _taskDidFinishWithErrorBlock;
    <CPLEngineStoreUserIdentifier> * _transportUserIdentifier;
}

@property (nonatomic) bool bypassForceSyncLimitations;
@property (nonatomic, readonly) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CPLEngineForceSyncTaskDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CPLEngineLibrary *engineLibrary;
@property (nonatomic, retain) CPLScopeFilter *filter;
@property (nonatomic, readonly) bool forBackup;
@property (nonatomic, readonly) bool forcingProcessedStagedScopes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSObject<OS_xpc_object> *taskActivity;
@property (nonatomic, copy) id /* block */ taskDidFinishWithErrorBlock;
@property (nonatomic, retain) <CPLEngineStoreUserIdentifier> *transportUserIdentifier;

- (void).cxx_destruct;
- (id)_currentTask;
- (void)_dispatchNextSyncTask;
- (void)_dispatchSyncTask:(id)arg1;
- (void)_dropCurrentTask;
- (void)_finishWithError:(id)arg1;
- (id)_phaseDescription;
- (bool)bypassForceSyncLimitations;
- (void)cancelTask;
- (id)creationDate;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)engineLibrary;
- (id)filter;
- (bool)forBackup;
- (bool)forcingProcessedStagedScopes;
- (id)initWithScopeIdentifiers:(id)arg1 engineLibrary:(id)arg2 filter:(id)arg3 delegate:(id)arg4;
- (void)launchTask;
- (void)reallyCancel;
- (void)reallyLaunch;
- (void)setBypassForceSyncLimitations:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEngineLibrary:(id)arg1;
- (void)setFilter:(id)arg1;
- (void)setTaskActivity:(id)arg1;
- (void)setTaskDidFinishWithErrorBlock:(id /* block */)arg1;
- (void)setTransportUserIdentifier:(id)arg1;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;
- (void)task:(id)arg1 didProgress:(float)arg2 userInfo:(id)arg3;
- (id)taskActivity;
- (id /* block */)taskDidFinishWithErrorBlock;
- (id)transportUserIdentifier;

@end
