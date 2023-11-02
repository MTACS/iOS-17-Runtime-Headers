
@interface PBUIMutableWallpaperWindowSceneSettings : UIMutableApplicationSceneSettings

@property (nonatomic, copy) NSString *cachingIdentifier;
@property (nonatomic) bool disallowHomescreenRasterization;
@property (nonatomic) bool disallowLockscreenRasterization;
@property (nonatomic) bool homescreenStyleChangesDelayed;
@property (nonatomic, copy) PBUIWallpaperWindowSceneStyleTransitionState *homescreenStyleTransitionState;
@property (nonatomic) double homescreenWallpaperAlpha;
@property (nonatomic) bool homescreenWallpaperHidden;
@property (nonatomic) bool liveWallpaperInteractive;
@property (nonatomic) bool liveWallpaperTouchActive;
@property (nonatomic) double lockscreenOnlyWallpaperAlpha;
@property (nonatomic, copy) PBUIWallpaperWindowSceneStyleTransitionState *lockscreenStyleTransitionState;
@property (nonatomic) double lockscreenWallpaperAlpha;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } lockscreenWallpaperContentsRect;
@property (nonatomic) bool lockscreenWallpaperHidden;
@property (nonatomic) bool wallpaperAnimationSuspended;
@property (nonatomic) bool wallpaperRequired;
@property (nonatomic) long long wallpaperVariant;

- (id)cachingIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
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
- (void)setCachingIdentifier:(id)arg1;
- (void)setDisallowHomescreenRasterization:(bool)arg1;
- (void)setDisallowLockscreenRasterization:(bool)arg1;
- (void)setHomescreenStyleChangesDelayed:(bool)arg1;
- (void)setHomescreenStyleTransitionState:(id)arg1;
- (void)setHomescreenWallpaperAlpha:(double)arg1;
- (void)setHomescreenWallpaperHidden:(bool)arg1;
- (void)setLiveWallpaperInteractive:(bool)arg1;
- (void)setLiveWallpaperTouchActive:(bool)arg1;
- (void)setLockscreenOnlyWallpaperAlpha:(double)arg1;
- (void)setLockscreenStyleTransitionState:(id)arg1;
- (void)setLockscreenWallpaperAlpha:(double)arg1;
- (void)setLockscreenWallpaperContentsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setLockscreenWallpaperHidden:(bool)arg1;
- (void)setWallpaperAnimationSuspended:(bool)arg1;
- (void)setWallpaperRequired:(bool)arg1;
- (void)setWallpaperVariant:(long long)arg1;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;
- (bool)wallpaperAnimationSuspended;
- (bool)wallpaperRequired;
- (long long)wallpaperVariant;

@end
