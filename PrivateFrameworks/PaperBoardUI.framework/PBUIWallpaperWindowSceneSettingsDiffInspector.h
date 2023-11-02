
@interface PBUIWallpaperWindowSceneSettingsDiffInspector : UIApplicationSceneSettingsDiffInspector

- (void)_observeOtherSetting:(unsigned long long)arg1 withBlock:(id /* block */)arg2;
- (void)observeCachingIdentifierWithBlock:(id /* block */)arg1;
- (void)observeDisallowHomescreenRasterizationWithBlock:(id /* block */)arg1;
- (void)observeDisallowLockscreenRasterizationWithBlock:(id /* block */)arg1;
- (void)observeHomescreenStyleChangesDelayedWithBlock:(id /* block */)arg1;
- (void)observeHomescreenStyleTransitionStateWithBlock:(id /* block */)arg1;
- (void)observeHomescreenWallpaperAlphaWithBlock:(id /* block */)arg1;
- (void)observeHomescreenWallpaperHiddenWithBlock:(id /* block */)arg1;
- (void)observeLiveWallpaperInteractiveWithBlock:(id /* block */)arg1;
- (void)observeLiveWallpaperTouchActiveWithBlock:(id /* block */)arg1;
- (void)observeLockscreenOnlyWallpaperAlphaWithBlock:(id /* block */)arg1;
- (void)observeLockscreenStyleTransitionStateWithBlock:(id /* block */)arg1;
- (void)observeLockscreenWallpaperAlphaWithBlock:(id /* block */)arg1;
- (void)observeLockscreenWallpaperContentsRectWithBlock:(id /* block */)arg1;
- (void)observeLockscreenWallpaperHiddenWithBlock:(id /* block */)arg1;
- (void)observeWallpaperAnimationSuspendedWithBlock:(id /* block */)arg1;
- (void)observeWallpaperRequiredWithBlock:(id /* block */)arg1;
- (void)observeWallpaperVariantWithBlock:(id /* block */)arg1;

@end
