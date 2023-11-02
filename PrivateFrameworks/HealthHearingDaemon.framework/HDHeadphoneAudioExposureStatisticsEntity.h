
@interface HDHeadphoneAudioExposureStatisticsEntity : HDHealthEntity

+ (id)_bucketFromAllPropertiesRow:(struct HDSQLiteRow { }*)arg1 profile:(id)arg2 error:(id*)arg3;
+ (bool)_enumerateBucketsForProfile:(id)arg1 predicate:(id)arg2 error:(id*)arg3 enumerationHandler:(id /* block */)arg4;
+ (id)_loadBucketsFromProfile:(id)arg1 error:(id*)arg2;
+ (id)_pruneWithNowDate:(id)arg1 limit:(unsigned long long)arg2 profile:(id)arg3 error:(id*)arg4;
+ (bool)_replaceExistingWithBuckets:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (id)_sortOrderingTerms;
+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)databaseTable;
+ (id)indices;
+ (id)insertBucket:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
+ (bool)insertBuckets:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
+ (long long)protectionClass;

- (id)_bucketWithProfile:(id)arg1 error:(id*)arg2;

@end
