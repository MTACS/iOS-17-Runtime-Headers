
@interface ICQUISpecifierCellWithAsyncImageLoading : PSTableCell {
    UILabel * _accessoryLabel;
    UIImageView * _cellImageView;
    UILabel * _subtitleLabel;
    UILabel * _titleLabel;
}

+ (long long)cellStyle;

- (void).cxx_destruct;
- (void)_setupViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)setIcon:(id)arg1;

@end
