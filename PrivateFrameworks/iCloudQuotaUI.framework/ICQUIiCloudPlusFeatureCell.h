
@interface ICQUIiCloudPlusFeatureCell : PSTableCell {
    UIImageView * _cellImageView;
    bool  _isLastCell;
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
