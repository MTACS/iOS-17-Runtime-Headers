
@interface ICQUsageDetailHeader : UIView {
    UIImageView * _appIcon;
    UIStackView * _horizontalStack;
    NSLayoutConstraint * _leadingMargin;
    UILabel * _nameLabel;
    UILabel * _sizeLabel;
    UILabel * _versionLabel;
    UIStackView * _verticalStack;
}

+ (double)usageDetailHeaderHeight;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setLabelTextAndIconWithSpecifier:(id)arg1;
- (void)setName:(id)arg1;

@end
