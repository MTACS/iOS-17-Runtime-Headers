
@protocol SBLoginAppSceneHosterDelegate

@required

- (void)sceneInvalidated;
- (void)sceneUpdatedIdleTimerMode:(long long)arg1;
- (void)sceneUpdatedRotationMode:(long long)arg1;
- (void)sceneUpdatedStatusBarUserName:(NSString *)arg1;
- (void)sceneUpdatedWallpaperMode:(unsigned long long)arg1;

@end
