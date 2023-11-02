
@interface HDDataEntity : HDHealthEntity <HDSQLiteEntity>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)_deletedEntityClass;
+ (Class)_entityClassForDeletion;
+ (id)_insertDataObject:(id)arg1 withProvenanceID:(id)arg2 inDatabase:(id)arg3 error:(id*)arg4;
+ (bool)_removeObjectWithPersistentID:(long long)arg1 database:(id)arg2 error:(id*)arg3;
+ (bool)acceptsObject:(id)arg1;
+ (bool)addCodableObject:(id)arg1 toCollection:(id)arg2;
+ (id)anyInDatabase:(id)arg1 predicate:(id)arg2 error:(id*)arg3;
+ (id)attachmentObjectIdentifierForSampleWithUUID:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
+ (Class)baseDataEntityClass;
+ (id)codableObjectsFromObjectCollection:(id)arg1;
+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)columnNamesForTimeOffset;
+ (long long)compareForReplacmentWithObject:(id)arg1 existingObject:(id)arg2;
+ (long long)countOfObjectsWithPredicate:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3;
+ (id)dataEntityForObject:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (id)dataEntityForObject:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
+ (id)databaseTable;
+ (id)defaultForeignKey;
+ (void)deleteDataObjects:(id)arg1 restrictedSourceEntities:(id)arg2 failIfNotFound:(bool)arg3 profile:(id)arg4 recursiveDeleteAuthorizationBlock:(id /* block */)arg5 completionHandler:(id /* block */)arg6;
+ (id)deleteStatementsForRelatedEntitiesWithTransaction:(id)arg1;
+ (id)disambiguatedSQLForProperty:(id)arg1;
+ (id)entityEncoderForProfile:(id)arg1 transaction:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(id /* block */)arg5;
+ (id)entityEnumeratorWithProfile:(id)arg1;
+ (bool)enumerateAssociatedObjectsForIdentifier:(long long)arg1 inDatabase:(id)arg2 error:(id*)arg3 associatedObjectHandler:(id /* block */)arg4;
+ (id)foreignKeys;
+ (bool)generateSyncObjectsForSession:(id)arg1 syncEntityClass:(Class)arg2 predicate:(id)arg3 syncAnchorRange:(struct HDSyncAnchorRange { long long x1; long long x2; })arg4 profile:(id)arg5 messageHandler:(id)arg6 error:(id*)arg7;
+ (id)hk_timeZoneEncodingOptions;
+ (id)indices;
+ (id)insertDataObject:(id)arg1 withProvenance:(id)arg2 inDatabase:(id)arg3 persistentID:(id)arg4 error:(id*)arg5;
+ (void)insertDataObjects:(id)arg1 insertionContext:(id)arg2 profile:(id)arg3 completionHandler:(id /* block */)arg4;
+ (bool)isBackedByTable;
+ (bool)isConcreteEntity;
+ (id)joinClausesForProperty:(id)arg1;
+ (bool)journalObjects:(id)arg1 insertionContext:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (id)mergeDataObject:(id)arg1 provenance:(id)arg2 profile:(id)arg3 transaction:(id)arg4 error:(id*)arg5 insertHandler:(id /* block */)arg6;
+ (id /* block */)objectInsertionFilterForProfile:(id)arg1;
+ (id)objectWithID:(id)arg1 encodingOptions:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (id)objectWithUUID:(id)arg1 encodingOptions:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (id)orderingTermForSortDescriptor:(id)arg1;
+ (bool)participatesInInsertion;
+ (id)predicateForObjectsFromLocalSourceWithBundleIdentifier:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (id)predicateMatchingPreferredEntityTypeIfRequiredWithPredicate:(id)arg1;
+ (long long)preferredEntityType;
+ (id)propertyForSyncIdentity;
+ (id)propertyForSyncProvenance;
+ (long long)protectionClass;
+ (bool)replaceExistingObject:(id)arg1 existingObjectID:(id)arg2 replacementObject:(id)arg3 replacementObjectID:(id)arg4 profile:(id)arg5 transaction:(id)arg6 error:(id*)arg7;
+ (bool)requiresSampleTypePredicate;
+ (long long)shouldInsertObject:(id)arg1 sourceID:(id)arg2 profile:(id)arg3 transaction:(id)arg4 objectToReplace:(id*)arg5 objectID:(id*)arg6 error:(id*)arg7;
+ (id)sourceIDForObjectID:(id)arg1 type:(long long)arg2 profile:(id)arg3 errorOut:(id*)arg4;
+ (id)sourceIDsForObjectsOfType:(long long)arg1 profile:(id)arg2 predicate:(id)arg3 error:(id*)arg4;
+ (bool)supportsObjectMerging;

@end
