
@protocol CALNCoreLocationProvider <NSObject>

@required

- (int)authorizationStatusForBundle:(NSBundle *)arg1;
- (int)authorizationStatusForBundleIdentifier:(NSString *)arg1;
- (void)markAsHavingReceivedLocationWithEffectiveBundleIdentifier:(NSString *)arg1;
- (bool)preciseLocationAuthorizedForBundle:(NSBundle *)arg1;
- (bool)preciseLocationAuthorizedForBundleIdentifier:(NSString *)arg1;

@end
