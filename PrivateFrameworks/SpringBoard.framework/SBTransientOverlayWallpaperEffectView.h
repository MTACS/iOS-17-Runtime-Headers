
@interface SBTransientOverlayWallpaperEffectView : UIView {
    long long  _containerOrientation;
    SBWallpaperEffectView * _wallpaperEffectView;
    _UIDirectionalRotationView * _wallpaperRotationView;
}

@property (nonatomic) long long containerOrientation;
@property (nonatomic) long long wallpaperStyle;

- (void).cxx_destruct;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })_currentWallpaperTransform;
- (void)_updateWallpaperGeometry;
- (long long)containerOrientation;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 wallpaperVariant:(long long)arg2;
- (void)layoutSubviews;
- (bool)prepareToAnimateToTransitionState:(inout struct { long long x1; long long x2; double x3; }*)arg1;
- (void)setContainerOrientation:(long long)arg1;
- (void)setTransitionState:(struct { long long x1; long long x2; double x3; })arg1;
- (void)setWallpaperStyle:(long long)arg1;
- (long long)wallpaperStyle;

@end
