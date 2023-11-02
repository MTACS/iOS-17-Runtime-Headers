
@interface SPUIDynamicKeyboardVisualEffectView : UIView {
    UIView * _colorView;
    MTMaterialView * _featheredBlur;
    UIView * _gaussianBlurView;
    UIView * _gradientView;
    UIView * _keyboardVisualEffectView;
    double  _searchFieldHeight;
}

@property (retain) UIView *colorView;
@property (retain) MTMaterialView *featheredBlur;
@property (retain) UIView *gaussianBlurView;
@property (retain) UIView *gradientView;
@property (nonatomic) bool hideFeatheredBlur;
@property (nonatomic) bool hideVisualEffectView;
@property (retain) UIView *keyboardVisualEffectView;
@property (nonatomic) double searchFieldHeight;

- (void).cxx_destruct;
- (id)colorView;
- (void)didMoveToWindow;
- (id)featheredBlur;
- (id)gaussianBlurView;
- (id)gradientView;
- (bool)hideFeatheredBlur;
- (bool)hideVisualEffectView;
- (id)init;
- (id)keyboardVisualEffectView;
- (void)layoutSubviews;
- (double)searchFieldHeight;
- (void)setColorView:(id)arg1;
- (void)setFeatheredBlur:(id)arg1;
- (void)setGaussianBlurView:(id)arg1;
- (void)setGradientView:(id)arg1;
- (void)setHideFeatheredBlur:(bool)arg1;
- (void)setHideVisualEffectView:(bool)arg1;
- (void)setKeyboardVisualEffectView:(id)arg1;
- (void)setSearchFieldHeight:(double)arg1;
- (void)tlk_updateForAppearance:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
