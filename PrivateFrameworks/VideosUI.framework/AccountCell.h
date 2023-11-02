
@interface AccountCell : PSTableCell {
    UIImage * _placeHolderImage;
}

@property (nonatomic, retain) UIImage *placeHolderImage;

+ (long long)cellStyle;

- (void).cxx_destruct;
- (void)_profileImageDidChange:(id)arg1;
- (void)_updateAccountImage;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)layoutSubviews;
- (id)placeHolderImage;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)setPlaceHolderImage:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
