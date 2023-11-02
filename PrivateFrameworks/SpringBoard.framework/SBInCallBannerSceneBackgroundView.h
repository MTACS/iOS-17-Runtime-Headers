
@interface SBInCallBannerSceneBackgroundView : UIView <SBApplicationSceneBackgroundView> {
    _UIBackdropView * _backdropView;
    bool  _fullscreen;
    unsigned long long  _transformOptions;
    double  _wallpaperAlpha;
    SBWallpaperEffectView * _wallpaperEffectView;
    long long  _wallpaperStyle;
    long long  _wallpaperVariant;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isFullscreen, nonatomic) bool fullscreen;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool needsClassicModeBackground;
@property (nonatomic) bool shouldUseBrightMaterial;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long transformOptions;
@property (nonatomic) double wallpaperAlpha;
@property (nonatomic) long long wallpaperStyle;

- (void).cxx_destruct;
- (void)_updateBackdropView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 wallpaperVariant:(long long)arg2 transformOptions:(unsigned long long)arg3;
- (bool)isFullscreen;
- (void)layoutSubviews;
- (void)setFullscreen:(bool)arg1;
- (void)setWallpaperAlpha:(double)arg1;
- (void)setWallpaperStyle:(long long)arg1;
- (double)wallpaperAlpha;
- (long long)wallpaperStyle;

@end
