
@interface PKPaymentSetupHeaderView : UICollectionReusableView {
    UILabel * _label;
    NSString * _title;
}

@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (double)_leadingPadding;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setTitle:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)title;

@end
