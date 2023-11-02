
@interface CPLProcessStagedScopesScopeTask : CPLEngineScopedTask {
    <CPLEngineTransportGetScopeInfoTask> * _checkDestinationTask;
    <CPLEngineTransportCleanupStagedScopeTask> * _cleanupTask;
    <CPLEngineTransportDeleteTransportScopeTask> * _deleteTask;
    CPLEngineScope * _destinationScope;
    CPLScopeChange * _destinationScopeChange;
    NSData * _destinationTransportScope;
    bool  _isPrimarySharedLibrary;
    NSObject<OS_dispatch_queue> * _queue;
    CPLEngineScope * _stagingScope;
    NSData * _stagingTransportScope;
    <CPLEngineTransportGroup> * _transportGroup;
    CPLTransportScopeMapping * _transportScopeMapping;
}

+ (void)initialize;

- (void).cxx_destruct;
- (void)_checkDestinationAndProcessCleanup;
- (void)_cleanupStagedScopeInTransaction:(id)arg1 store:(id)arg2;
- (void)_deleteStagingScopeIfNecessary;
- (void)_excludeScopes;
- (void)_startActualCleanup;
- (void)cancel;
- (id)initWithEngineLibrary:(id)arg1 session:(id)arg2 clientCacheIdentifier:(id)arg3 scope:(id)arg4 transportScope:(id)arg5;
- (void)launch;
- (void)taskDidFinishWithError:(id)arg1;
- (id)taskIdentifier;

@end
