
@interface _TVCommonSenseFooterView : UIView {
    UIView * _logoView;
    UIView * _separatorView;
}

@property (nonatomic, retain) UIView *logoView;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)logoView;
- (void)setLogoView:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
