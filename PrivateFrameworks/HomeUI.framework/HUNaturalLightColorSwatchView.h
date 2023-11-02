
@interface HUNaturalLightColorSwatchView : UIView {
    CAGradientLayer * _circleGradientLayer;
    CAShapeLayer * _circleMaskLayer;
    CAShapeLayer * _circleOuterLayer;
    CAGradientLayer * _selectedCircleGradientLayer;
    CAShapeLayer * _selectedCircleInnerLayer;
    CAShapeLayer * _selectedCircleMaskLayer;
    unsigned long long  _selectionState;
    UIImage * _truetoneIcon;
}

@property (nonatomic, retain) CAGradientLayer *circleGradientLayer;
@property (nonatomic, retain) CAShapeLayer *circleMaskLayer;
@property (nonatomic, retain) CAShapeLayer *circleOuterLayer;
@property (nonatomic, retain) CAGradientLayer *selectedCircleGradientLayer;
@property (nonatomic, retain) CAShapeLayer *selectedCircleInnerLayer;
@property (nonatomic, retain) CAShapeLayer *selectedCircleMaskLayer;
@property (nonatomic) unsigned long long selectionState;
@property (nonatomic, retain) UIImage *truetoneIcon;

+ (id)_createGradientLayer;

- (void).cxx_destruct;
- (id)_buildMaskFromImage:(id)arg1;
- (bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)_updateLayout;
- (id)circleGradientLayer;
- (id)circleMaskLayer;
- (id)circleOuterLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)selectedCircleGradientLayer;
- (id)selectedCircleInnerLayer;
- (id)selectedCircleMaskLayer;
- (unsigned long long)selectionState;
- (void)setCircleGradientLayer:(id)arg1;
- (void)setCircleMaskLayer:(id)arg1;
- (void)setCircleOuterLayer:(id)arg1;
- (void)setSelectedCircleGradientLayer:(id)arg1;
- (void)setSelectedCircleInnerLayer:(id)arg1;
- (void)setSelectedCircleMaskLayer:(id)arg1;
- (void)setSelectionState:(unsigned long long)arg1;
- (void)setTruetoneIcon:(id)arg1;
- (id)truetoneIcon;

@end
