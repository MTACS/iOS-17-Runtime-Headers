
@interface HDSharedSummaryEntity : HDHealthEntity

+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (long long)countOfObjectsForTransactionID:(long long)arg1 healthDatabase:(id)arg2 error:(id*)arg3;
+ (id)databaseTable;
+ (bool)deleteAllSummariesWithDatabaseTransaction:(id)arg1 error:(id*)arg2;
+ (id)entityWithUUID:(id)arg1 databaseTransaction:(id)arg2 error:(id*)arg3;
+ (bool)enumerateEntitiesWithReuseTransactionID:(unsigned long long)arg1 package:(id)arg2 names:(id)arg3 databaseTransaction:(id)arg4 error:(id*)arg5 enumerationHandler:(id /* block */)arg6;
+ (bool)enumerateEntitiesWithTransactionID:(unsigned long long)arg1 package:(id)arg2 names:(id)arg3 databaseTransaction:(id)arg4 error:(id*)arg5 enumerationHandler:(id /* block */)arg6;
+ (bool)enumerateSummariesWithTransactionID:(unsigned long long)arg1 package:(id)arg2 names:(id)arg3 includedObjectTypes:(id)arg4 databaseTransaction:(id)arg5 error:(id*)arg6 enumerationHandler:(id /* block */)arg7;
+ (id)foreignKeys;
+ (id)insertOrReplaceWithUUID:(id)arg1 package:(id)arg2 name:(id)arg3 version:(id)arg4 compatibilityVersion:(id)arg5 transactionID:(unsigned long long)arg6 summaryData:(id)arg7 databaseTransaction:(id)arg8 error:(id*)arg9;
+ (long long)protectionClass;
+ (bool)reuseSummariesForTransactionID:(unsigned long long)arg1 databaseTransaction:(id)arg2 error:(id*)arg3;
+ (id)uniquedColumns;

- (id)UUIDInDatabaseTransaction:(id)arg1 error:(id*)arg2;
- (id)compatibilityVersionInDatabaseTransaction:(id)arg1 error:(id*)arg2;
- (id)nameInDatabaseTransaction:(id)arg1 error:(id*)arg2;
- (id)packageInDatabaseTransaction:(id)arg1 error:(id*)arg2;
- (id)reuseTransactionIDInDatabaseTransaction:(id)arg1 error:(id*)arg2;
- (bool)setReuseTransactionID:(id)arg1 databaseTransaction:(id)arg2 error:(id*)arg3;
- (bool)setSynced:(bool)arg1 databaseTransaction:(id)arg2 error:(id*)arg3;
- (id)summaryDataInDatabaseTransaction:(id)arg1 error:(id*)arg2;
- (bool)syncedInDatabaseTransaction:(id)arg1 error:(id*)arg2;
- (id)transactionIDInDatabaseTransaction:(id)arg1 error:(id*)arg2;
- (id)versionInDatabaseTransaction:(id)arg1 error:(id*)arg2;

@end
