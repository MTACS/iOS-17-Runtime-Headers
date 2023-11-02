
@interface _UITextHighlightBackgroundView : UIView {
    CAShapeLayer * _highlightLayer;
    CALayer * _shadowLayer;
    UIBezierPath * _visiblePath;
}

@property (nonatomic, readonly) CAShapeLayer *highlightLayer;
@property (nonatomic, readonly) CALayer *shadowLayer;
@property (nonatomic, copy) UIBezierPath *visiblePath;

- (void).cxx_destruct;
- (id)highlightLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setVisiblePath:(id)arg1;
- (id)shadowLayer;
- (id)visiblePath;

@end
