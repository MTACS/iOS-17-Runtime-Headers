
@interface PUPosterHeadroomSettings : PXSettings {
    double  _blurMaskHeight;
    double  _blurMaskTopLocation;
    double  _blurRadius;
    double  _blurVisibilityFraction;
    double  _bottomGradientAlpha;
    double  _bottomGradientBottomLocation;
    double  _bottomGradientTopLocation;
    double  _fadeAnimationDuration;
    double  _falloffHeight;
    double  _gradientHeight;
    double  _gradientWhite;
    double  _highKeyGradientWhite;
    double  _pinchToZoomHeadroomBoundary;
    double  _topGradientAlpha;
    double  _topGradientBottomLocation;
    double  _topGradientTopLocation;
    bool  _useSoftLightBlendingModeForTopGradient;
}

@property (nonatomic) double blurMaskHeight;
@property (nonatomic) double blurMaskTopLocation;
@property (nonatomic) double blurRadius;
@property (nonatomic) double blurVisibilityFraction;
@property (nonatomic) double bottomGradientAlpha;
@property (nonatomic) double bottomGradientBottomLocation;
@property (nonatomic) double bottomGradientTopLocation;
@property (nonatomic) double fadeAnimationDuration;
@property (nonatomic) double falloffHeight;
@property (nonatomic) double gradientHeight;
@property (nonatomic) double gradientWhite;
@property (nonatomic) double highKeyGradientWhite;
@property (nonatomic) double pinchToZoomHeadroomBoundary;
@property (nonatomic) double topGradientAlpha;
@property (nonatomic) double topGradientBottomLocation;
@property (nonatomic) double topGradientTopLocation;
@property (nonatomic) bool useSoftLightBlendingModeForTopGradient;

+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (double)blurMaskHeight;
- (double)blurMaskTopLocation;
- (double)blurRadius;
- (double)blurVisibilityFraction;
- (double)bottomGradientAlpha;
- (double)bottomGradientBottomLocation;
- (double)bottomGradientTopLocation;
- (double)fadeAnimationDuration;
- (double)falloffHeight;
- (double)gradientHeight;
- (double)gradientWhite;
- (double)highKeyGradientWhite;
- (id)parentSettings;
- (double)pinchToZoomHeadroomBoundary;
- (void)setBlurMaskHeight:(double)arg1;
- (void)setBlurMaskTopLocation:(double)arg1;
- (void)setBlurRadius:(double)arg1;
- (void)setBlurVisibilityFraction:(double)arg1;
- (void)setBottomGradientAlpha:(double)arg1;
- (void)setBottomGradientBottomLocation:(double)arg1;
- (void)setBottomGradientTopLocation:(double)arg1;
- (void)setDefaultValues;
- (void)setFadeAnimationDuration:(double)arg1;
- (void)setFalloffHeight:(double)arg1;
- (void)setGradientHeight:(double)arg1;
- (void)setGradientWhite:(double)arg1;
- (void)setHighKeyGradientWhite:(double)arg1;
- (void)setPinchToZoomHeadroomBoundary:(double)arg1;
- (void)setTopGradientAlpha:(double)arg1;
- (void)setTopGradientBottomLocation:(double)arg1;
- (void)setTopGradientTopLocation:(double)arg1;
- (void)setUseSoftLightBlendingModeForTopGradient:(bool)arg1;
- (double)topGradientAlpha;
- (double)topGradientBottomLocation;
- (double)topGradientTopLocation;
- (bool)useSoftLightBlendingModeForTopGradient;

@end
