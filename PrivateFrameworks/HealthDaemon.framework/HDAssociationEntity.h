
@interface HDAssociationEntity : HDHealthEntity

+ (bool)_insertEntriesWithParentUUID:(id)arg1 childUUIDsData:(id)arg2 provenance:(long long)arg3 syncIdentity:(long long)arg4 enforceSameSource:(bool)arg5 permitPendingAssociations:(bool)arg6 profile:(id)arg7 error:(id*)arg8;
+ (bool)associateSampleUUIDData:(id)arg1 withSampleUUID:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (bool)associateSampleUUIDs:(id)arg1 withSampleUUID:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (id)associationUUIDsForObjectUUID:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (bool)copyAssociationsFromChildID:(id)arg1 toObjectID:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (bool)copyAssociationsFromObject:(id)arg1 toObject:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (id)countOfObjectsAssociatedWithObjectUUID:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (id)databaseTable;
+ (id)deleteStatementForChildIDsWithTransaction:(id)arg1;
+ (id)deleteStatementForParentIDWithTransaction:(id)arg1;
+ (id)indices;
+ (bool)insertEntriesWithAssociation:(id)arg1 objects:(id)arg2 enforceSameSource:(bool)arg3 profile:(id)arg4 transaction:(id)arg5 error:(id*)arg6;
+ (bool)insertEntriesWithAssociationUUID:(id)arg1 objectUUIDsData:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (id)joinClausesForProperty:(id)arg1;
+ (id)journalEntryForAssociation:(id)arg1 objects:(id)arg2 profile:(id)arg3;
+ (id)objectIDsForAssociationEntityWithPersistentID:(long long)arg1 profile:(id)arg2 error:(id*)arg3;
+ (id)objectUUIDsAssociatedWithObjectUUID:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (id)privateSubEntities;
+ (id)propertyForSyncIdentity;
+ (id)propertyForSyncProvenance;
+ (long long)protectionClass;
+ (bool)realizePendingAssociationsWithTransaction:(id)arg1 startingAnchor:(long long)arg2 error:(id*)arg3;
+ (id)tableAliases;
+ (id)uniquedColumns;

@end
