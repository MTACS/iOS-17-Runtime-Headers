
@interface HDWorkoutBuilderAssociatedObjectEntity : HDHealthEntity

+ (long long)associateObject:(id)arg1 timestamp:(double)arg2 withBuilder:(id)arg3 transaction:(id)arg4 error:(id*)arg5;
+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)databaseTable;
+ (bool)enumerateAssociatedUUIDsForBuilder:(id)arg1 transaction:(id)arg2 error:(id*)arg3 block:(id /* block */)arg4;
+ (id)foreignKeys;
+ (long long)protectionClass;
+ (bool)removeAssociationFromBuilder:(id)arg1 toUUID:(id)arg2 transaction:(id)arg3 error:(id*)arg4;
+ (id)uniquedColumns;

@end
