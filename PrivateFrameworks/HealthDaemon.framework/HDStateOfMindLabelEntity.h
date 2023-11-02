
@interface HDStateOfMindLabelEntity : HDHealthEntity

+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)databaseTable;
+ (id)foreignKeys;
+ (bool)insertLabelsForObjectID:(long long)arg1 labels:(id)arg2 transaction:(id)arg3 error:(id*)arg4;
+ (id)labelsForObjectID:(long long)arg1 transaction:(id)arg2 error:(id*)arg3;
+ (id)predicateForLabelsForObjectID:(long long)arg1;
+ (long long)protectionClass;

@end
