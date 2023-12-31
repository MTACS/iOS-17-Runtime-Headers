
@interface STUsageCell : STTableCell {
    UILabel * _itemNameLabel;
    UIImageView * _trustWarningImageView;
    STCandyBarView * _usageBarView;
    NSLayoutConstraint * _usageBarWidthConstraint;
    UILabel * _usageLabel;
}

@property (nonatomic, readonly) UILabel *itemNameLabel;
@property (readonly) UIImageView *trustWarningImageView;
@property (nonatomic, readonly) STCandyBarView *usageBarView;
@property (nonatomic, readonly) NSLayoutConstraint *usageBarWidthConstraint;
@property (nonatomic, readonly) UILabel *usageLabel;

- (void).cxx_destruct;
- (void)_didFetchAppInfoOrIcon:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (id)itemNameLabel;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)setValue:(id)arg1;
- (id)trustWarningImageView;
- (id)usageBarView;
- (id)usageBarWidthConstraint;
- (id)usageLabel;
- (id)value;

@end
