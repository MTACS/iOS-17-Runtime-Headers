
@interface PKPaymentPreferenceBankAccountCell : PKPaymentPreferenceCardCell {
    PKBankAccountInformation * _bankAccount;
    UIImage * _bankIcon;
}

@property (nonatomic, retain) PKBankAccountInformation *bankAccount;

- (void).cxx_destruct;
- (void)_updateCellContent;
- (void)_updateCensoredPANLabel;
- (id)bankAccount;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)setBankAccount:(id)arg1;

@end