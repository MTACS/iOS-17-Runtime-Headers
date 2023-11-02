
@interface MUBlurView : UIView {
    NSArray * _backgroundEffects;
    long long  _blurEffectStyle;
    NSString * _blurGroupName;
    double  _blurRadius;
    bool  _isGaussianBlur;
    bool  _isVariableBlur;
    UIVisualEffectView * _materialBlurView;
    UIView * _nonBlurView;
    UIColor * _nonBlurredColor;
    UIColor * _overlayColor;
    bool  _shouldBlur;
    unsigned long long  _style;
    struct CGImage { } * _variableBlurMaskImage;
    UIView * _variableBlurView;
}

@property (nonatomic, copy) NSArray *backgroundEffects;
@property (nonatomic, copy) NSString *blurGroupName;
@property (nonatomic, retain) UIVisualEffectView *materialBlurView;
@property (nonatomic, retain) UIView *nonBlurView;
@property (nonatomic, copy) UIColor *nonBlurredColor;
@property (nonatomic, copy) UIColor *overlayColor;
@property (nonatomic) bool shouldBlur;
@property (nonatomic) unsigned long long style;
@property (nonatomic, retain) UIView *variableBlurView;

- (void).cxx_destruct;
- (void)_setup;
- (void)_transparencyStatusDidChange;
- (void)_update;
- (id)backgroundEffects;
- (id)blurGroupName;
- (id)blurView;
- (id)blurViewIfExists;
- (id)initWithBlurEffectStyle:(long long)arg1;
- (id)initWithGaussianBlurWithRadius:(double)arg1;
- (id)initWithVariableBlurWithRadius:(double)arg1 maskImage:(struct CGImage { }*)arg2;
- (id)materialBlurView;
- (id)nonBlurView;
- (id)nonBlurredColor;
- (id)overlayColor;
- (void)setBackgroundEffects:(id)arg1;
- (void)setBlurGroupName:(id)arg1;
- (void)setMaterialBlurView:(id)arg1;
- (void)setNonBlurView:(id)arg1;
- (void)setNonBlurredColor:(id)arg1;
- (void)setOverlayColor:(id)arg1;
- (void)setShouldBlur:(bool)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (void)setVariableBlurView:(id)arg1;
- (bool)shouldBlur;
- (unsigned long long)style;
- (id)variableBlurView;

@end
