
@interface SeparatorLayer : UIView {
    unsigned long long  _axis;
    UIColor * _tintColor;
}

@property (nonatomic) unsigned long long axis;
@property (nonatomic, retain) UIColor *tintColor;

+ (double)separatorHeight;

- (void).cxx_destruct;
- (unsigned long long)axis;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)setAxis:(unsigned long long)arg1;
- (void)setTintColor:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)tintColor;

@end
