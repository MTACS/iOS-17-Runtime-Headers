
@interface HDSourceEntity : HDHealthEntity

+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)databaseTable;
+ (id)entityEncoderForProfile:(id)arg1 transaction:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(id /* block */)arg5;
+ (bool)enumerateBundleIdentifiersForSourcesForUUIDData:(id)arg1 transaction:(id)arg2 error:(id*)arg3 enumerationHandler:(id /* block */)arg4;
+ (bool)enumerateBundleIdentifiersForSourcesWithPredicate:(id)arg1 database:(id)arg2 error:(id*)arg3 enumerationHandler:(id /* block */)arg4;
+ (id)firstSourceWithPredicate:(id)arg1 database:(id)arg2 error:(id*)arg3;
+ (id)firstSourceWithPredicate:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (id)foreignKeys;
+ (id)indices;
+ (id)insertSourceWithUUID:(id)arg1 logicalSourceID:(long long)arg2 name:(id)arg3 options:(unsigned long long)arg4 isCurrentDevice:(bool)arg5 productType:(id)arg6 deleted:(bool)arg7 modificationDate:(id)arg8 provenance:(long long)arg9 syncIdentity:(long long)arg10 transaction:(id)arg11 error:(id*)arg12;
+ (id)joinClausesForProperty:(id)arg1;
+ (id)propertyForSyncAnchor;
+ (id)propertyForSyncIdentity;
+ (id)propertyForSyncProvenance;
+ (long long)protectionClass;
+ (id)sourceForLocalDeviceWithDatabase:(id)arg1 error:(id*)arg2;
+ (id)sourceForLogicalSourceID:(id)arg1 localDeviceBundleIdentifier:(bool)arg2 localOnly:(bool)arg3 transaction:(id)arg4 error:(id*)arg5;
+ (id)sourcesWithPredicate:(id)arg1 includeDeleted:(bool)arg2 database:(id)arg3 error:(id*)arg4;
+ (id)sourcesWithPredicate:(id)arg1 includeDeleted:(bool)arg2 profile:(id)arg3 error:(id*)arg4;
+ (id)sourcesWithPredicate:(id)arg1 orderingTerms:(id)arg2 includeDeleted:(bool)arg3 database:(id)arg4 error:(id*)arg5;

- (bool)adoptAsLocalSourceWithLogicalSourceID:(id)arg1 UUID:(id)arg2 name:(id)arg3 productType:(id)arg4 profile:(id)arg5 error:(id*)arg6;
- (id)codableSourceWithEncoder:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
- (id)codableSourceWithProfile:(id)arg1 error:(id*)arg2;
- (bool)deleteSourceWithTombstoneLogicalSourceID:(long long)arg1 syncIdentity:(long long)arg2 database:(id)arg3 transaction:(id)arg4 error:(id*)arg5;
- (bool)setName:(id)arg1 profile:(id)arg2 error:(id*)arg3;
- (bool)setOptions:(unsigned long long)arg1 profile:(id)arg2 didUpdate:(bool*)arg3 error:(id*)arg4;
- (id)sourceBundleIdentifierInDatabase:(id)arg1 error:(id*)arg2;
- (id)sourceUUIDWithHealthDatabase:(id)arg1 error:(id*)arg2;
- (id)sourceUUIDWithProfile:(id)arg1 error:(id*)arg2;
- (id)sourceWithProfile:(id)arg1 error:(id*)arg2;
- (id)unitTest_logicalSourceEntityWithHealthDatabase:(id)arg1 error:(id*)arg2;

@end
