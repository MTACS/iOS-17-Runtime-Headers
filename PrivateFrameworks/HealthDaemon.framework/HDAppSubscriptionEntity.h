
@interface HDAppSubscriptionEntity : HDHealthEntity

+ (bool)addSubscriptionWithBundleID:(id)arg1 dataCode:(long long)arg2 updateFrequency:(unsigned long long)arg3 profile:(id)arg4 error:(id*)arg5;
+ (id)allSubscriptionsForBundleID:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (id)allSubscriptionsForType:(long long)arg1 profile:(id)arg2 error:(id*)arg3;
+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)databaseTable;
+ (long long)protectionClass;
+ (bool)removeSubscriptionsWithBundleID:(id)arg1 dataCode:(long long)arg2 profile:(id)arg3 error:(id*)arg4;
+ (bool)setLastAnchor:(id)arg1 lastAckTime:(id)arg2 forBundleID:(id)arg3 dataTypes:(id)arg4 profile:(id)arg5 error:(id*)arg6;
+ (bool)setLaunchTimeHysteresis:(id)arg1 forBundleID:(id)arg2 dataTypes:(id)arg3 profile:(id)arg4 error:(id*)arg5;
+ (id)subscriptionForBundleID:(id)arg1 dataCode:(long long)arg2 profile:(id)arg3 error:(id*)arg4;
+ (id)tableAliases;
+ (id)uniquedColumns;

@end
