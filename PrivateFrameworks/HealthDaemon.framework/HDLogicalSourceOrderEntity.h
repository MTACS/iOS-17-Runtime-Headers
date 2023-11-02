
@interface HDLogicalSourceOrderEntity : HDHealthEntity

+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)databaseTable;
+ (bool)enumerateOrderedLogicalSourceIDsForType:(id)arg1 transaction:(id)arg2 error:(id*)arg3 block:(id /* block */)arg4;
+ (bool)enumerateOrderedSourceIDsForType:(id)arg1 transaction:(id)arg2 error:(id*)arg3 block:(id /* block */)arg4;
+ (id)foreignKeys;
+ (id)indices;
+ (id)joinClausesForProperty:(id)arg1;
+ (id)orderedLogicalSourceIDsForType:(id)arg1 userOrdered:(bool*)arg2 profile:(id)arg3 error:(id*)arg4;
+ (id)propertyForSyncIdentity;
+ (id)propertyForSyncProvenance;
+ (long long)protectionClass;
+ (bool)saveOrderedLogicalSourceIDs:(id)arg1 type:(id)arg2 userOrdered:(bool)arg3 syncIdentity:(long long)arg4 profile:(id)arg5 error:(id*)arg6;
+ (id)sourceIDsWithDataType:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
+ (id)sourceIDsWithDataType:(id)arg1 unorderedIDs:(id)arg2 transaction:(id)arg3 error:(id*)arg4;
+ (id)syncIdentityForType:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
+ (id)uniquedColumns;
+ (bool)updateOrderedLogicalSourcesForType:(id)arg1 transaction:(id)arg2 error:(id*)arg3 updateHandler:(id /* block */)arg4;

@end
