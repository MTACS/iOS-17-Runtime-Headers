
@interface NMCUIAccountsSettingsViewCell : PSTableCell {
    UIActivityIndicatorView * _spinner;
    UILabel * _warningLabel;
}

@property (nonatomic, retain) UIActivityIndicatorView *spinner;
@property (nonatomic, retain) UILabel *warningLabel;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)setSpinner:(id)arg1;
- (void)setWarningLabel:(id)arg1;
- (id)spinner;
- (id)warningLabel;

@end
