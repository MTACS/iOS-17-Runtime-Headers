
@interface PBUIAccessibilityTintView : UIView <PBUIFakeBluring, PBUIWallpaperObserver> {
    <PBUIFakeBlurObserver> * _observer;
    bool  _shouldMatchWallpaperPosition;
    unsigned long long  _transformOptions;
    long long  _variant;
    <PBUIWallpaperLegibilityProviding> * _wallpaperLegibilityProvider;
    <PBUILegacyWallpaperPresenting> * _wallpaperPresenter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isFullscreen, nonatomic) bool fullscreen;
@property (readonly) unsigned long long hash;
@property (nonatomic) <PBUIFakeBlurObserver> *observer;
@property (nonatomic) bool shouldMatchWallpaperPosition;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long transformOptions;
@property (nonatomic, readonly) <PBUIWallpaperLegibilityProviding> *wallpaperLegibilityProvider;
@property (nonatomic, readonly) <PBUILegacyWallpaperPresenting> *wallpaperPresenter;
@property (nonatomic) double zoomScale;

- (void).cxx_destruct;
- (void)_updateBackgroundColor;
- (void)dealloc;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (long long)effectiveStyle;
- (id)initWithVariant:(long long)arg1 wallpaperPresenter:(id)arg2 wallpaperLegibilityProvider:(id)arg3;
- (id)initWithVariant:(long long)arg1 wallpaperViewController:(id)arg2;
- (bool)isFullscreen;
- (id)observer;
- (void)offsetWallpaperBy:(struct CGPoint { double x1; double x2; })arg1;
- (void)requestStyle:(long long)arg1;
- (void)setFullscreen:(bool)arg1;
- (void)setObserver:(id)arg1;
- (void)setShouldMatchWallpaperPosition:(bool)arg1;
- (void)setTransformOptions:(unsigned long long)arg1;
- (void)setZoomScale:(double)arg1;
- (bool)shouldMatchWallpaperPosition;
- (unsigned long long)transformOptions;
- (void)wallpaperDidChangeForVariant:(long long)arg1;
- (id)wallpaperLegibilityProvider;
- (void)wallpaperLegibilitySettingsDidChange:(id)arg1 forVariant:(long long)arg2;
- (id)wallpaperPresenter;
- (double)zoomScale;

@end
