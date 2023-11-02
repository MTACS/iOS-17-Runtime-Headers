
@interface HDMetadataValueEntity : HDHealthEntity

+ (bool)_insertMetadataValueWithKeyID:(long long)arg1 objectID:(long long)arg2 value:(id)arg3 database:(id)arg4 error:(id*)arg5;
+ (bool)_updateMetadataValueForKeyID:(long long)arg1 objectID:(long long)arg2 value:(id)arg3 database:(id)arg4 error:(id*)arg5;
+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)databaseTable;
+ (id)deleteStatementForObjectMetadataWithTransaction:(id)arg1;
+ (id)indices;
+ (long long)protectionClass;

@end
