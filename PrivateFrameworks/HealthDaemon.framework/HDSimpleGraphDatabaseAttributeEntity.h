
@interface HDSimpleGraphDatabaseAttributeEntity : HDSQLiteEntity

+ (bool)addAttributeWithType:(long long)arg1 value:(id)arg2 nodeID:(long long)arg3 version:(long long)arg4 slots:(unsigned long long)arg5 database:(id)arg6 error:(id*)arg7;
+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)databaseTable;
+ (bool)deleteAttributesWithNodeID:(long long)arg1 lessThanVersion:(long long)arg2 database:(id)arg3 error:(id*)arg4;
+ (bool)deleteAttributesWithNodeID:(long long)arg1 type:(long long)arg2 database:(id)arg3 error:(id*)arg4;
+ (bool)enumerateAttributesForNodeWithID:(long long)arg1 skipDeleted:(bool)arg2 database:(id)arg3 error:(id*)arg4 enumerationHandler:(id /* block */)arg5;
+ (bool)enumerateAttributesWithPredicate:(id)arg1 skipDeleted:(bool)arg2 database:(id)arg3 error:(id*)arg4 enumerationHandler:(id /* block */)arg5;
+ (id)foreignKeys;
+ (id)indices;
+ (long long)maxVersion:(long long*)arg1 slots:(unsigned long long*)arg2 nodeID:(long long)arg3 type:(long long)arg4 database:(id)arg5 error:(id*)arg6;
+ (id)predicateForAttributesWithType:(long long)arg1;
+ (id)uniquedColumns;
+ (bool)updateSlots:(unsigned long long)arg1 nodeID:(long long)arg2 type:(long long)arg3 database:(id)arg4 error:(id*)arg5;

- (id)init;

@end
