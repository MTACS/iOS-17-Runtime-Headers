
@interface PKPaymentSetupCardImageHeaderView : UICollectionReusableView {
    UIImage * _image;
    UIImageView * _passView;
    NSString * _subtitle;
    UILabel * _subtitleLabel;
    NSString * _title;
    UILabel * _titleLabel;
}

- (void).cxx_destruct;
- (void)_createSubviews;
- (struct CGSize { double x1; double x2; })_imageSize;
- (double)_leadingPadding;
- (void)configureWithUIImage:(id)arg1 title:(id)arg2 subtitle:(id)arg3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
