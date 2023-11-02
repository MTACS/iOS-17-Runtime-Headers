
@interface PKPaymentLocalAppletSubcredentialPassCredential : PKPaymentCredential {
    PKAppletSubcredential * _credentialToShare;
    PKPaymentPass * _paymentPass;
}

@property (nonatomic, readonly) PKAppletSubcredential *credentialToShare;
@property (nonatomic, readonly) PKPaymentPass *paymentPass;

- (void).cxx_destruct;
- (id)credentialToShare;
- (id)initWithPaymentPass:(id)arg1 credentialToShare:(id)arg2;
- (id)paymentPass;

@end
