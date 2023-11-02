
@interface PKPaymentAuthorizationRewrapStateParam : PKPaymentAuthorizationStateParam {
    NSData * _credential;
    long long  _cryptogramType;
    NSData * _nonceData;
    PKWrappedPayment * _wrappedPayment;
}

@property (nonatomic, retain) NSData *credential;
@property (nonatomic) long long cryptogramType;
@property (nonatomic, retain) NSData *nonceData;
@property (nonatomic, retain) PKWrappedPayment *wrappedPayment;

+ (id)paramWithWrappedPayment:(id)arg1 nonce:(id)arg2 credential:(id)arg3 cryptogramType:(long long)arg4;

- (void).cxx_destruct;
- (id)credential;
- (long long)cryptogramType;
- (id)description;
- (id)nonceData;
- (void)setCredential:(id)arg1;
- (void)setCryptogramType:(long long)arg1;
- (void)setNonceData:(id)arg1;
- (void)setWrappedPayment:(id)arg1;
- (id)wrappedPayment;

@end
