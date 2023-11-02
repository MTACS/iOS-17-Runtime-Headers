
@interface HDWorkoutBuilderDataSourceEntity : HDHealthEntity

+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)databaseTable;
+ (bool)enumerateDataSourcesForWorkoutBuilder:(id)arg1 transaction:(id)arg2 error:(id*)arg3 block:(id /* block */)arg4;
+ (id)foreignKeys;
+ (long long)protectionClass;
+ (bool)removeDataSourceWithIdentifier:(id)arg1 fromWorkoutBuilder:(id)arg2 transaction:(id)arg3 error:(id*)arg4;
+ (bool)storeDataSourceWithIdentifier:(id)arg1 archivedState:(id)arg2 workoutBuilder:(id)arg3 transaction:(id)arg4 error:(id*)arg5;

@end
