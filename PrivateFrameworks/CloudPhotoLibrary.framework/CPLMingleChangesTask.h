
@interface CPLMingleChangesTask : CPLEngineMultiscopeSyncTask

- (id)enumerateScopesForTaskInTransaction:(id)arg1;
- (void)launch;
- (id)newScopedTaskWithScope:(id)arg1 session:(id)arg2 transportScope:(id)arg3 clientCacheIdentifier:(id)arg4;
- (id)scopeFilterInTransaction:(id)arg1;
- (bool)shouldProcessScope:(id)arg1 inTransaction:(id)arg2;
- (void)taskDidFinishWithError:(id)arg1;
- (id)taskIdentifier;

@end
