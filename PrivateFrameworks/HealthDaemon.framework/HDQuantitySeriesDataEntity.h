
@interface HDQuantitySeriesDataEntity : HDSQLiteSchemaEntity <HDHealthEntitySchema>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)createTableSQLWithBehavior:(id)arg1;
+ (id)databaseTable;
+ (bool)deleteAllSeriesWithDatabase:(id)arg1 error:(id*)arg2;
+ (bool)deleteSeriesDataWithIdentifier:(long long)arg1 database:(id)arg2 error:(id*)arg3;
+ (bool)deleteSeriesDataWithIdentifier:(long long)arg1 timestamps:(id)arg2 database:(id)arg3 error:(id*)arg4;
+ (bool)enumerateSeries:(long long)arg1 after:(double)arg2 inclusive:(bool)arg3 transaction:(id)arg4 error:(id*)arg5 handler:(id /* block */)arg6;
+ (bool)enumerateSeries:(long long)arg1 transaction:(id)arg2 error:(id*)arg3 handler:(id /* block */)arg4;
+ (bool)enumerateWithDatabase:(id)arg1 predicate:(id)arg2 error:(id*)arg3 handler:(id /* block */)arg4;
+ (bool)enumerateWithTransaction:(id)arg1 predicate:(id)arg2 error:(id*)arg3 handler:(id /* block */)arg4;
+ (id)foreignKeys;
+ (bool)getRangeAndCountForSeriesIdentifier:(long long)arg1 transaction:(id)arg2 error:(id*)arg3 handler:(id /* block */)arg4;
+ (bool)hasROWID;
+ (id)indicesWithBehavior:(id)arg1;
+ (bool)insertOrReplaceEntity:(bool)arg1 database:(id)arg2 value:(double)arg3 duration:(double)arg4 timestamp:(double)arg5 identifier:(long long)arg6 error:(id*)arg7;
+ (id)predicateForSeriesIdentifier:(long long)arg1;
+ (id)primaryKeyColumns;
+ (long long)protectionClass;
+ (id)triggersWithBehavior:(id)arg1;

@end
