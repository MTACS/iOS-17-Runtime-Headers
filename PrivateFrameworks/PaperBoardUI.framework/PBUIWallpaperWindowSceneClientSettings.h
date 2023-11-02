
@interface PBUIWallpaperWindowSceneClientSettings : UIApplicationSceneClientSettings

@property (nonatomic, readonly, copy) UIColor *homescreenAverageColor;
@property (getter=isHomescreenContentStatic, nonatomic, readonly) bool homescreenContentStatic;
@property (nonatomic, readonly) double homescreenContrast;
@property (nonatomic, readonly, copy) _UILegibilitySettings *homescreenLegibilitySettings;
@property (nonatomic, readonly) double homescreenMinimumWallpaperScale;
@property (nonatomic, readonly) bool homescreenParallaxEnabled;
@property (nonatomic, readonly) double homescreenParallaxFactor;
@property (nonatomic, readonly) double homescreenZoomFactor;
@property (nonatomic, readonly) long long liveWallpaperPlaybackState;
@property (nonatomic, readonly, copy) UIColor *lockscreenAverageColor;
@property (getter=isLockscreenContentLiveWallpaper, nonatomic, readonly) bool lockscreenContentLiveWallpaper;
@property (getter=isLockscreenContentStatic, nonatomic, readonly) bool lockscreenContentStatic;
@property (nonatomic, readonly) double lockscreenContrast;
@property (nonatomic, readonly, copy) _UILegibilitySettings *lockscreenLegibilitySettings;
@property (nonatomic, readonly) double lockscreenMinimumWallpaperScale;
@property (nonatomic, readonly) bool lockscreenParallaxEnabled;
@property (nonatomic, readonly) double lockscreenParallaxFactor;
@property (nonatomic, readonly) double lockscreenZoomFactor;

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
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;

@end
