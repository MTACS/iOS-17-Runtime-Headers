
@interface CPLEngineRemappedRecords : CPLEngineStorage <CPLAbstractObject> {
    NSMutableDictionary * _perTransactionRemappedScopedIdentifiers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CPLPlatformObject *platformObject;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_fixupRemappedRecordsAndReturnBestCloudScopedIdentifierFromRemappedScopedIdentifiers:(id)arg1 fallback:(id)arg2;
- (bool)addRemappedRecordWithScopedIdentifier:(id)arg1 realScopedIdentifier:(id)arg2 error:(id*)arg3;
- (bool)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long*)arg3 error:(id*)arg4;
- (bool)isRecordWithScopedIdentifierRemapped:(id)arg1;
- (id)realScopedIdentifierForRemappedScopedIdentifier:(id)arg1;
- (bool)removeRemappedRecordWithScopedIdentifier:(id)arg1 error:(id*)arg2;
- (unsigned long long)scopeType;
- (id)scopedIdentifiersRemappedToScopedIdentifier:(id)arg1;
- (void)writeTransactionDidFail;
- (void)writeTransactionDidSucceed;

@end
