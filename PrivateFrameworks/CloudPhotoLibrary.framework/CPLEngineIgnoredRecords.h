
@interface CPLEngineIgnoredRecords : CPLEngineStorage <CPLAbstractObject>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CPLPlatformObject *platformObject;
@property (readonly) Class superclass;

- (bool)addIgnoredRecord:(id)arg1 ignoredDate:(id)arg2 otherScopeIndex:(long long)arg3 error:(id*)arg4;
- (bool)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long*)arg3 error:(id*)arg4;
- (bool)hasRecordWithScopedIdentifier:(id)arg1;
- (id)ignoredRecordWithScopedIdentifier:(id)arg1;
- (id)ignoredRecordsBeforeDate:(id)arg1 scopeIdentifier:(id)arg2 maximumCount:(unsigned long long)arg3;
- (id)recordWithScopedIdentifier:(id)arg1;
- (bool)removeRecordWithScopedIdentifier:(id)arg1 error:(id*)arg2;
- (bool)scopeIdentifier:(id)arg1 hasIgnoredRecordsBeforeDate:(id)arg2;
- (unsigned long long)scopeType;
- (bool)setIgnoredDate:(id)arg1 forRecordWithScopedIdentifier:(id)arg2 error:(id*)arg3;

@end
