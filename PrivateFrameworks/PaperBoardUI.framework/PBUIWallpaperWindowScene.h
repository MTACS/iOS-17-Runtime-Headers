
@interface PBUIWallpaperWindowScene : UIWindowScene {
    bool  _homescreenWallpaperHidden;
    bool  _lockscreenWallpaperHidden;
    PBUIImageSlotRepository * _wallpaperEffectImageSlots;
}

@property (nonatomic, readonly, copy) NSString *cachingIdentifier;
@property (nonatomic, readonly) bool disallowHomescreenRasterization;
@property (nonatomic, readonly) bool disallowLockscreenRasterization;
@property (nonatomic, copy) UIColor *homescreenAverageColor;
@property (getter=isHomescreenContentStatic, nonatomic) bool homescreenContentStatic;
@property (nonatomic) double homescreenContrast;
@property (nonatomic, copy) _UILegibilitySettings *homescreenLegibilitySettings;
@property (nonatomic) double homescreenMinimumWallpaperScale;
@property (nonatomic) bool homescreenParallaxEnabled;
@property (nonatomic) double homescreenParallaxFactor;
@property (nonatomic, readonly) bool homescreenStyleChangesDelayed;
@property (nonatomic, readonly, copy) PBUIWallpaperWindowSceneStyleTransitionState *homescreenStyleTransitionState;
@property (nonatomic, readonly) double homescreenWallpaperAlpha;
@property (nonatomic, readonly) bool homescreenWallpaperHidden;
@property (nonatomic) double homescreenZoomFactor;
@property (nonatomic, readonly) bool liveWallpaperInteractive;
@property (nonatomic) long long liveWallpaperPlaybackState;
@property (nonatomic, readonly) bool liveWallpaperTouchActive;
@property (nonatomic, copy) UIColor *lockscreenAverageColor;
@property (getter=isLockscreenContentLiveWallpaper, nonatomic) bool lockscreenContentIsLiveWallpaper;
@property (getter=isLockscreenContentStatic, nonatomic) bool lockscreenContentStatic;
@property (nonatomic) double lockscreenContrast;
@property (nonatomic, copy) _UILegibilitySettings *lockscreenLegibilitySettings;
@property (nonatomic) double lockscreenMinimumWallpaperScale;
@property (nonatomic, readonly) double lockscreenOnlyWallpaperAlpha;
@property (nonatomic) bool lockscreenParallaxEnabled;
@property (nonatomic) double lockscreenParallaxFactor;
@property (nonatomic, readonly, copy) PBUIWallpaperWindowSceneStyleTransitionState *lockscreenStyleTransitionState;
@property (nonatomic, readonly) double lockscreenWallpaperAlpha;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } lockscreenWallpaperContentsRect;
@property (nonatomic, readonly) bool lockscreenWallpaperHidden;
@property (nonatomic) double lockscreenZoomFactor;
@property (nonatomic, readonly) bool wallpaperAnimationSuspended;
@property (nonatomic, readonly) bool wallpaperRequired;
@property (nonatomic, readonly) long long wallpaperVariant;

- (void).cxx_destruct;
- (void)_handleImageSlotRequestAction:(id)arg1;
- (void)_handlePreheatAction:(id)arg1;
- (void)_handleUpdateAndPrewarmAction:(id)arg1;
- (void)_handleUpdateLocationsAction:(id)arg1;
- (void)_handleWallpaperEffectImageRequestAction:(id)arg1;
- (void)_updateDisallowRasterizationForHomescreen:(bool)arg1 lockscreen:(bool)arg2;
- (void)_updateHomescreenStyleChangesDelayed:(bool)arg1;
- (void)_updateHomescreenStyleTransitionStateTo:(id)arg1 from:(id)arg2;
- (void)_updateHomescreenWallpaperAlpha:(double)arg1;
- (void)_updateLiveWallpaperInteractive:(bool)arg1;
- (void)_updateLiveWallpaperTouchActive:(bool)arg1;
- (void)_updateLockscreenOnlyWallpaperAlpha:(double)arg1;
- (void)_updateLockscreenStyleTransitionStateTo:(id)arg1 from:(id)arg2;
- (void)_updateLockscreenWallpaperAlpha:(double)arg1;
- (void)_updateLockscreenWallpaperContentsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_updateWallpaperAnimationSuspended:(bool)arg1;
- (void)_updateWallpaperHiddenForHomescreen:(bool)arg1 lockscreen:(bool)arg2;
- (void)_updateWallpaperRequired:(bool)arg1;
- (void)_updateWallpaperSceneClientSettingsWithBlock:(id /* block */)arg1;
- (void)_updateWallpaperVariant:(long long)arg1 inAnimationSettings:(id)arg2 outAnimationSettings:(id)arg3;
- (id)_wallpaperSceneClientSettings;
- (id)_wallpaperSceneSettings;
- (id)cachingIdentifier;
- (bool)disallowHomescreenRasterization;
- (bool)disallowLockscreenRasterization;
- (id)homescreenAverageColor;
- (double)homescreenContrast;
- (id)homescreenLegibilitySettings;
- (double)homescreenMinimumWallpaperScale;
- (bool)homescreenParallaxEnabled;
- (double)homescreenParallaxFactor;
- (bool)homescreenStyleChangesDelayed;
- (id)homescreenStyleTransitionState;
- (double)homescreenWallpaperAlpha;
- (bool)homescreenWallpaperHidden;
- (double)homescreenZoomFactor;
- (bool)isHomescreenContentStatic;
- (bool)isLockscreenContentLiveWallpaper;
- (bool)isLockscreenContentStatic;
- (bool)liveWallpaperInteractive;
- (long long)liveWallpaperPlaybackState;
- (bool)liveWallpaperTouchActive;
- (id)lockscreenAverageColor;
- (double)lockscreenContrast;
- (id)lockscreenLegibilitySettings;
- (double)lockscreenMinimumWallpaperScale;
- (double)lockscreenOnlyWallpaperAlpha;
- (bool)lockscreenParallaxEnabled;
- (double)lockscreenParallaxFactor;
- (id)lockscreenStyleTransitionState;
- (double)lockscreenWallpaperAlpha;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })lockscreenWallpaperContentsRect;
- (bool)lockscreenWallpaperHidden;
- (double)lockscreenZoomFactor;
- (void)noteWallpaperDidChangeForVariant:(long long)arg1;
- (void)noteWallpaperDidCompleteWallpaperChange;
- (void)noteWallpaperWillChangeForVariant:(long long)arg1;
- (void)setHomescreenAverageColor:(id)arg1;
- (void)setHomescreenContentStatic:(bool)arg1;
- (void)setHomescreenContrast:(double)arg1;
- (void)setHomescreenLegibilitySettings:(id)arg1;
- (void)setHomescreenMinimumWallpaperScale:(double)arg1;
- (void)setHomescreenParallaxEnabled:(bool)arg1;
- (void)setHomescreenParallaxFactor:(double)arg1;
- (void)setHomescreenZoomFactor:(double)arg1;
- (void)setLiveWallpaperPlaybackState:(long long)arg1;
- (void)setLockscreenAverageColor:(id)arg1;
- (void)setLockscreenContentIsLiveWallpaper:(bool)arg1;
- (void)setLockscreenContentStatic:(bool)arg1;
- (void)setLockscreenContrast:(double)arg1;
- (void)setLockscreenLegibilitySettings:(id)arg1;
- (void)setLockscreenMinimumWallpaperScale:(double)arg1;
- (void)setLockscreenParallaxEnabled:(bool)arg1;
- (void)setLockscreenParallaxFactor:(double)arg1;
- (void)setLockscreenZoomFactor:(double)arg1;
- (bool)wallpaperAnimationSuspended;
- (bool)wallpaperRequired;
- (long long)wallpaperVariant;

@end
