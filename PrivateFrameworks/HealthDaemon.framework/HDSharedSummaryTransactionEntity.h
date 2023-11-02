
@interface HDSharedSummaryTransactionEntity : HDHealthEntity <HDHealthEntitySchema>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)databaseTable;
+ (bool)deleteAllEntriesWithDatabaseTransaction:(id)arg1 error:(id*)arg2;
+ (bool)enumerateTransactionsWithDatabaseTransaction:(id)arg1 includeNonCommitted:(bool)arg2 error:(id*)arg3 enumerationHandler:(id /* block */)arg4;
+ (id)insertWithUUID:(id)arg1 sourceDevice:(id)arg2 databaseTransaction:(id)arg3 error:(id*)arg4;
+ (id)mostRecentTransactionCreationDateWithDatabaseTransaction:(id)arg1 error:(id*)arg2;
+ (long long)protectionClass;
+ (id)pruneWithProfile:(id)arg1 nowDate:(id)arg2 limit:(unsigned long long)arg3 error:(id*)arg4;
+ (id)transactionEntityWithUUID:(id)arg1 databaseTransaction:(id)arg2 error:(id*)arg3;

- (bool)committedInDatabaseTransaction:(id)arg1 error:(id*)arg2;
- (id)creationDateInDatabaseTransaction:(id)arg1 error:(id*)arg2;
- (bool)deleteWithDatabaseTransaction:(id)arg1 error:(id*)arg2;
- (bool)setCommitted:(bool)arg1 databaseTransaction:(id)arg2 error:(id*)arg3;
- (id)sourceDeviceIdentiferInDatabaseTransaction:(id)arg1 error:(id*)arg2;
- (bool)unit_testSetCreationDate:(id)arg1 databaseTransaction:(id)arg2 error:(id*)arg3;
- (id)uuidInDatabaseTransaction:(id)arg1 error:(id*)arg2;

@end
