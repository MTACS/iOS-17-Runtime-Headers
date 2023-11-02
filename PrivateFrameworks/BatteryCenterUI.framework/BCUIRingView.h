
@interface BCUIRingView : UIView {
    UIColor * _fillColor;
    double  _lineWidth;
    double  _ringEnd;
    double  _ringStart;
    UIColor * _strokeColor;
}

@property (nonatomic, copy) UIColor *fillColor;
@property (nonatomic) double lineWidth;
@property (nonatomic) double ringEnd;
@property (nonatomic) double ringStart;
@property (nonatomic, copy) UIColor *strokeColor;

+ (Class)layerClass;

- (void).cxx_destruct;
- (void)_invalidatePath;
- (id)_shapeLayer;
- (bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (id)fillColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (double)lineWidth;
- (void)mt_applyVisualStyling:(id)arg1;
- (double)ringEnd;
- (double)ringStart;
- (void)setFillColor:(id)arg1;
- (void)setFractionComplete:(double)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setLineWidth:(double)arg1;
- (void)setRingEnd:(double)arg1;
- (void)setRingStart:(double)arg1;
- (void)setStrokeColor:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)strokeColor;

@end
