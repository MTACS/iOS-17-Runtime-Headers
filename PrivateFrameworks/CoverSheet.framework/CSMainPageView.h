
@interface CSMainPageView : CSPageViewBase <CAAnimationDelegate> {
    bool  _fakeWallpaperVisible;
    _UILegibilitySettings * _legibilitySettings;
    CSVibrantWallpaperButton * _logoutButtonView;
    bool  _logoutHugCorner;
    SBWallpaperEffectView * _wallpaperEffectView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool fakeWallpaperVisible;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CSVibrantWallpaperButton *logoutButtonView;
@property (readonly) Class superclass;
@property (nonatomic, retain) SBWallpaperEffectView *wallpaperEffectView;

- (void).cxx_destruct;
- (void)_layoutLogoutButtonView;
- (void)_layoutWallpaperEffectView;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_logoutButtonInsets;
- (void)_updateLogoutButtonForLegibilitySettings;
- (bool)fakeWallpaperVisible;
- (void)layoutSubviews;
- (id)logoutButtonView;
- (id)presentationRegions;
- (void)setFakeWallpaperVisible:(bool)arg1;
- (void)setLogoutButtonView:(id)arg1;
- (void)setWallpaperEffectView:(id)arg1;
- (void)updateForLegibilitySettings:(id)arg1;
- (void)updateForPresentation:(id)arg1;
- (id)wallpaperEffectView;

@end
