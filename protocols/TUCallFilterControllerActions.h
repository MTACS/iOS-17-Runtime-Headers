
@protocol TUCallFilterControllerActions <NSObject>

@required

- (bool)containsRestrictedHandle:(TUHandle *)arg1 forBundleIdentifier:(NSString *)arg2 performSynchronously:(bool)arg3;
- (unsigned long long)filterStatusForAddresses:(NSSet *)arg1 forBundleIdentifier:(NSString *)arg2;
- (bool)isUnknownAddress:(NSString *)arg1 normalizedAddress:(NSString *)arg2 forBundleIdentifier:(NSString *)arg3;
- (NSDictionary *)policyForAddresses:(NSSet *)arg1 forBundleIdentifier:(NSString *)arg2;
- (bool)shouldRestrictAddresses:(NSSet *)arg1 forBundleIdentifier:(NSString *)arg2 performSynchronously:(bool)arg3;
- (bool)willRestrictAddresses:(NSSet *)arg1 forBundleIdentifier:(NSString *)arg2;

@end
