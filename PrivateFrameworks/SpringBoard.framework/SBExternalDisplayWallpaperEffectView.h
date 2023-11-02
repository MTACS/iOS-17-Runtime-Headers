
@interface SBExternalDisplayWallpaperEffectView : UIView {
    UIView * _blurBackgroundView;
    <SBExternalDisplayWallpaperConfigurations> * _delegate;
    SBWallpaperEffectView * _wallpaperEffectView;
}

@property (nonatomic, retain) UIView *blurBackgroundView;
@property (nonatomic) <SBExternalDisplayWallpaperConfigurations> *delegate;
@property (nonatomic, retain) SBWallpaperEffectView *wallpaperEffectView;

- (void).cxx_destruct;
- (id)blurBackgroundView;
- (id)delegate;
- (bool)enableBlurEffects;
- (id)initExternalDisplayWithDelegate:(id)arg1 wallpaperVariant:(long long)arg2 transformOptions:(unsigned long long)arg3;
- (void)setBlurBackgroundView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setWallpaperEffectView:(id)arg1;
- (id)wallpaperEffectView;

@end
