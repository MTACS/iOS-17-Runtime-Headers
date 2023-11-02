
@interface PKPaymentPreferenceBankAccount : PKPaymentPreference {
    NSArray * _bankAccounts;
}

@property (nonatomic, retain) NSArray *bankAccounts;

- (void).cxx_destruct;
- (id)bankAccounts;
- (void)setBankAccounts:(id)arg1;

@end
