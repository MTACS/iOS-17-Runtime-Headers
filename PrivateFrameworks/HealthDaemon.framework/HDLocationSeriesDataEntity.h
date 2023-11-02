
@interface HDLocationSeriesDataEntity : HDSQLiteSchemaEntity <HDHealthEntitySchema>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)_enumerateSeriesForValidation:(long long)arg1 database:(id)arg2 error:(id*)arg3 handler:(id /* block */)arg4;
+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)createTableSQLWithBehavior:(id)arg1;
+ (id)databaseName;
+ (id)databaseTable;
+ (bool)deleteAllSeriesWithDatabase:(id)arg1 error:(id*)arg2;
+ (bool)deleteSeriesDataWithIdentifier:(long long)arg1 database:(id)arg2 error:(id*)arg3;
+ (bool)deleteSeriesDataWithIdentifier:(long long)arg1 timestamps:(id)arg2 database:(id)arg3 error:(id*)arg4;
+ (bool)enumerateSeries:(long long)arg1 database:(id)arg2 startDate:(id)arg3 error:(id*)arg4 handler:(id /* block */)arg5;
+ (bool)enumerateSeries:(long long)arg1 transaction:(id)arg2 error:(id*)arg3 handler:(id /* block */)arg4;
+ (bool)enumerateWithTransaction:(id)arg1 predicate:(id)arg2 error:(id*)arg3 handler:(id /* block */)arg4;
+ (id)foreignKeys;
+ (bool)getRangeAndCountForSeriesIdentifier:(long long)arg1 database:(id)arg2 error:(id*)arg3 handler:(id /* block */)arg4;
+ (bool)hasROWID;
+ (id)indicesWithBehavior:(id)arg1;
+ (bool)insertOrReplaceEntity:(bool)arg1 database:(id)arg2 identifier:(long long)arg3 timestamp:(double)arg4 location:(id)arg5 error:(id*)arg6;
+ (id)primaryKeyColumns;
+ (long long)protectionClass;
+ (id)triggersWithBehavior:(id)arg1;
+ (bool)unitTesting_deleteSeriesDataWithIdentifier:(long long)arg1 timestamp:(id)arg2 database:(id)arg3 error:(id*)arg4;

@end
