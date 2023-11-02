
@interface _SBInCallProxySceneBackgroundView : UIView <SBApplicationSceneBackgroundView> {
    <SBApplicationSceneBackgroundView> * _proxyTarget;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isFullscreen, nonatomic) bool fullscreen;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool needsClassicModeBackground;
@property (nonatomic) <SBApplicationSceneBackgroundView> *proxyTarget;
@property (nonatomic) bool shouldUseBrightMaterial;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long transformOptions;
@property (nonatomic) long long wallpaperStyle;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 proxyTarget:(id)arg2;
- (bool)isFullscreen;
- (bool)needsClassicModeBackground;
- (id)proxyTarget;
- (void)setFullscreen:(bool)arg1;
- (void)setNeedsClassicModeBackground:(bool)arg1;
- (void)setProxyTarget:(id)arg1;
- (void)setShouldUseBrightMaterial:(bool)arg1;
- (void)setWallpaperStyle:(long long)arg1;
- (void)setWallpaperStyle:(long long)arg1 withAnimationSettings:(id)arg2;
- (bool)shouldUseBrightMaterial;
- (long long)wallpaperStyle;

@end
