
@interface RMFeatureFlags : NSObject

+ (bool)hasBridgeOS;
+ (bool)isAppleInternal;
+ (bool)isAuthenticationServicesSubscriberEnabled;
+ (bool)isBatteryHealthStatusEnabled;
+ (bool)isDiskManagementSubscriberEnabled;
+ (bool)isFileConduitEnabled;
+ (bool)isHTTPConduitEnabled;
+ (bool)isManagedAppsEnabled;
+ (bool)isManagedConfigurationFilesEnabled;
+ (bool)isNetworkWiFiConfigurationEnabled;
+ (bool)isScreenSharingSubscriberEnabled;
+ (bool)isServicesSubscriberEnabled;
+ (bool)isWatchEnrollmentSubscriberEnabled;

@end
