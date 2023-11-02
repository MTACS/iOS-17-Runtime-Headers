
@interface NUNIAstronomyLocationDot : UIView {
    bool  _animating;
    NUNIAstronomyLocationDotConfiguration * _configuration;
    UIColor * _innerDotColor;
    double  _innerDotDiameter;
    UIImageView * _innerDotImageView;
    UIView * _outerDot;
    UIColor * _outerDotColor;
    double  _outerDotDiameter;
    double  _pulseAlphaDelay;
    double  _pulseDuration;
}

@property (nonatomic) bool animating;
@property (nonatomic, retain) UIColor *innerDotColor;
@property (nonatomic) double innerDotDiameter;
@property (nonatomic, retain) UIColor *outerDotColor;
@property (nonatomic) double outerDotDiameter;
@property (nonatomic) double pulseAlphaDelay;
@property (nonatomic) double pulseDuration;

+ (id)_defaultColor;
+ (double)defaultPulseAlphaDelay;
+ (double)defaultPulseDuration;

- (void).cxx_destruct;
- (void)_generateInnerDotImage;
- (bool)animating;
- (id)init;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 configuration:(id)arg2;
- (id)innerDotColor;
- (double)innerDotDiameter;
- (void)layoutSubviews;
- (id)outerDotColor;
- (double)outerDotDiameter;
- (double)pulseAlphaDelay;
- (double)pulseDuration;
- (double)screenScale;
- (void)setAnimating:(bool)arg1;
- (void)setInnerDotColor:(id)arg1;
- (void)setInnerDotDiameter:(double)arg1;
- (void)setOuterDotColor:(id)arg1;
- (void)setOuterDotDiameter:(double)arg1;
- (void)setPulseAlphaDelay:(double)arg1;
- (void)setPulseDuration:(double)arg1;
- (void)startAnimation;
- (void)startAnimationWithCompletionBlock:(id /* block */)arg1;
- (void)stopAnimation;

@end
