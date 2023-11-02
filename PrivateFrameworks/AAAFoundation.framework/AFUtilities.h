
@interface AFUtilities : NSObject

+ (id)bundleIdentifier;
+ (id)bundleVersion;
+ (id)currentApplicationIdentifier;
+ (id)currentApplicationVersion;
+ (bool)isInternalBuild;
+ (void)launchPhotosApplication;
+ (void)launchSoftwareUpdate;
+ (void)openAppleIDPref;
+ (bool)openAppleIDPrefWithLaunchParameters:(id)arg1;
+ (void)openApplicationWithBundleID:(id)arg1;
+ (void)openEnergySaverPref;
+ (void)openInternetAccountPref;
+ (void)openNetworkPref;
+ (void)openParentalControlPref;
+ (void)openSecurityPref;
+ (void)openSharingPref;
+ (void)openUsersAndGroupsPref;
+ (bool)screenLockIsEnabled;
+ (id)urlForBundleIdentifier:(id)arg1;

@end
