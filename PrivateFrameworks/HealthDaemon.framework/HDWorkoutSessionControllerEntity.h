
@interface HDWorkoutSessionControllerEntity : HDHealthEntity

+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)databaseTable;
+ (id)foreignKeys;
+ (long long)protectionClass;
+ (bool)retrieveArchivedStateFromRecoveryIdentifier:(id)arg1 workoutSession:(id)arg2 transaction:(id)arg3 error:(id*)arg4 block:(id /* block */)arg5;
+ (bool)storeArchivedStateWithRecoveryIdentifier:(id)arg1 archivedState:(id)arg2 workoutSession:(id)arg3 transaction:(id)arg4 error:(id*)arg5;
+ (id)uniquedColumns;

@end
