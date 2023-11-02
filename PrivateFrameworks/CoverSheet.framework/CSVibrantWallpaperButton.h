
@interface CSVibrantWallpaperButton : SBUIVibrantButton {
    UIView<CSWallpaperView> * _effectView;
    <CSWallpaperColorProvider> * _wallpaperColorProvider;
    <CSWallpaperProviding> * _wallpaperProvider;
}

@property (nonatomic, readonly) UIView<CSWallpaperView> *effectView;
@property (nonatomic) <CSWallpaperColorProvider> *wallpaperColorProvider;
@property (nonatomic) <CSWallpaperProviding> *wallpaperProvider;

- (void).cxx_destruct;
- (void)_updateVibrancy;
- (id)effectView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)setWallpaperColorProvider:(id)arg1;
- (void)setWallpaperProvider:(id)arg1;
- (id)wallpaperColorProvider;
- (id)wallpaperProvider;

@end
