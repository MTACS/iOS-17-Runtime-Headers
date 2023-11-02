
@interface BCSAppRanker : NSObject

+ (id)bundleIdentifierOfLastUsedAppForURL:(id)arg1;
+ (id)orderAppLinks:(id)arg1 forLastUsedApp:(id)arg2;
+ (id)orderApplicationRecords:(id)arg1 forPreferredBundleID:(id)arg2;
+ (id)orderApps:(id)arg1 forLastUsedApp:(id)arg2;
+ (void)setLastUsedApp:(id)arg1 forURL:(id)arg2;

@end
