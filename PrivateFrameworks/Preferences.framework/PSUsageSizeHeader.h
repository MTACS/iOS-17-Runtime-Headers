
@interface PSUsageSizeHeader : UITableViewHeaderFooterView <PSHeaderFooterView> {
    UIStackView * __internalStackView;
    UILabel * _sizeLabel;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) UIStackView *_internalStackView;
@property (nonatomic, retain) UILabel *sizeLabel;
@property (nonatomic, retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (id)_internalStackView;
- (void)_setupSubviewsAndConstraints;
- (id)initWithSpecifier:(id)arg1;
- (double)preferredHeightForWidth:(double)arg1 inTableView:(id)arg2;
- (void)setSize:(id)arg1;
- (void)setSizeLabel:(id)arg1;
- (void)setSizeLabelHidden:(bool)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)set_internalStackView:(id)arg1;
- (id)sizeLabel;
- (id)titleLabel;

@end
