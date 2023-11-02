
@interface MUHairlineView : MKHairlineView {
    double  _intrinsicThickness;
    NSLayoutConstraint * _leadingMarginConstraint;
    NSLayoutConstraint * _trailingMarginConstraint;
    bool  _vertical;
}

@property (nonatomic) double leadingMargin;
@property (nonatomic, retain) NSLayoutConstraint *leadingMarginConstraint;
@property (nonatomic) double trailingMargin;
@property (nonatomic, retain) NSLayoutConstraint *trailingMarginConstraint;
@property (nonatomic) bool vertical;

- (void).cxx_destruct;
- (void)_updateIntrinsicThicknessForDisplayScale;
- (void)customInit;
- (void)didMoveToWindow;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (double)leadingMargin;
- (id)leadingMarginConstraint;
- (void)setLeadingMargin:(double)arg1;
- (void)setLeadingMarginConstraint:(id)arg1;
- (void)setTrailingMargin:(double)arg1;
- (void)setTrailingMarginConstraint:(id)arg1;
- (void)setVertical:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (double)trailingMargin;
- (id)trailingMarginConstraint;
- (bool)vertical;

@end
