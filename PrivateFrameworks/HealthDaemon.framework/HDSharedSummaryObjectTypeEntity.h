
@interface HDSharedSummaryObjectTypeEntity : HDHealthEntity

+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)databaseTable;
+ (id)foreignKeys;
+ (id)insertWithSummaryID:(long long)arg1 objectTypes:(id)arg2 databaseTransaction:(id)arg3 error:(id*)arg4;
+ (id)objectTypesForSummaryID:(long long)arg1 databaseTransaction:(id)arg2 error:(id*)arg3;
+ (long long)protectionClass;
+ (id)uniquedColumns;

@end
