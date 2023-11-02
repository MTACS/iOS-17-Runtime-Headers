
@interface PKMerchantTokenDetailHeaderCell : UITableViewCell {
    PKMerchantTokenIconView * _iconView;
    UILabel * _nameLabel;
    UILabel * _secondaryLabel;
    UIStackView * _stackView;
}

- (void).cxx_destruct;
- (void)_setUpConstraints;
- (void)_setUpIconView;
- (void)_setUpIconViewConstraints;
- (void)_setUpNameLabel;
- (void)_setUpSelf;
- (void)_setUpStackView;
- (void)_setUpStackViewConstraints;
- (void)_setUpViews;
- (void)hideMerchantIcon;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)updateCellWithMerchantToken:(id)arg1;

@end
