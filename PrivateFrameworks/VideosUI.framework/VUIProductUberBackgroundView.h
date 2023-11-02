
@interface VUIProductUberBackgroundView : VUIBaseView {
    UIVisualEffectView * _blurEffectView;
    unsigned long long  _configuredBlurInterfaceStyle;
    double  _contentOffset;
    CAGradientLayer * _gradientLayer;
    double  _highestSubviewY;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSize;
    UIView * _imageView;
    bool  _isChannelBanner;
}

@property (nonatomic, retain) UIVisualEffectView *blurEffectView;
@property (nonatomic) unsigned long long configuredBlurInterfaceStyle;
@property (nonatomic) double contentOffset;
@property (nonatomic, retain) CAGradientLayer *gradientLayer;
@property (nonatomic) double highestSubviewY;
@property (nonatomic) struct CGSize { double x1; double x2; } imageSize;
@property (nonatomic, retain) UIView *imageView;
@property (nonatomic) bool isChannelBanner;

- (void).cxx_destruct;
- (void)_configureGradientLayer:(id)arg1 currentSizeClass:(long long)arg2 mainRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (double)_gradientHeightForSizeClass:(long long)arg1 mainRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)blurEffectView;
- (void)configureBlurEffectAndGradientWithInterfaceStyle:(unsigned long long)arg1 mainRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)configureBlurWithInterfaceStyle:(unsigned long long)arg1;
- (void)configureBlurWithInterfaceStyle:(unsigned long long)arg1 mainRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (unsigned long long)configuredBlurInterfaceStyle;
- (double)contentOffset;
- (id)gradientLayer;
- (double)highestSubviewY;
- (struct CGSize { double x1; double x2; })imageSize;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isChannelBanner;
- (void)resetBlurEffectAndGradient;
- (void)setBlurEffectView:(id)arg1;
- (void)setConfiguredBlurInterfaceStyle:(unsigned long long)arg1;
- (void)setContentOffset:(double)arg1;
- (void)setGradientLayer:(id)arg1;
- (void)setHighestSubviewY:(double)arg1;
- (void)setImageOffset:(double)arg1;
- (void)setImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setImageView:(id)arg1;
- (void)setIsChannelBanner:(bool)arg1;
- (void)setMasksBlur:(bool)arg1;
- (struct CGSize { double x1; double x2; })vui_layoutSubviews:(struct CGSize { double x1; double x2; })arg1 computationOnly:(bool)arg2;

@end
