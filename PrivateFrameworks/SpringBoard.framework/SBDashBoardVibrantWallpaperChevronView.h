
@interface SBDashBoardVibrantWallpaperChevronView : SBUIChevronView <SBUILegibility> {
    SBWallpaperEffectView * _effectView;
    _UILegibilitySettings * _legibilitySettings;
    double  _legibilityStrength;
    <CSWallpaperColorProvider> * _wallpaperColorProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _UILegibilitySettings *legibilitySettings;
@property (nonatomic) double strength;
@property (readonly) Class superclass;
@property (nonatomic) <CSWallpaperColorProvider> *wallpaperColorProvider;

- (void).cxx_destruct;
- (void)_updateVibrancy;
- (id)init;
- (id)initWithColor:(id)arg1;
- (id)legibilitySettings;
- (void)setLegibilitySettings:(id)arg1;
- (void)setStrength:(double)arg1;
- (void)setWallpaperColorProvider:(id)arg1;
- (double)strength;
- (id)wallpaperColorProvider;

@end
