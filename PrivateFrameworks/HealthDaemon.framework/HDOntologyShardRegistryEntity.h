
@interface HDOntologyShardRegistryEntity : HDSQLiteEntity

+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)databaseTable;
+ (bool)enumerateEntriesWithPredicate:(id)arg1 orderingTerms:(id)arg2 database:(id)arg3 error:(id*)arg4 enumerationHandler:(id /* block */)arg5;
+ (bool)insertEntry:(id)arg1 database:(id)arg2 error:(id*)arg3;
+ (id)nextAvailableSlotInAllowedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 predicate:(id)arg2 database:(id)arg3 error:(id*)arg4;
+ (id)uniquedColumns;

- (id)init;

@end
