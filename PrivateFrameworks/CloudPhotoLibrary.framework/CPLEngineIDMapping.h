
@interface CPLEngineIDMapping : CPLEngineStorage <CPLAbstractObject, CPLEngineIDMapping>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CPLPlatformObject *platformObject;
@property (readonly) Class superclass;

- (bool)addAddEventForRecordWithLocalScopedIdentifier:(id)arg1 direction:(unsigned long long)arg2 error:(id*)arg3;
- (bool)addCloudScopedIdentifier:(id)arg1 forLocalScopedIdentifier:(id)arg2 isFinal:(bool)arg3 direction:(unsigned long long)arg4 error:(id*)arg5;
- (bool)addDeleteEventForRecordWithLocalScopedIdentifier:(id)arg1 direction:(unsigned long long)arg2 error:(id*)arg3;
- (id)cloudScopedIdentifierForLocalScopedIdentifier:(id)arg1 isFinal:(bool*)arg2;
- (bool)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long*)arg3 error:(id*)arg4;
- (id)firstAvailableCloudScopedIdentifierForProposedCloudScopedIdentifier:(id)arg1;
- (bool)hasPendingIdentifiers;
- (id)localScopedIdentifierForCloudScopedIdentifier:(id)arg1 isFinal:(bool*)arg2;
- (id)localScopedIdentifierForCloudScopedIdentifierIncludeRemappedRecords:(id)arg1;
- (bool)markAllPendingIdentifiersForScopeWithIdentifier:(id)arg1 asFinalWithError:(id*)arg2;
- (bool)removeMappingForCloudScopedIdentifier:(id)arg1 error:(id*)arg2;
- (bool)resetAllFinalCloudIdentifiersForScopeWithIdentifier:(id)arg1 error:(id*)arg2;
- (unsigned long long)scopeType;
- (bool)setFinalCloudScopedIdentifier:(id)arg1 forPendingCloudScopedIdentifier:(id)arg2 error:(id*)arg3;
- (id)setupCloudScopedIdentifier:(id)arg1 forLocalScopedIdentifier:(id)arg2 isFinal:(bool)arg3 direction:(unsigned long long)arg4 error:(id*)arg5;

@end
