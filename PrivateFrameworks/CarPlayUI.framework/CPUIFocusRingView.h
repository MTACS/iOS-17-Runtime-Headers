
@interface CPUIFocusRingView : UIView {
    double  _cornerRadius;
    UIBezierPath * _focusPath;
    UIBezierPath * _insetFocusPath;
    UIColor * _ringColor;
    double  _ringWidth;
}

@property (nonatomic) double cornerRadius;
@property (nonatomic, retain) UIBezierPath *focusPath;
@property (nonatomic, retain) UIBezierPath *insetFocusPath;
@property (nonatomic, retain) UIColor *ringColor;
@property (nonatomic) double ringWidth;

- (void).cxx_destruct;
- (void)_updateFocusRect;
- (double)cornerRadius;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)focusPath;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)insetFocusPath;
- (void)layoutSubviews;
- (id)ringColor;
- (double)ringWidth;
- (void)setCornerRadius:(double)arg1;
- (void)setFocusPath:(id)arg1;
- (void)setInsetFocusPath:(id)arg1;
- (void)setRingColor:(id)arg1;
- (void)setRingWidth:(double)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
