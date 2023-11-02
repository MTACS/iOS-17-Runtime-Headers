
@interface CPLPullScopesTask : CPLEngineSyncTask {
    NSError * _badError;
    NSString * _clientCacheIdentifier;
    unsigned long long  _deletedScopeCount;
    <CPLEngineTransportFetchScopeListChangesTask> * _fetchChangesTask;
    bool  _ignoreNewChanges;
    unsigned long long  _modifiedScopeCount;
    unsigned long long  _newScopeCount;
    CPLEngineScopeStorage * _scopes;
    CPLEngineStore * _store;
}

- (void).cxx_destruct;
- (bool)_checkShouldHandleBatchInTransaction:(id)arg1;
- (void)_handleChangedOrNewScopes:(id)arg1 deletedScopeIdentifiers:(id)arg2 newScopeListSyncAnchor:(id)arg3;
- (void)_handleFinalScopeListSyncAnchor:(id)arg1 error:(id)arg2;
- (void)cancel;
- (id)initWithEngineLibrary:(id)arg1 session:(id)arg2;
- (void)launch;
- (id)taskIdentifier;

@end
