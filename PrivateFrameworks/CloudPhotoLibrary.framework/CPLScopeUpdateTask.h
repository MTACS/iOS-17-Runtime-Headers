
@interface CPLScopeUpdateTask : CPLEngineMultiscopeSyncTask {
    NSMutableSet * _possibleStagedScopes;
}

- (void).cxx_destruct;
- (id)enumerateScopesForTaskInTransaction:(id)arg1;
- (id)newScopedTaskWithScope:(id)arg1 session:(id)arg2 transportScope:(id)arg3 clientCacheIdentifier:(id)arg4;
- (bool)shouldSkipScopesWithMissingTransportScope;
- (void)taskDidFinishWithError:(id)arg1;
- (id)taskIdentifier;

@end
