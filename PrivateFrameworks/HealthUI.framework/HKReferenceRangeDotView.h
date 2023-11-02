
@interface HKReferenceRangeDotView : UIView {
    _HKReferenceRangeDotViewDot * _dotView;
}

@property (nonatomic, retain) UIColor *dotColor;
@property (nonatomic) _HKReferenceRangeDotViewDot *dotView;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })desiredDotViewFrame;
- (id)dotColor;
- (id)dotView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDotColor:(id)arg1;
- (void)setDotView:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
