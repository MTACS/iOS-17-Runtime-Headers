
@interface _PaymentSheetState : NSObject {
    unsigned long long  _cancellationType;
    bool  _didAuthorizePayment;
    bool  _didBiometricsLockout;
    bool  _didPresent;
    NSError * _error;
    NSString * _passwordEquivalentToken;
    NSString * _paymentToken;
    AMSBiometricsSignatureResult * _signatureResult;
}

@property (nonatomic) unsigned long long cancellationType;
@property (nonatomic) bool didAuthorizePayment;
@property (nonatomic) bool didBiometricsLockout;
@property (nonatomic) bool didPresent;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) NSString *passwordEquivalentToken;
@property (nonatomic, retain) NSString *paymentToken;
@property (nonatomic, retain) AMSBiometricsSignatureResult *signatureResult;

- (void).cxx_destruct;
- (unsigned long long)cancellationType;
- (bool)didAuthorizePayment;
- (bool)didBiometricsLockout;
- (bool)didPresent;
- (id)error;
- (id)init;
- (id)passwordEquivalentToken;
- (id)paymentToken;
- (void)setCancellationType:(unsigned long long)arg1;
- (void)setDidAuthorizePayment:(bool)arg1;
- (void)setDidBiometricsLockout:(bool)arg1;
- (void)setDidPresent:(bool)arg1;
- (void)setError:(id)arg1;
- (void)setPasswordEquivalentToken:(id)arg1;
- (void)setPaymentToken:(id)arg1;
- (void)setSignatureResult:(id)arg1;
- (id)signatureResult;

@end
