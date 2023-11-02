
@interface HDLogicalSourceEntity : HDHealthEntity

+ (id)bundleIDForLogicalSourceID:(long long)arg1 transaction:(id)arg2 error:(id*)arg3;
+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)databaseTable;
+ (bool)deleteLogicalSourceEntitiesIfNecessaryWithTransaction:(id)arg1 error:(id*)arg2;
+ (id)logicalSourceIDForBundleIdentifier:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
+ (id)lookUpOrCreateLogicalSourceWithBundleIdentifier:(id)arg1 owningAppBundleIdentifier:(id)arg2 transaction:(id)arg3 error:(id*)arg4;
+ (id)ownerBundleIDForLogicalSourceID:(long long)arg1 transaction:(id)arg2 error:(id*)arg3;
+ (long long)protectionClass;

@end
