
@interface HDSimpleGraphDatabaseNodeEntity : HDSQLiteEntity

+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)databaseTable;
+ (bool)deleteNodeWithID:(long long)arg1 database:(id)arg2 error:(id*)arg3;
+ (id)disambiguatedSQLForProperty:(id)arg1;
+ (bool)enumerateNodesWithPredicate:(id)arg1 skipDeleted:(bool)arg2 limit:(unsigned long long)arg3 database:(id)arg4 error:(id*)arg5 enumerationHandler:(id /* block */)arg6;
+ (bool)insertNodeWithID:(long long)arg1 version:(long long)arg2 slots:(unsigned long long)arg3 deleted:(bool)arg4 database:(id)arg5 error:(id*)arg6;
+ (id)joinClausesForProperty:(id)arg1;
+ (id)nodeEntityForeignKey;
+ (id)nodeForID:(long long)arg1 database:(id)arg2 error:(id*)arg3;
+ (bool)updateNodeWithID:(long long)arg1 version:(long long)arg2 slots:(unsigned long long)arg3 deleted:(bool)arg4 database:(id)arg5 error:(id*)arg6;

- (id)init;

@end
