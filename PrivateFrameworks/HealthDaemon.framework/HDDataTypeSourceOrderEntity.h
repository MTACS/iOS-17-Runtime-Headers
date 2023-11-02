
@interface HDDataTypeSourceOrderEntity : HDHealthEntity

+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)databaseTable;
+ (bool)enumerateOrderedSourceIDsForType:(id)arg1 profile:(id)arg2 error:(id*)arg3 block:(id /* block */)arg4;
+ (bool)enumerateOrderedSourceIDsForType:(id)arg1 profile:(id)arg2 transaction:(id)arg3 error:(id*)arg4 block:(id /* block */)arg5;
+ (id)foreignKeys;
+ (id)indices;
+ (id)joinClausesForProperty:(id)arg1;
+ (id)orderedSourceIDsForType:(id)arg1 userOrdered:(bool*)arg2 profile:(id)arg3 error:(id*)arg4;
+ (id)propertyForSyncProvenance;
+ (long long)protectionClass;
+ (bool)saveOrderedSourceIDs:(id)arg1 type:(id)arg2 userOrdered:(bool)arg3 profile:(id)arg4 error:(id*)arg5;
+ (id)tableAliases;
+ (bool)updateOrderedSourcesForType:(id)arg1 profile:(id)arg2 error:(id*)arg3 updateHandler:(id /* block */)arg4;

@end
