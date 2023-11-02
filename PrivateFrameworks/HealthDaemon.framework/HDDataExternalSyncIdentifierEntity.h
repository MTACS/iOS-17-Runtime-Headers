
@interface HDDataExternalSyncIdentifierEntity : HDHealthEntity

+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)databaseTable;
+ (bool)enumerateValuesWithProfile:(id)arg1 error:(id*)arg2 handler:(id /* block */)arg3;
+ (id)foreignKeys;
+ (id)indices;
+ (bool)insertSyncIdentifierWithProfile:(id)arg1 database:(id)arg2 objectID:(long long)arg3 localSourceID:(long long)arg4 externalSyncObjectCode:(long long)arg5 syncIdentifier:(id)arg6 syncVersion:(id)arg7 deleted:(bool)arg8 errorOut:(id*)arg9;
+ (bool)populateSyncInfoForLocalSourceID:(long long)arg1 externalSyncObjectCode:(long long)arg2 syncIdentifier:(id)arg3 deleted:(bool)arg4 database:(id)arg5 objectIDOut:(id*)arg6 errorOut:(id*)arg7;
+ (bool)populateSyncInfoForObjectID:(long long)arg1 database:(id)arg2 localSourceIDOut:(long long*)arg3 externalSyncObjectCodeOut:(long long*)arg4 syncIdentifierOut:(id*)arg5 syncVersionOut:(id*)arg6 deletedOut:(bool*)arg7 errorOut:(id*)arg8;
+ (long long)protectionClass;

@end
