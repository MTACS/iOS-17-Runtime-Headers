
@interface HDHealthEntity : HDSQLiteEntity <HDHealthEntityEncoding>

+ (id)anyWithPredicate:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3;
+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithBehavior:(id)arg1 count:(unsigned long long*)arg2;
+ (id)columnNamesForTimeOffset;
+ (id)countDistinctForProperty:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3;
+ (long long)countOfObjectsWithPredicate:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3;
+ (id)createTableSQLWithBehavior:(id)arg1;
+ (id)createValidationError:(id)arg1 rowId:(id)arg2;
+ (id)defaultForeignKey;
+ (bool)deleteEntitiesWithPredicate:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3;
+ (id)entityEncoderForProfile:(id)arg1 transaction:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(id /* block */)arg5;
+ (bool)enumerateEntitiesForSyncWithProperties:(id)arg1 predicate:(id)arg2 healthDatabase:(id)arg3 error:(id*)arg4 block:(id /* block */)arg5;
+ (bool)enumerateEntitiesForSyncWithProperties:(id)arg1 predicate:(id)arg2 session:(id)arg3 syncAnchorRange:(struct HDSyncAnchorRange { long long x1; long long x2; })arg4 limit:(unsigned long long)arg5 lastSyncAnchor:(long long*)arg6 healthDatabase:(id)arg7 error:(id*)arg8 block:(id /* block */)arg9;
+ (bool)enumerateEntitiesForSyncWithProperties:(id)arg1 predicate:(id)arg2 syncEntityClass:(Class)arg3 session:(id)arg4 syncAnchorRange:(struct HDSyncAnchorRange { long long x1; long long x2; })arg5 orderingTerms:(id)arg6 limit:(unsigned long long)arg7 lastSyncAnchor:(long long*)arg8 healthDatabase:(id)arg9 error:(id*)arg10 block:(id /* block */)arg11;
+ (bool)enumerateProperties:(id)arg1 withPredicate:(id)arg2 healthDatabase:(id)arg3 error:(id*)arg4 enumerationHandler:(id /* block */)arg5;
+ (id)indicesWithBehavior:(id)arg1;
+ (id)insertOrReplaceEntity:(bool)arg1 healthDatabase:(id)arg2 properties:(id)arg3 error:(id*)arg4 bindingHandler:(id /* block */)arg5;
+ (id)maxRowIDForPredicate:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3;
+ (long long)nextSyncAnchorWithStartAnchor:(long long)arg1 predicate:(id)arg2 session:(id)arg3 healthDatabase:(id)arg4 error:(id*)arg5;
+ (long long)nextSyncAnchorWithStartAnchor:(long long)arg1 predicate:(id)arg2 syncEntityClass:(Class)arg3 session:(id)arg4 orderingTerms:(id)arg5 limit:(unsigned long long)arg6 healthDatabase:(id)arg7 error:(id*)arg8;
+ (bool)performPostFirstJournalMergeCleanupWithTransaction:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (bool)performReadTransactionWithHealthDatabase:(id)arg1 context:(id)arg2 error:(id*)arg3 block:(id /* block */)arg4;
+ (bool)performReadTransactionWithHealthDatabase:(id)arg1 error:(id*)arg2 block:(id /* block */)arg3;
+ (bool)performWriteTransactionWithHealthDatabase:(id)arg1 context:(id)arg2 error:(id*)arg3 block:(id /* block */)arg4;
+ (bool)performWriteTransactionWithHealthDatabase:(id)arg1 context:(id)arg2 error:(id*)arg3 block:(id /* block */)arg4 inaccessibilityHandler:(id /* block */)arg5;
+ (bool)performWriteTransactionWithHealthDatabase:(id)arg1 error:(id*)arg2 block:(id /* block */)arg3;
+ (bool)performWriteTransactionWithHealthDatabase:(id)arg1 error:(id*)arg2 block:(id /* block */)arg3 inaccessibilityHandler:(id /* block */)arg4;
+ (id)predicateForSyncWithPredicate:(id)arg1 syncEntityClass:(Class)arg2 session:(id)arg3 syncAnchorRange:(struct HDSyncAnchorRange { long long x1; long long x2; })arg4;
+ (id)propertyForSyncAnchor;
+ (id)propertyForSyncIdentity;
+ (id)propertyForSyncProvenance;
+ (id)propertyValueForAnyWithProperty:(id)arg1 predicate:(id)arg2 healthDatabase:(id)arg3 error:(id*)arg4;
+ (long long)protectionClass;
+ (long long)sizeOfDatabaseTableInHealthDatabase:(id)arg1 error:(id*)arg2;
+ (id)transactionContextForWriting:(bool)arg1 baseContext:(id)arg2;
+ (id)triggersWithBehavior:(id)arg1;
+ (bool)updateProperties:(id)arg1 predicate:(id)arg2 healthDatabase:(id)arg3 error:(id*)arg4 bindingHandler:(id /* block */)arg5;
+ (id)updateSQLForTimeOffsetWithBindingCount:(unsigned long long*)arg1;
+ (bool)validateEntityWithProfile:(id)arg1 error:(id*)arg2 validationErrorHandler:(id /* block */)arg3;

- (id)dateForProperty:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
- (id)foreignKeyEntity:(Class)arg1 forProperty:(id)arg2 transaction:(id)arg3 error:(id*)arg4;
- (bool)getValuesForProperties:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3 handler:(id /* block */)arg4;
- (id)numberForProperty:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
- (bool)setDate:(id)arg1 forProperty:(id)arg2 transaction:(id)arg3 error:(id*)arg4;
- (bool)setForeignKeyEntity:(id)arg1 forProperty:(id)arg2 transaction:(id)arg3 error:(id*)arg4;
- (bool)setNumber:(id)arg1 forProperty:(id)arg2 transaction:(id)arg3 error:(id*)arg4;
- (bool)setString:(id)arg1 forProperty:(id)arg2 transaction:(id)arg3 error:(id*)arg4;
- (id)stringForProperty:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3;
- (id)stringForProperty:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
- (bool)updateProperties:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3 bindingHandler:(id /* block */)arg4;
- (id)valueForProperty:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3;
- (bool)willDeleteWithTransaction:(id)arg1 error:(id*)arg2;

@end
