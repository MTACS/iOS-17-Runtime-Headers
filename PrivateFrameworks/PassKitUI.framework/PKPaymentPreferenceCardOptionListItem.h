
@interface PKPaymentPreferenceCardOptionListItem : PKPaymentPreferenceOptionListItem

@property (nonatomic, readonly) PKPaymentPreferenceCard *cardSectionPreference;
@property (nonatomic, readonly) PKPaymentPass *pass;

- (id)_censoredPANTextForPass:(id)arg1;
- (id)_image;
- (id)_secondaryText;
- (id)_text;
- (id)cardSectionPreference;
- (id)pass;

@end
