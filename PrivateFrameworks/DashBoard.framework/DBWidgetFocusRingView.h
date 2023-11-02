
@interface DBWidgetFocusRingView : UIView {
    double  _cornerRadius;
    UIBezierPath * _focusPath;
    UIColor * _ringColor;
}

@property (nonatomic) double cornerRadius;
@property (nonatomic, retain) UIBezierPath *focusPath;
@property (nonatomic, retain) UIColor *ringColor;

- (void).cxx_destruct;
- (void)_updateFocusRect;
- (double)cornerRadius;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)focusPath;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)ringColor;
- (void)setCornerRadius:(double)arg1;
- (void)setFocusPath:(id)arg1;
- (void)setRingColor:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
