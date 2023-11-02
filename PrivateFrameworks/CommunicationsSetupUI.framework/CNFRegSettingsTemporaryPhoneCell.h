
@interface CNFRegSettingsTemporaryPhoneCell : PSTableCell {
    UILabel * _descriptionLabel;
    UILabel * _expirationLabel;
    UILabel * _phoneNumberLabel;
}

@property (nonatomic, retain) UILabel *descriptionLabel;
@property (nonatomic, retain) UILabel *expirationLabel;
@property (nonatomic, retain) UILabel *phoneNumberLabel;

- (void).cxx_destruct;
- (unsigned long long)daysUntilExpiration:(id)arg1;
- (id)descriptionLabel;
- (id)expirationLabel;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)phoneNumberLabel;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)setDescriptionLabel:(id)arg1;
- (void)setExpirationLabel:(id)arg1;
- (void)setPhoneNumberLabel:(id)arg1;

@end
