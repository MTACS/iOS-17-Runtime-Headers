
@interface CPLPullFromTransportTask : CPLEngineMultiscopeSyncTask

- (id)enumerateScopesForTaskInTransaction:(id)arg1;
- (id)newScopedTaskWithScope:(id)arg1 session:(id)arg2 transportScope:(id)arg3 clientCacheIdentifier:(id)arg4;
- (id)scopeFilterInTransaction:(id)arg1;
- (id)taskIdentifier;

@end
