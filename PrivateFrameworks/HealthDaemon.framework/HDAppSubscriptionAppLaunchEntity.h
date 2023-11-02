
@interface HDAppSubscriptionAppLaunchEntity : HDHealthEntity

+ (unsigned int)appSDKVersionForBundleID:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)databaseTable;
+ (bool)insertOrUpdateAppSDKVersion:(unsigned int)arg1 forBundleID:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (id)launchTimeForBundleID:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (long long)protectionClass;
+ (bool)removeBundleIdentifier:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (bool)setLaunchTime:(id)arg1 forBundleID:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (id)tableAliases;

@end
