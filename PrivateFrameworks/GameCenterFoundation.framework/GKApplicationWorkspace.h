
@interface GKApplicationWorkspace : NSObject

// Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation

+ (id)defaultWorkspace;
+ (long long)getPlatformForBundleID:(id)arg1;

- (id)applicationProxyForBundleID:(id)arg1;
- (id)gameDescriptorsWithInstalledBundleVersionsForBundleIDs:(id)arg1;
- (id)gameDescriptorsWithInstalledBundleVersionsForGameDescriptors:(id)arg1;
- (void)openICloudSettings;
- (void)openSoftwareUpdateSettings;
- (id)openURL:(id)arg1;

// Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI

- (bool)applicationIsInstalled:(id)arg1;
- (void)openGameCenterSettings;
- (void)openURL:(id)arg1;

@end
