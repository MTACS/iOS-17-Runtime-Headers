
@interface SBSpotlightLegibilityProvider : NSObject <PBUIWallpaperObserver, SBFLegibilitySettingsProvider> {
    _UILegibilitySettings * _currentLegibilitySettings;
    <SBFLegibilitySettingsProviderDelegate> * _delegate;
    long long  _variant;
    SBWallpaperController * _wallpaperController;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBFLegibilitySettingsProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) _UILegibilitySettings *legibilitySettings;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_calculateLegibilitySettings;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_rectForSpotlightHeader;
- (void)dealloc;
- (id)delegate;
- (id)initWithVariant:(long long)arg1;
- (id)initWithVariant:(long long)arg1 wallpaperController:(id)arg2;
- (id)legibilitySettings;
- (void)setDelegate:(id)arg1;
- (void)wallpaperDidChangeForVariant:(long long)arg1;
- (void)wallpaperGeometryDidChangeForVariant:(long long)arg1;
- (void)wallpaperLegibilitySettingsDidChange:(id)arg1 forVariant:(long long)arg2;

@end
