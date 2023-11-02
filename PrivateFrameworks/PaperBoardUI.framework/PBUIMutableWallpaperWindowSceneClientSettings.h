
@interface PBUIMutableWallpaperWindowSceneClientSettings : UIMutableApplicationSceneClientSettings

@property (nonatomic, copy) UIColor *homescreenAverageColor;
@property (getter=isHomescreenContentStatic, nonatomic) bool homescreenContentStatic;
@property (nonatomic) double homescreenContrast;
@property (nonatomic, copy) _UILegibilitySettings *homescreenLegibilitySettings;
@property (nonatomic) double homescreenMinimumWallpaperScale;
@property (nonatomic) bool homescreenParallaxEnabled;
@property (nonatomic) double homescreenParallaxFactor;
@property (nonatomic) double homescreenZoomFactor;
@property (nonatomic) long long liveWallpaperPlaybackState;
@property (nonatomic, copy) UIColor *lockscreenAverageColor;
@property (getter=isLockscreenContentLiveWallpaper, nonatomic) bool lockscreenContentLiveWallpaper;
@property (getter=isLockscreenContentStatic, nonatomic) bool lockscreenContentStatic;
@property (nonatomic) double lockscreenContrast;
@property (nonatomic, copy) _UILegibilitySettings *lockscreenLegibilitySettings;
@property (nonatomic) double lockscreenMinimumWallpaperScale;
@property (nonatomic) bool lockscreenParallaxEnabled;
@property (nonatomic) double lockscreenParallaxFactor;
@property (nonatomic) double lockscreenZoomFactor;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)homescreenAverageColor;
- (double)homescreenContrast;
- (id)homescreenLegibilitySettings;
- (double)homescreenMinimumWallpaperScale;
- (bool)homescreenParallaxEnabled;
- (double)homescreenParallaxFactor;
- (double)homescreenZoomFactor;
- (bool)isHomescreenContentStatic;
- (bool)isLockscreenContentLiveWallpaper;
- (bool)isLockscreenContentStatic;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (long long)liveWallpaperPlaybackState;
- (id)lockscreenAverageColor;
- (double)lockscreenContrast;
- (id)lockscreenLegibilitySettings;
- (double)lockscreenMinimumWallpaperScale;
- (bool)lockscreenParallaxEnabled;
- (double)lockscreenParallaxFactor;
- (double)lockscreenZoomFactor;
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
- (void)setLockscreenContentLiveWallpaper:(bool)arg1;
- (void)setLockscreenContentStatic:(bool)arg1;
- (void)setLockscreenContrast:(double)arg1;
- (void)setLockscreenLegibilitySettings:(id)arg1;
- (void)setLockscreenMinimumWallpaperScale:(double)arg1;
- (void)setLockscreenParallaxEnabled:(bool)arg1;
- (void)setLockscreenParallaxFactor:(double)arg1;
- (void)setLockscreenZoomFactor:(double)arg1;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;

@end
