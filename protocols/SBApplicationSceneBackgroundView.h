
@protocol SBApplicationSceneBackgroundView <NSObject>

@optional

- (bool)isFullscreen;
- (bool)needsClassicModeBackground;
- (void)setFullscreen:(bool)arg1;
- (void)setNeedsClassicModeBackground:(bool)arg1;
- (void)setShouldUseBrightMaterial:(bool)arg1;
- (void)setTransformOptions:(unsigned long long)arg1;
- (void)setWallpaperStyle:(long long)arg1;
- (void)setWallpaperStyle:(long long)arg1 withAnimationSettings:(BSAnimationSettings *)arg2;
- (bool)shouldUseBrightMaterial;
- (unsigned long long)transformOptions;
- (long long)wallpaperStyle;

@end
