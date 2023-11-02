
@interface VKQuadHighlightView : UIView {
    VKPointAnimatableProperty * _bottomLeft;
    VKPointAnimatableProperty * _bottomRight;
    CAShapeLayer * _highlightLayer;
    VKQuad * _quad;
    CAShapeLayer * _shadowLayer;
    CAShapeLayer * _shadowLayerMaskLayer;
    VKPointAnimatableProperty * _topLeft;
    VKPointAnimatableProperty * _topRight;
}

@property (nonatomic, retain) VKQuad *quad;

- (void).cxx_destruct;
- (void)_drawHighlight;
- (void)animateToQuad:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)quad;
- (void)setQuad:(id)arg1;

@end
