
@interface PKDashboardAuxiliaryPassInformationItemCollectionViewCell : PKDashboardCollectionViewCell {
    UIImageView * _disclosureView;
    bool  _hideDisclosure;
    NSString * _subtitle;
    NSString * _subtitle2;
    UILabel * _subtitle2Label;
    UILabel * _subtitleLabel;
    NSString * _title;
    UILabel * _titleLabel;
}

@property (nonatomic) bool hideDisclosure;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) NSString *subtitle2;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (double)_maxWidthForTransactionCellInWidth:(double)arg1;
- (void)_setFonts;
- (void)_setTitle:(id)arg1;
- (bool)hideDisclosure;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setHideDisclosure:(bool)arg1;
- (void)setSubtitle2:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)subtitle;
- (id)subtitle2;
- (id)title;
- (void)traitCollectionDidChange:(id)arg1;

@end
