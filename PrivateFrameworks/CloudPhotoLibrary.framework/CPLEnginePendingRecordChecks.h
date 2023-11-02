
@interface CPLEnginePendingRecordChecks : CPLEngineStorage <CPLAbstractObject>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CPLPlatformObject *platformObject;
@property (readonly) Class superclass;

- (bool)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long*)arg3 error:(id*)arg4;
- (bool)dequeueCloudScopedIdentifiersToCheck:(id)arg1 error:(id*)arg2;
- (bool)enqueueCloudScopedIdentifiersToCheck:(id)arg1 error:(id*)arg2;
- (bool)hasRecordsToCheckWithScopeIdentifier:(id)arg1;
- (id)nextBatchOfRecordsToCheckWithScopeIdentifier:(id)arg1;
- (unsigned long long)scopeType;

@end
