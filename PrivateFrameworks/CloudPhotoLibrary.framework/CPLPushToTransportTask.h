
@interface CPLPushToTransportTask : CPLEngineMultiscopeSyncTask {
    bool  _deferredCancel;
    bool  _highPriority;
}

@property (nonatomic) bool highPriority;

+ (bool)dontAutoRetry;
+ (void)setDontAutoRetry:(bool)arg1;

- (void)cancel:(bool)arg1;
- (id)enumerateScopesForTaskInTransaction:(id)arg1;
- (bool)highPriority;
- (id)newScopedTaskWithScope:(id)arg1 session:(id)arg2 transportScope:(id)arg3 clientCacheIdentifier:(id)arg4;
- (id)scopeFilterInTransaction:(id)arg1;
- (void)setHighPriority:(bool)arg1;
- (bool)shouldSkipScopesWithMissingTransportScope;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;
- (void)taskDidFinishWithError:(id)arg1;
- (id)taskIdentifier;

@end
