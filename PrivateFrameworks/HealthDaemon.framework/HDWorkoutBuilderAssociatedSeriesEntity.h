
@interface HDWorkoutBuilderAssociatedSeriesEntity : HDHealthEntity

+ (id)allBuilderAssociatedSeriesWithProfile:(id)arg1 error:(id*)arg2;
+ (long long)associateSeries:(id)arg1 toWorkoutBuilderID:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)databaseTable;
+ (bool)enumerateSeriesForBuilder:(id)arg1 transaction:(id)arg2 error:(id*)arg3 block:(id /* block */)arg4;
+ (id)foreignKeys;
+ (long long)protectionClass;
+ (id)seriesForBuilder:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (id)uniquedColumns;

@end
