
@interface HDConceptIndexEntity : HDHealthEntity

+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)conceptIndexEntriesForSampleUUID:(id)arg1 type:(unsigned long long)arg2 profile:(id)arg3 error:(id*)arg4;
+ (id)databaseTable;
+ (bool)enumerateConceptIndexEntriesWithPredicate:(id)arg1 profile:(id)arg2 error:(id*)arg3 enumerationHandler:(id /* block */)arg4;
+ (id)foreignKeys;
+ (id)indices;
+ (bool)insertConceptIndexEntries:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (id)joinClausesForProperty:(id)arg1;
+ (id)numberOfIndexedConceptsWithProfile:(id)arg1 error:(id*)arg2;
+ (long long)protectionClass;
+ (bool)removeAllConceptIndexEntriesWithProfile:(id)arg1 error:(id*)arg2;
+ (id)unitTesting_allConceptIndexEntriesWithProfile:(id)arg1 error:(id*)arg2;

@end
