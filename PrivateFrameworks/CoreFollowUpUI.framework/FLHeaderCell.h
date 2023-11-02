
@interface FLHeaderCell : PSTableCell {
    NSArray * _constraints;
    UILabel * _followSubtitle;
    UILabel * _followTitle;
}

+ (long long)cellStyle;

- (void).cxx_destruct;
- (void)_updateConstraintsWithImage;
- (void)_updateConstraintsWithNoImage;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)layoutSubviews;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)updateConstraints;

@end
