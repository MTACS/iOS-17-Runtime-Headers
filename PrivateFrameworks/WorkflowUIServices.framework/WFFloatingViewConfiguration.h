
@interface WFFloatingViewConfiguration : NSObject {
    bool  _appliesCornerRadiusDuringTouchDownOnly;
    bool  _colorizesShadow;
    double  _cornerRadius;
    long long  _gradientDirection;
    double  _scalingFactor;
    struct CGSize { 
        double width; 
        double height; 
    }  _shadowOffset;
    float  _shadowOpacity;
    double  _shadowRadius;
    bool  _usePillCornerRadius;
}

@property (nonatomic) bool appliesCornerRadiusDuringTouchDownOnly;
@property (nonatomic) bool colorizesShadow;
@property (nonatomic) double cornerRadius;
@property (nonatomic) long long gradientDirection;
@property (nonatomic) double scalingFactor;
@property (nonatomic) struct CGSize { double x1; double x2; } shadowOffset;
@property (nonatomic) float shadowOpacity;
@property (nonatomic) double shadowRadius;
@property (nonatomic) bool usePillCornerRadius;

+ (id)bannerImageConfiguration;
+ (id)materialWorkflowConfiguration;
+ (id)paletteColorConfiguration;
+ (id)widgetWorkflowConfiguration;

- (bool)appliesCornerRadiusDuringTouchDownOnly;
- (bool)colorizesShadow;
- (double)cornerRadius;
- (long long)gradientDirection;
- (id)init;
- (double)scalingFactor;
- (void)setAppliesCornerRadiusDuringTouchDownOnly:(bool)arg1;
- (void)setColorizesShadow:(bool)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setGradientDirection:(long long)arg1;
- (void)setScalingFactor:(double)arg1;
- (void)setShadowOffset:(struct CGSize { double x1; double x2; })arg1;
- (void)setShadowOpacity:(float)arg1;
- (void)setShadowRadius:(double)arg1;
- (void)setUsePillCornerRadius:(bool)arg1;
- (struct CGSize { double x1; double x2; })shadowOffset;
- (float)shadowOpacity;
- (double)shadowRadius;
- (bool)usePillCornerRadius;

@end
