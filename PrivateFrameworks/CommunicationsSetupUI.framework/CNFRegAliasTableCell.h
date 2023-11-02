
@interface CNFRegAliasTableCell : PSTableCell {
    bool  _hasSpinner;
    UIImageView * _iconView;
    UIActivityIndicatorView * _spinner;
    UIImageView * _temporaryPhoneGlyph;
}

@property (nonatomic) bool hasSpinner;
@property (nonatomic, retain) UIImageView *iconView;
@property (nonatomic, retain) UIActivityIndicatorView *spinner;
@property (nonatomic, retain) UIImageView *temporaryPhoneGlyph;

- (void).cxx_destruct;
- (void)_updateIcon;
- (void)dealloc;
- (bool)hasSpinner;
- (id)iconView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)layoutSubviews;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)setChecked:(bool)arg1;
- (void)setHasSpinner:(bool)arg1;
- (void)setIconView:(id)arg1;
- (void)setIsTemporaryPhone:(bool)arg1;
- (void)setSpinner:(id)arg1;
- (void)setTemporaryPhoneGlyph:(id)arg1;
- (id)spinner;
- (id)temporaryPhoneGlyph;
- (bool)usesStandardBackgroundImage;

@end
