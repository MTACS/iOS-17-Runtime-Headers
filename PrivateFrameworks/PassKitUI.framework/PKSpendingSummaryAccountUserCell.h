
@interface PKSpendingSummaryAccountUserCell : PKDashboardCollectionViewCell {
    NSString * _amount;
    UILabel * _amountLabel;
    UIImage * _avatar;
    UIImageView * _avatarView;
    NSString * _identifier;
    bool  _isTemplateLayout;
    NSString * _name;
    UILabel * _nameLabel;
}

@property (nonatomic, copy) NSString *amount;
@property (nonatomic, copy) UIImage *avatar;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, copy) NSString *name;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)amount;
- (id)avatar;
- (id)identifier;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)name;
- (void)prepareForReuse;
- (void)setAmount:(id)arg1;
- (void)setAvatar:(id)arg1;
- (void)setName:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
