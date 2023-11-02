
@protocol ACActivityAuthorizationXPCServer

@required

- (bool)areActivitiesEnabledForBundleIdentifier:(NSString *)arg1;
- (bool)areActivitiesEnabledForCurrentProcess;
- (bool)areFrequentPushesEnabledForBundleIdentifier:(NSString *)arg1;
- (bool)areFrequentPushesEnabledForCurrentProcess;
- (bool)setActivitiesAuthorizationForBundleIdentifier:(NSString *)arg1 options:(NSData *)arg2 error:(out id*)arg3;
- (bool)setFrequentPushesEnabledForBundleIdentifier:(NSString *)arg1 options:(NSData *)arg2 error:(out id*)arg3;

@end
