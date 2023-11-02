
@interface SGAppLaunchHistory : NSObject

- (unsigned long long)launchCountForBundleId:(id)arg1 afterDate:(id)arg2 limit:(unsigned long long)arg3;
- (id)launchCountsForBundleIds:(id)arg1 afterDate:(id)arg2 limit:(unsigned long long)arg3;

@end
