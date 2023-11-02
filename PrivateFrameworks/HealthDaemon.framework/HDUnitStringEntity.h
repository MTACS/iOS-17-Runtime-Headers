
@interface HDUnitStringEntity : HDHealthEntity

+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)databaseTable;
+ (long long)protectionClass;
+ (id)storeUnitString:(id)arg1 database:(id)arg2 error:(id*)arg3;

@end
