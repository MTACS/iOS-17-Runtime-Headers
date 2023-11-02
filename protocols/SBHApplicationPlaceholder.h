
@protocol SBHApplicationPlaceholder <SBLeafIconDataSource>

@required

- (NSString *)applicationBundleIdentifier;
- (NSString *)applicationDisplayName;

@optional

- (bool)cancel;
- (bool)isActive;
- (bool)isAppClip;
- (bool)isCancelable;
- (bool)isCloudDemoted;
- (bool)isDownloading;
- (bool)isFailed;
- (bool)isInstalling;
- (bool)isNewAppInstallFromStore;
- (bool)isPausable;
- (bool)isPaused;
- (bool)isPrioritizable;
- (bool)isWaiting;
- (bool)pause;
- (bool)prioritize;
- (bool)resume;

@end
