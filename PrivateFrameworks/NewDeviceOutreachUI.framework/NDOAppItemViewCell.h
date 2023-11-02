
@interface NDOAppItemViewCell : PSTableCell {
    NSMutableArray * _imageConstraints;
    UIImageView * _itemImageView;
    UILabel * _itemSubtitleLabel;
    UILabel * _itemTitleLabel;
    UIView * _itemTitleView;
}

@property (nonatomic, retain) UIImageView *itemImageView;
@property (nonatomic, retain) UILabel *itemSubtitleLabel;
@property (nonatomic, retain) UILabel *itemTitleLabel;
@property (nonatomic, retain) UIView *itemTitleView;

+ (long long)cellStyle;

- (void).cxx_destruct;
- (void)_setupWarrantyCoverageCell;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (id)itemImageView;
- (id)itemSubtitleLabel;
- (id)itemTitleLabel;
- (id)itemTitleView;
- (void)layoutSubviews;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)setItemImageView:(id)arg1;
- (void)setItemSubtitleLabel:(id)arg1;
- (void)setItemTitleLabel:(id)arg1;
- (void)setItemTitleView:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)updateConstraints;

@end
