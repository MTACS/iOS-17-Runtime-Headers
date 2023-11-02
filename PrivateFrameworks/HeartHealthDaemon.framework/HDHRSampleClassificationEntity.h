
@interface HDHRSampleClassificationEntity : HDHealthEntity

+ (id)_insertEntityWithSampleUUID:(id)arg1 classification:(long long)arg2 sampleStartDate:(id)arg3 sampleDuration:(double)arg4 sampleTimeZone:(id)arg5 transaction:(id)arg6 error:(id*)arg7;
+ (id)allSampleClassificationsWithTransaction:(id)arg1 error:(id*)arg2;
+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)databaseTable;
+ (bool)deleteAllClassificationsWithTransaction:(id)arg1 error:(id*)arg2;
+ (bool)deleteClassificationWithSampleUUID:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
+ (id)foreignKeys;
+ (id)insertSampleClassification:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
+ (long long)protectionClass;
+ (id)pruneWithProfile:(id)arg1 nowDate:(id)arg2 limit:(unsigned long long)arg3 error:(id*)arg4;
+ (id)sampleClassificationWithSampleUUID:(id)arg1 transaction:(id)arg2 error:(id*)arg3;

@end
