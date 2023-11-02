
@interface HDFitnessFriendActivitySnapshotEntity : HDSampleEntity

+ (bool)addCodableObject:(id)arg1 toCollection:(id)arg2;
+ (id)codableObjectsFromObjectCollection:(id)arg1;
+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)databaseTable;
+ (id)entityEncoderForProfile:(id)arg1 transaction:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(id /* block */)arg5;
+ (bool)enumerateSnapshotsWithPredicate:(id)arg1 anchor:(id*)arg2 profile:(id)arg3 error:(id*)arg4 handler:(id /* block */)arg5;
+ (id)insertDataObject:(id)arg1 withProvenance:(id)arg2 inDatabase:(id)arg3 persistentID:(id)arg4 error:(id*)arg5;
+ (bool)isConcreteEntity;
+ (id)mergeDataObject:(id)arg1 provenance:(id)arg2 profile:(id)arg3 transaction:(id)arg4 error:(id*)arg5 insertHandler:(id /* block */)arg6;
+ (long long)protectionClass;
+ (bool)supportsObjectMerging;
+ (id)uniquedColumns;

@end
