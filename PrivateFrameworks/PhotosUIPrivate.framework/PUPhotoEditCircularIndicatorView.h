
@interface PUPhotoEditCircularIndicatorView : UIView {
    CAShapeLayer * _backgroundLayer;
    double  _currentValue;
    double  _maxValue;
    double  _minValue;
    CAShapeLayer * _progressLayer;
    double  _thickness;
}

@property (nonatomic, retain) CAShapeLayer *backgroundLayer;
@property (nonatomic) double currentValue;
@property (nonatomic) double maxValue;
@property (nonatomic) double minValue;
@property (nonatomic, retain) CAShapeLayer *progressLayer;
@property (nonatomic, retain) UIColor *ringColor;
@property (nonatomic) double thickness;

- (void).cxx_destruct;
- (void)_layoutSubLayers;
- (void)_setupLayers;
- (void)_updateProgressLayer;
- (id)backgroundLayer;
- (double)currentValue;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (double)maxValue;
- (double)minValue;
- (id)progressLayer;
- (void)resetToDefaults;
- (id)ringColor;
- (void)setBackgroundLayer:(id)arg1;
- (void)setCurrentValue:(double)arg1;
- (void)setMaxValue:(double)arg1;
- (void)setMinValue:(double)arg1;
- (void)setProgressLayer:(id)arg1;
- (void)setRingColor:(id)arg1;
- (void)setThickness:(double)arg1;
- (double)thickness;
- (void)traitCollectionDidChange:(id)arg1;

@end
