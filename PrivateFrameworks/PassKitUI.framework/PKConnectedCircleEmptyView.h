
@interface PKConnectedCircleEmptyView : UIView {
    UIColor * _innerColor;
    UIColor * _outerColor;
}

@property (nonatomic, readonly) UIColor *innerColor;
@property (nonatomic, readonly) UIColor *outerColor;

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithOuterColor:(id)arg1 innerColor:(id)arg2;
- (id)innerColor;
- (id)outerColor;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
