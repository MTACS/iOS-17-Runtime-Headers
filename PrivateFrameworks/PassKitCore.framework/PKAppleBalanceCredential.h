
@interface PKAppleBalanceCredential : PKPaymentCredential {
    long long  _eligibilitySource;
    PKPaymentSetupProduct * _product;
}

@property (nonatomic, readonly) long long eligibilitySource;
@property (nonatomic, readonly) PKPaymentSetupProduct *product;

- (void).cxx_destruct;
- (long long)eligibilitySource;
- (id)initWithProduct:(id)arg1 eligibilitySource:(long long)arg2;
- (id)product;
- (id)setupProductIdentifier;

@end
