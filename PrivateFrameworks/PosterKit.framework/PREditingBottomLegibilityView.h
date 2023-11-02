
@interface PREditingBottomLegibilityView : UIView {
    UIColor * _gradientColor;
    long long  _gradientHeightMultiplier;
    CAGradientLayer * _gradientLayer;
    double  _heightFactor;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _previouslyConsideredBounds;
    bool  _shouldOverscan;
}

@property (nonatomic, retain) UIColor *gradientColor;
@property (nonatomic) long long gradientHeightMultiplier;
@property (nonatomic, readonly) CAGradientLayer *gradientLayer;
@property (nonatomic) double heightFactor;
@property (nonatomic) bool shouldOverscan;

+ (Class)layerClass;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_compactGradientFrameInBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_expandedGradientFrameInBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)_requiredGradientMultiplierForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_updateGradientColors;
- (void)_updateGradientHeightMultiplierIfNeededForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)gradientColor;
- (long long)gradientHeightMultiplier;
- (id)gradientLayer;
- (double)heightFactor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setGradientColor:(id)arg1;
- (void)setGradientHeightMultiplier:(long long)arg1;
- (void)setHeightFactor:(double)arg1;
- (void)setShouldOverscan:(bool)arg1;
- (bool)shouldOverscan;

@end
