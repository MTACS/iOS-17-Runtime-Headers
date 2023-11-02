
@interface SKPrivacyController : NSObject

+ (long long)_authorizationStatusFromUnderlyingAuthorizationStatus:(long long)arg1;
+ (id)_sharedCloudServiceStatusMonitor;
+ (long long)authorizationStatus;
+ (void)requestAuthorization:(id /* block */)arg1;

@end
