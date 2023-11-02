
@interface PKPeerPaymentAccountResolutionControllerConfiguration : NSObject {
    PKCurrencyAmount * _currencyAmount;
    bool  _graduation;
    unsigned long long  _registrationFlowState;
    NSString * _senderAddress;
    long long  _verificationContext;
}

@property (nonatomic, retain) PKCurrencyAmount *currencyAmount;
@property (getter=isGraduation, nonatomic) bool graduation;
@property (nonatomic) unsigned long long registrationFlowState;
@property (nonatomic, copy) NSString *senderAddress;
@property (nonatomic) long long verificationContext;

- (void).cxx_destruct;
- (id)currencyAmount;
- (id)description;
- (bool)isGraduation;
- (unsigned long long)registrationFlowState;
- (id)senderAddress;
- (void)setCurrencyAmount:(id)arg1;
- (void)setGraduation:(bool)arg1;
- (void)setRegistrationFlowState:(unsigned long long)arg1;
- (void)setSenderAddress:(id)arg1;
- (void)setVerificationContext:(long long)arg1;
- (long long)verificationContext;

@end
