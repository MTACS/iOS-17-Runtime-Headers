
@interface SBSwitcherWallpaperPageContentView : UIView <SBAppSwitcherPageContentView> {
    bool  _active;
    double  _cornerRadius;
    long long  _desiredWallpaperOrientation;
    unsigned long long  _maskedCorners;
    long long  _orientation;
    bool  _visible;
    SBWallpaperEffectView * _wallpaperEffectView;
    long long  _wallpaperStyle;
    BSUIOrientationTransformWrapperView * _wallpaperWrapperView;
}

@property (getter=isActive, nonatomic) bool active;
@property (nonatomic, readonly) bool contentRequiresGroupOpacity;
@property (nonatomic) double cornerRadius;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long desiredWallpaperOrientation;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long maskedCorners;
@property (nonatomic) long long orientation;
@property (readonly) Class superclass;
@property (getter=isVisible, nonatomic) bool visible;
@property (nonatomic, readonly) SBWallpaperEffectView *wallpaperEffectView;
@property (nonatomic) long long wallpaperStyle;

- (void).cxx_destruct;
- (void)_updateCornerRadius;
- (void)_updateWallpaperOrientation;
- (id)_viewForWallpaperWrapper;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_wallpaperFrame;
- (bool)contentRequiresGroupOpacity;
- (double)cornerRadius;
- (long long)desiredWallpaperOrientation;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)invalidate;
- (bool)isActive;
- (bool)isVisible;
- (void)layoutSubviews;
- (unsigned long long)maskedCorners;
- (long long)orientation;
- (void)setActive:(bool)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setDesiredWallpaperOrientation:(long long)arg1;
- (void)setMaskedCorners:(unsigned long long)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setVisible:(bool)arg1;
- (void)setWallpaperStyle:(long long)arg1;
- (id)wallpaperEffectView;
- (long long)wallpaperStyle;

@end
