
@interface HDQuantitySampleStatisticsEntity : HDHealthEntity

+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)databaseTable;
+ (id)foreignKeys;
+ (long long)protectionClass;
+ (bool)setDiscreteQuantitySampleStatistics:(id)arg1 persistentID:(id)arg2 database:(id)arg3 error:(id*)arg4;

@end
