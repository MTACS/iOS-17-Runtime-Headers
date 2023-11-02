
@interface PKProgressBar : UIView {
    double  _cornerRadius;
    CAGradientLayer * _fillLayer;
    UIColor * _originalEndColor;
    UIColor * _originalStartColor;
    double  _progress;
    bool  _roundEndCap;
}

@property (nonatomic) double cornerRadius;
@property (nonatomic, retain) UIColor *gradientEndColor;
@property (nonatomic, retain) UIColor *gradientStartColor;
@property (nonatomic) double progress;
@property (nonatomic) bool roundEndCap;

- (void).cxx_destruct;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)_updateLayerColors;
- (double)cornerRadius;
- (id)gradientEndColor;
- (id)gradientStartColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (double)progress;
- (bool)roundEndCap;
- (void)setCornerRadius:(double)arg1;
- (void)setGradientEndColor:(id)arg1;
- (void)setGradientStartColor:(id)arg1;
- (void)setProgress:(double)arg1;
- (void)setRoundEndCap:(bool)arg1;

@end
