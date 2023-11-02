
@interface PBUIWallpaperWindowSceneSettings : UIApplicationSceneSettings

@property (nonatomic, readonly, copy) NSString *cachingIdentifier;
@property (nonatomic, readonly) bool disallowHomescreenRasterization;
@property (nonatomic, readonly) bool disallowLockscreenRasterization;
@property (nonatomic, readonly) bool homescreenStyleChangesDelayed;
@property (nonatomic, readonly, copy) PBUIWallpaperWindowSceneStyleTransitionState *homescreenStyleTransitionState;
@property (nonatomic, readonly) double homescreenWallpaperAlpha;
@property (nonatomic, readonly) bool homescreenWallpaperHidden;
@property (nonatomic, readonly) bool liveWallpaperInteractive;
@property (nonatomic, readonly) bool liveWallpaperTouchActive;
@property (nonatomic, readonly) double lockscreenOnlyWallpaperAlpha;
@property (nonatomic, readonly, copy) PBUIWallpaperWindowSceneStyleTransitionState *lockscreenStyleTransitionState;
@property (nonatomic, readonly) double lockscreenWallpaperAlpha;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } lockscreenWallpaperContentsRect;
@property (nonatomic, readonly) bool lockscreenWallpaperHidden;
@property (nonatomic, readonly) bool wallpaperAnimationSuspended;
@property (nonatomic, readonly) bool wallpaperRequired;
@property (nonatomic, readonly) long long wallpaperVariant;

- (id)cachingIdentifier;
- (bool)disallowHomescreenRasterization;
- (bool)disallowLockscreenRasterization;
- (bool)homescreenStyleChangesDelayed;
- (id)homescreenStyleTransitionState;
- (double)homescreenWallpaperAlpha;
- (bool)homescreenWallpaperHidden;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (bool)liveWallpaperInteractive;
- (bool)liveWallpaperTouchActive;
- (double)lockscreenOnlyWallpaperAlpha;
- (id)lockscreenStyleTransitionState;
- (double)lockscreenWallpaperAlpha;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })lockscreenWallpaperContentsRect;
- (bool)lockscreenWallpaperHidden;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;
- (bool)wallpaperAnimationSuspended;
- (bool)wallpaperRequired;
- (long long)wallpaperVariant;

@end
