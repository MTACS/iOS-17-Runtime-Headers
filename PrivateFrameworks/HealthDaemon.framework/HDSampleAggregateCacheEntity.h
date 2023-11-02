
@interface HDSampleAggregateCacheEntity : HDHealthEntity <HDHealthEntitySchema>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (long long)cachesExistForQueryIdentifier:(id)arg1 sourceEntity:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)databaseTable;
+ (bool)deleteCacheForBucketIndexes:(id)arg1 forQueryIdentifier:(id)arg2 sourceEntity:(id)arg3 generationNumber:(long long)arg4 persistentAnchorDate:(id)arg5 intervalComponents:(id)arg6 profile:(id)arg7 error:(id*)arg8;
+ (bool)enumerateCachedDataForQueryIdentifier:(id)arg1 sourceEntity:(id)arg2 profile:(id)arg3 startIndex:(long long)arg4 endIndex:(long long)arg5 error:(id*)arg6 enumerationHandler:(id /* block */)arg7;
+ (id)foreignKeys;
+ (bool)insertCachedData:(id)arg1 forQueryIdentifier:(id)arg2 sourceEntity:(id)arg3 generationNumber:(long long)arg4 persistentAnchorDate:(id)arg5 intervalComponents:(id)arg6 profile:(id)arg7 error:(id*)arg8;
+ (long long)protectionClass;
+ (id)pruneWithProfile:(id)arg1 nowDate:(id)arg2 limit:(unsigned long long)arg3 error:(id*)arg4;
+ (id)uniquedColumns;

@end
