
@interface CPLEngineTransientRepository : CPLEngineStorage <CPLAbstractObject> {
    unsigned long long  _maximumCountOfRecordsInBatches;
}

@property (nonatomic, readonly) unsigned long long countOfUnmingledRecords;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasUnmingledChanges;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long maximumCountOfRecordsInBatches;
@property (nonatomic, readonly) CPLPlatformObject *platformObject;
@property (readonly) Class superclass;

+ (id)orderedClassesForChanges;
+ (id)orderedClassesForChangesForLargeSync;
+ (id)orderedClassesForDelete;

- (bool)_appendBatchToStorage:(id)arg1 alreadyMingled:(bool)arg2 countOfAssetChanges:(unsigned long long*)arg3 error:(id*)arg4;
- (id)_sharedDeleteFromDelete:(id)arg1;
- (id)allUnmingledChangesWithClass:(Class)arg1 relatedScopedIdentifier:(id)arg2;
- (id)allUnmingledChangesWithClass:(Class)arg1 scopeIdentifier:(id)arg2;
- (id)allUnmingledChangesWithScopeIdentifier:(id)arg1;
- (id)allUnmingledDeletedChangesWithClass:(Class)arg1 scopeIdentifier:(id)arg2;
- (id)allUnmingledNonDeletedChangesWithClass:(Class)arg1 scopeIdentifier:(id)arg2;
- (bool)appendBatch:(id)arg1 alreadyMingled:(bool)arg2 countOfAssetChanges:(unsigned long long*)arg3 error:(id*)arg4;
- (id)batchStorageForScope:(id)arg1;
- (id)cachedRecordWithScopedIdentifier:(id)arg1;
- (id)changeWithScopedIdentifier:(id)arg1;
- (unsigned long long)countOfUnmingledRecords;
- (bool)deleteMingledRecordsForScopeWithIdentifier:(id)arg1 error:(id*)arg2;
- (bool)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long*)arg3 error:(id*)arg4;
- (bool)hasMingledRecordsForScopeWithIdentifier:(id)arg1;
- (bool)hasOnlyMingledRecordsWithScopeIdentifier:(id)arg1;
- (bool)hasRecordWithScopedIdentifier:(id)arg1;
- (bool)hasStashedChangesForScopeWithIdentifier:(id)arg1;
- (bool)hasStashedRecordWithScopedIdentifier:(id)arg1;
- (bool)hasUnmingledChanges;
- (bool)hasUnmingledChangesForScope:(id)arg1;
- (bool)hasUnmingledNonStashedRecordsForScopeWithIdentifier:(id)arg1;
- (bool)hasUnmingledOrStashedRecordsWithScopeFilter:(id)arg1;
- (id)initWithEngineStore:(id)arg1 name:(id)arg2;
- (bool)markUnmingledChangeWithScopedIdentifierAsMingled:(id)arg1 error:(id*)arg2;
- (unsigned long long)maximumCountOfRecordsInBatches;
- (id)nextBatchOfRemappedRecordsInScope:(id)arg1 maximumCount:(unsigned long long)arg2;
- (bool)openWithError:(id*)arg1;
- (bool)popChangeBatchOfRemappedRecords:(id*)arg1 scope:(id)arg2 maximumCount:(unsigned long long)arg3 error:(id*)arg4;
- (bool)resetMingledRecordsForScopeWithIdentifier:(id)arg1 error:(id*)arg2;
- (bool)resetMingledRecordsWithScopeFilter:(id)arg1 error:(id*)arg2;
- (bool)resetTransientRepositoryForScopeWithIdentifier:(id)arg1 error:(id*)arg2;
- (unsigned long long)scopeType;
- (void)setMaximumCountOfRecordsInBatches:(unsigned long long)arg1;
- (bool)shouldKeepDeleteChange:(id)arg1 forRecordWithScopedIdentifier:(id)arg2;
- (bool)stashChangeWithScopedIdentifier:(id)arg1 error:(id*)arg2;
- (id)unmingledChangeWithScopedIdentifier:(id)arg1;
- (bool)unstashRecordsForScopeWithIdentifier:(id)arg1 maxCount:(unsigned long long)arg2 hasMore:(bool*)arg3 error:(id*)arg4;

@end
