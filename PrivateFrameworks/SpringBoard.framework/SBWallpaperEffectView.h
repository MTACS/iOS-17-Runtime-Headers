
@interface SBWallpaperEffectView : PBUIWallpaperEffectViewBase <SBApplicationSceneBackgroundView>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isFullscreen, nonatomic) bool fullscreen;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool needsClassicModeBackground;
@property (nonatomic) bool shouldUseBrightMaterial;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long transformOptions;
@property (nonatomic, readonly) PBUIWallpaperController *wallpaperController;
@property (nonatomic) long long wallpaperStyle;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithWallpaperVariant:(long long)arg1;
- (id)initWithWallpaperVariant:(long long)arg1 transformOptions:(unsigned long long)arg2;
- (id)wallpaperController;

@end
