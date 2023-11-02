
@interface CPLEngineMultiscopeSyncTask : CPLEngineSyncTask <CPLEngineSyncTaskDelegate> {
    CPLScopeFilter * _additionalScopeFilter;
    CPLScopeFilter * _baseScopeFilter;
    NSString * _clientCacheIdentifier;
    NSMutableArray * _coveredScopes;
    CPLEngineScopedTask * _currentTask;
    NSObject<OS_dispatch_queue> * _currentTaskQueue;
    NSMutableArray * _excludedScopes;
    NSObject<OS_dispatch_queue> * _queue;
    CPLEngineScopeStorage * _scopes;
    NSMutableDictionary * _transportScopes;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CPLEngineScopeStorage *scopes;
@property (nonatomic, readonly) bool shouldSkipScopesWithMissingTransportScope;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_currentScope;
- (id)_currentTask;
- (void)_launchTaskForNextScope;
- (void)_setCurrentTask:(id)arg1;
- (void)cancel;
- (void)dispatchAsyncWithCurrentSubtask:(id /* block */)arg1;
- (id)enumerateScopesForTaskInTransaction:(id)arg1;
- (id)initWithEngineLibrary:(id)arg1 session:(id)arg2;
- (void)launch;
- (id)newScopedTaskWithScope:(id)arg1 session:(id)arg2 transportScope:(id)arg3 clientCacheIdentifier:(id)arg4;
- (id)phaseDescription;
- (id)phaseDescriptionLastChangeDate:(id*)arg1;
- (id)scopeFilterInTransaction:(id)arg1;
- (id)scopes;
- (void)setForceSync:(bool)arg1;
- (void)setForeground:(bool)arg1;
- (bool)shouldContinueAfterError:(id)arg1 fromTask:(id)arg2;
- (bool)shouldProcessScope:(id)arg1 inTransaction:(id)arg2;
- (bool)shouldSkipScopesWithMissingTransportScope;
- (bool)shouldStartTaskInTransaction:(id)arg1;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;
- (void)task:(id)arg1 didProgress:(float)arg2 userInfo:(id)arg3;

@end
