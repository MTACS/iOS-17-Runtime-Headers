
@interface HUQuickControlRingSliderHandleView : UIView {
    CAShapeLayer * _circleLayer;
    unsigned long long  _handleViewStyle;
    UIView * _lineView;
}

@property (nonatomic, retain) CAShapeLayer *circleLayer;
@property (nonatomic) unsigned long long handleViewStyle;
@property (nonatomic, retain) UIView *lineView;

- (void).cxx_destruct;
- (void)_setColor:(id)arg1;
- (void)_updateCircleLayer;
- (id)circleLayer;
- (unsigned long long)handleViewStyle;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 style:(unsigned long long)arg2;
- (void)layoutSubviews;
- (id)lineView;
- (double)outerRadius;
- (void)setCircleLayer:(id)arg1;
- (void)setHandleViewStyle:(unsigned long long)arg1;
- (void)setLineView:(id)arg1;

@end
