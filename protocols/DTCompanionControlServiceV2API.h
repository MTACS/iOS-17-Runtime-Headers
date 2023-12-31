
@protocol DTCompanionControlServiceV2API <DTXAllowedRPC>

@required

- (NSError *)launchWatchAppForCompanionIdentifier:(NSString *)arg1 options:(NSDictionary *)arg2;
- (NSError *)terminateWatchAppForCompanionIdentifier:(NSString *)arg1 options:(NSDictionary *)arg2;
- (NSError *)willInstallWatchAppForCompanionIdentifier:(NSString *)arg1;

@end
