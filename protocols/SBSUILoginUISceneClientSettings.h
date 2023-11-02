
@protocol SBSUILoginUISceneClientSettings <NSObject>

@required

- (long long)idleTimerMode;
- (long long)rotationMode;
- (NSString *)statusBarUserNameOverride;
- (unsigned long long)wallpaperMode;

@end
