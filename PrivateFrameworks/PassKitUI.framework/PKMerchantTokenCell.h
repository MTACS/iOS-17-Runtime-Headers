
@interface PKMerchantTokenCell : UICollectionViewListCell {
    PKMerchantTokenIconView * _iconView;
    UILabel * _nameLabel;
    UIStackView * _stackView;
}

- (void).cxx_destruct;
- (void)_setUpConstraints;
- (void)_setUpIconView;
- (void)_setUpIconViewConstraints;
- (void)_setUpNameLabel;
- (void)_setUpSelf;
- (void)_setUpSeparatorConstraints;
- (void)_setUpStackView;
- (void)_setUpStackViewConstraints;
- (void)_setUpViews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)updateCellWithMerchantToken:(id)arg1 showMerchantIcon:(bool)arg2;

@end
