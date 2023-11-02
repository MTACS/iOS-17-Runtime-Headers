
@interface HDMetadataKeyEntity : HDHealthEntity

+ (id)_entityForKey:(id)arg1 database:(id)arg2 error:(id*)arg3;
+ (id)_insertEntityWithKey:(id)arg1 database:(id)arg2 error:(id*)arg3;
+ (id)_keyForPersistentID:(id)arg1 database:(id)arg2;
+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)databaseTable;
+ (id)entityForKey:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3;
+ (id)insertEntityWithKey:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3;
+ (long long)protectionClass;

@end
