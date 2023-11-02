
@interface CPLEngineRevertRecords : CPLEngineStorage <CPLAbstractObject>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CPLPlatformObject *platformObject;
@property (readonly) Class superclass;

- (bool)addRecordsToRevertWithLocalScopedIdentifier:(id)arg1 class:(Class)arg2 error:(id*)arg3;
- (bool)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long*)arg3 error:(id*)arg4;
- (bool)deleteRecordsToRevertFromBatch:(id)arg1 error:(id*)arg2;
- (id)nextBatchOfRecordsToRevert;
- (unsigned long long)scopeType;
- (bool)shouldRevertRecordWithLocalScopedIdentifier:(id)arg1;

@end
