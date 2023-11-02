
@interface CPLEngineScopeCleanupTasks : CPLEngineStorage <CPLAbstractObject> {
    long long  _currentCleanupScopeIndex;
    NSMutableArray * _remainingStoragesToCleanup;
    bool  _shouldRequestACleanupToScheduler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CPLPlatformObject *platformObject;
@property (readonly) Class superclass;

+ (id)scopeTypeDescriptionForScopeType:(unsigned long long)arg1;

- (void).cxx_destruct;
- (bool)addCleanupTaskForScopeWithIndex:(long long)arg1 scopeIdentifier:(id)arg2 scopeType:(unsigned long long)arg3 error:(id*)arg4;
- (bool)cleanupStepHasMore:(bool*)arg1 error:(id*)arg2;
- (bool)hasCleanupTasks;
- (unsigned long long)scopeType;
- (void)writeTransactionDidFail;
- (void)writeTransactionDidSucceed;

@end
