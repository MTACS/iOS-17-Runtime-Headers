
@interface CPLSharedBatchStorage : CPLEngineTransientRepositoryBatchStorage <CPLEngineIDMapping> {
    NSMutableDictionary * _alreadyProcessedChanges;
    CPLEngineCloudCache * _cloudCache;
    CPLEngineIgnoredRecords * _ignoredRecords;
    <CPLSharedRecordMerger> * _merger;
    NSDate * _now;
    CPLEngineRemappedRecords * _remappedRecords;
    CPLEngineScope * _sharedScope;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <CPLSharedRecordMerger> *merger;
@property (nonatomic, readonly) CPLEngineScope *sharedScope;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_allChangesMatchingChangeType:(unsigned long long)arg1 enumerator:(id)arg2;
- (id)_correctPrivateScopedIdentifierForSharedScopedIdentifier:(id)arg1 currentPrivateScopedIdentifier:(id)arg2;
- (bool)_keepIgnoredRecord:(id)arg1 shadowingRecord:(id)arg2 inScope:(id)arg3 error:(id*)arg4;
- (id)_mergedRecordWithPrivateChange:(id)arg1 sharedScopedIdentifier:(id*)arg2;
- (id)_mergedRecordWithSharedChange:(id)arg1 target:(id)arg2;
- (id)_privateScopedIdentifierForSharedScopedIdentifier:(id)arg1;
- (id)_remapSharedRecord:(id)arg1 target:(id)arg2;
- (id)_sharedRecordAsPrivateRecord:(id)arg1 target:(id)arg2;
- (id)_targetForPrivateScopedIdentifier:(id)arg1;
- (id)_targetForSharedScopedIdentifier:(id)arg1;
- (bool)_transferIgnoredRecordToTransientPullRepository:(id)arg1 error:(id*)arg2;
- (id)_unionEnumerationWithPrivateRecordEnumeratorGenerator:(id /* block */)arg1 sharedRecordGenerator:(id /* block */)arg2;
- (id)_updatePrivateScopedIdentifierForUnknownTarget:(id)arg1;
- (bool)addCloudScopedIdentifier:(id)arg1 forLocalScopedIdentifier:(id)arg2 isFinal:(bool)arg3 direction:(unsigned long long)arg4 error:(id*)arg5;
- (id)allChangesWithClass:(Class)arg1 relatedScopedIdentifier:(id)arg2;
- (id)allChangesWithClass:(Class)arg1 scopeIdentifier:(id)arg2 changeType:(unsigned long long)arg3;
- (id)allChangesWithClass:(Class)arg1 scopeIdentifier:(id)arg2 trashed:(bool)arg3;
- (id)allChangesWithClass:(Class)arg1 secondaryScopedIdentifier:(id)arg2;
- (id)allChangesWithScopeIdentifier:(id)arg1;
- (id)allNonDeletedChangesWithClass:(Class)arg1 scopeIdentifier:(id)arg2;
- (void)beginExtractingBatch;
- (id)changeWithScopedIdentifier:(id)arg1;
- (void)cleanupAfterExtractingBatch;
- (id)cloudScopedIdentifierForLocalScopedIdentifier:(id)arg1 isFinal:(bool*)arg2;
- (unsigned long long)effectiveResourceSizeToUploadForUploadIdentifier:(id)arg1;
- (id)firstAvailableCloudScopedIdentifierForProposedCloudScopedIdentifier:(id)arg1;
- (bool)hasChangesInScopeWithIdentifier:(id)arg1;
- (id)initWithTransientRepository:(id)arg1 scope:(id)arg2 sharedScope:(id)arg3 merger:(id)arg4;
- (bool)isRecordWithScopedIdentifierStashed:(id)arg1;
- (id)localScopedIdentifierForCloudScopedIdentifier:(id)arg1 isFinal:(bool*)arg2;
- (id)localScopedIdentifierForCloudScopedIdentifierIncludeRemappedRecords:(id)arg1;
- (id)merger;
- (bool)removeChange:(id)arg1 error:(id*)arg2;
- (id)setupCloudScopedIdentifier:(id)arg1 forLocalScopedIdentifier:(id)arg2 isFinal:(bool)arg3 direction:(unsigned long long)arg4 error:(id*)arg5;
- (id)sharedScope;
- (bool)stashChange:(id)arg1 error:(id*)arg2;

@end
