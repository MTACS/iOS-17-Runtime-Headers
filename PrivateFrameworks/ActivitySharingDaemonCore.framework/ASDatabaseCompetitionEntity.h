
@interface ASDatabaseCompetitionEntity : HDDataEntity

+ (id)_competitionsWithPredicate:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (id)_insertCompetition:(id)arg1 database:(id)arg2 error:(id*)arg3;
+ (bool)_insertCompetitions:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (id)allDatabaseCompetitionsWithProfile:(id)arg1 withError:(id*)arg2;
+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)databaseTable;
+ (id)entityEncoderForProfile:(id)arg1 transaction:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(id /* block */)arg5;
+ (long long)protectionClass;
+ (bool)removeAllCompetitionsWithProfile:(id)arg1 error:(id*)arg2;
+ (bool)removeCompetitionsForFriendUUID:(id)arg1 type:(long long)arg2 profile:(id)arg3 withError:(id*)arg4;
+ (bool)saveCompetitions:(id)arg1 profile:(id)arg2 withError:(id*)arg3;
+ (id)uniquedColumns;

@end
