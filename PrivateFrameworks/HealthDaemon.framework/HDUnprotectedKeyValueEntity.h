
@interface HDUnprotectedKeyValueEntity : HDKeyValueEntity

+ (const char *)_insertStatementKey;
+ (id)badgeForDomain:(long long)arg1 profile:(id)arg2 error:(out id*)arg3;
+ (id)databaseTable;
+ (long long)protectionClass;
+ (bool)setBadge:(id)arg1 forDomain:(long long)arg2 profile:(id)arg3 error:(out id*)arg4;

@end
