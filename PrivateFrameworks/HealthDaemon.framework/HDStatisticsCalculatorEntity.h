
@interface HDStatisticsCalculatorEntity : HDHealthEntity

+ (id)calculatorForOwner:(id)arg1 type:(id)arg2 anchor:(id*)arg3 transaction:(id)arg4 error:(id*)arg5;
+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)databaseTable;
+ (bool)enumerateStatisticsForOwner:(id)arg1 transaction:(id)arg2 error:(id*)arg3 block:(id /* block */)arg4;
+ (id)foreignKeys;
+ (Class)ownerEntityClass;
+ (id)ownerEntityReferenceColumn;
+ (long long)protectionClass;
+ (bool)setCalculator:(id)arg1 forOwner:(id)arg2 anchor:(id)arg3 transaction:(id)arg4 error:(id*)arg5;
+ (bool)setStatistics:(id)arg1 forOwner:(id)arg2 anchor:(id)arg3 transaction:(id)arg4 error:(id*)arg5;
+ (id)statisticsForOwner:(id)arg1 type:(id)arg2 anchor:(id*)arg3 transaction:(id)arg4 error:(id*)arg5;
+ (id)uniquedColumns;

@end
