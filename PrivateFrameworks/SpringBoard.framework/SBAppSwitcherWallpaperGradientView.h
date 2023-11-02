
@interface SBAppSwitcherWallpaperGradientView : _UIBackdropView {
    struct SBSwitcherGradientWallpaperAttributes { 
        double leadingAlpha; 
        double trailingAlpha; 
    }  _attributes;
    CAGradientLayer * _gradientLayer;
}

@property (nonatomic) struct SBSwitcherGradientWallpaperAttributes { double x1; double x2; } attributes;

- (void).cxx_destruct;
- (void)_updateGradientColors;
- (struct SBSwitcherGradientWallpaperAttributes { double x1; double x2; })attributes;
- (id)initWithPrivateStyle:(long long)arg1;
- (void)layoutSubviews;
- (void)setAttributes:(struct SBSwitcherGradientWallpaperAttributes { double x1; double x2; })arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
