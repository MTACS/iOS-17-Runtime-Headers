
@interface HDProfileAuthorizationEntity : HDHealthEntity

+ (id)anyForBundleIdentifier:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)databaseTable;
+ (bool)fetchStatus:(long long*)arg1 profile:(id)arg2 bundleIdentifier:(id)arg3 error:(id*)arg4;
+ (long long)protectionClass;
+ (bool)setStatus:(long long)arg1 profile:(id)arg2 bundleIdentifier:(id)arg3 dateModified:(id)arg4 error:(id*)arg5;
+ (bool)setStatusIfNeeded:(long long)arg1 profile:(id)arg2 bundleIdentifier:(id)arg3 error:(id*)arg4;

- (bool)unitTest_getBundleIdentifier:(id*)arg1 status:(long long*)arg2 dateModified:(id*)arg3 forProfile:(id)arg4 error:(id*)arg5;

@end
