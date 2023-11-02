
@interface ASDatabaseCompetitionListEntryEntity : HDDataEntity

+ (id)_insertCompetitionList:(id)arg1 database:(id)arg2 error:(id*)arg3;
+ (bool)_insertCompetitionLists:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)databaseTable;
+ (id)entityEncoderForProfile:(id)arg1 transaction:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(id /* block */)arg5;
+ (bool)enumerateAllCompetitionListsWithProfile:(id)arg1 error:(id*)arg2 handler:(id /* block */)arg3;
+ (long long)protectionClass;
+ (bool)removeAllCompetitionListsWithProfile:(id)arg1 error:(id*)arg2;
+ (bool)saveCompetitionList:(id)arg1 profile:(id)arg2 withError:(id*)arg3;
+ (id)uniquedColumns;

@end
