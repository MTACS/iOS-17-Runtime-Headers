
@interface CPLEngineCloudCache : CPLEngineStorage <CPLAbstractObject>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CPLPlatformObject *platformObject;
@property (readonly) Class superclass;

- (id)_invalidCloudCacheErrorWithInvalidRecord:(id)arg1 method:(id)arg2;
- (id)_otherScopedIdentifierForCloudScopedIdentifier:(id)arg1 sharedScoped:(id)arg2;
- (id)_targetWithRecord:(id)arg1 cloudScopedIdentifier:(id)arg2 trustRecordChangeData:(bool)arg3;
- (id)_targetWithShareableRecord:(id)arg1 cloudScopedIdentifier:(id)arg2 otherScopedIdentifier:(id)arg3 sharedScope:(id)arg4 trustRecordChangeData:(bool)arg5;
- (bool)ackownledgeRecordWithScopedIdentifier:(id)arg1 error:(id*)arg2;
- (bool)addRecord:(id)arg1 isFinal:(bool)arg2 error:(id*)arg3;
- (id)allRecordsIsFinal:(bool)arg1;
- (bool)applyBatch:(id)arg1 isFinal:(bool)arg2 direction:(unsigned long long)arg3 withError:(id*)arg4;
- (id)cloudChangeBatchFromBatch:(id)arg1 usingMapping:(id)arg2 isFinal:(bool)arg3 withError:(id*)arg4;
- (bool)commitStagedChangesForScopeWithIdentifier:(id)arg1 error:(id*)arg2;
- (bool)confirmAllRecordsWithError:(id*)arg1;
- (unsigned long long)countOfRecordsAcknowledgedByClientWithRelatedScopedIdentifier:(id)arg1 class:(Class)arg2;
- (bool)deleteRecordWithScopedIdentifier:(id)arg1 isFinal:(bool)arg2 error:(id*)arg3;
- (bool)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long*)arg3 error:(id*)arg4;
- (bool)discardStagedChangesForScopeWithIdentifier:(id)arg1 error:(id*)arg2;
- (bool)discardStagedChangesWithScopeFilter:(id)arg1 error:(id*)arg2;
- (void)getCommittedRecord:(id*)arg1 stagedRecord:(id*)arg2 forScopedIdentifier:(id)arg3;
- (bool)hasAnyRecordWithRelatedScopedIdentifier:(id)arg1;
- (bool)hasRecordAcknowledgedByClientWithScopedIdentifier:(id)arg1;
- (bool)hasRecordWithScopedIdentifier:(id)arg1;
- (id)recordAcknowledgedByClientWithScopedIdentifier:(id)arg1;
- (id)recordWithScopedIdentifier:(id)arg1 isConfirmed:(bool*)arg2 isStaged:(bool*)arg3;
- (id)recordWithScopedIdentifier:(id)arg1 isFinal:(bool)arg2;
- (id)recordsAcknowledgedByClientWithRelatedScopedIdentifier:(id)arg1 class:(Class)arg2;
- (id)recordsOfClass:(Class)arg1 isFinal:(bool)arg2;
- (id)recordsWithRelatedScopedIdentifier:(id)arg1 class:(Class)arg2 isFinal:(bool)arg3;
- (id)recordsWithRelatedScopedIdentifier:(id)arg1 isFinal:(bool)arg2;
- (id)relatedScopedIdentifierForRecordWithScopedIdentifier:(id)arg1 isFinal:(bool)arg2;
- (bool)remapAllRecordsWithPreviousScopedIdentifier:(id)arg1 newScopedIdentifier:(id)arg2 error:(id*)arg3;
- (id)resourceOfType:(unsigned long long)arg1 forRecordWithScopedIdentifier:(id)arg2 record:(id*)arg3 target:(id*)arg4 error:(id*)arg5;
- (unsigned long long)scopeType;
- (id)targetForRecordWithCloudScopedIdentifier:(id)arg1;
- (id)targetForRecordWithCloudScopedIdentifier:(id)arg1 trustRecordChangeData:(bool)arg2;
- (id)targetForRecordWithSharedCloudScopedIdentifier:(id)arg1;
- (id)targetForRecordWithSharedCloudScopedIdentifier:(id)arg1 trustRecordChangeData:(bool)arg2;
- (bool)updateFinalRecord:(id)arg1 confirmed:(bool)arg2 error:(id*)arg3;
- (bool)updateStagedRecord:(id)arg1 error:(id*)arg2;
- (void)updateStoredTargetsFromTargetMapping:(id)arg1;

@end
