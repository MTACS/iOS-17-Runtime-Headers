
@interface PKPaymentAuthorizationAuthorizeStateParam : PKPaymentAuthorizationStateParam {
    NSData * _credential;
    long long  _cryptogramType;
    PKAuthenticatorEvaluationResponse * _evaluationResponse;
    NSData * _networkMerchantIdentifier;
    NSData * _nonceData;
}

@property (nonatomic, retain) NSData *credential;
@property (nonatomic) long long cryptogramType;
@property (nonatomic, retain) PKAuthenticatorEvaluationResponse *evaluationResponse;
@property (nonatomic, retain) NSData *networkMerchantIdentifier;
@property (nonatomic, retain) NSData *nonceData;

+ (id)paramWithAuthenticatorEvaluationResponse:(id)arg1;
+ (id)paramWithCredential:(id)arg1;
+ (id)paramWithNonceParam:(id)arg1 nonce:(id)arg2 cryptogramType:(long long)arg3 networkMerchantIdentifier:(id)arg4;

- (void).cxx_destruct;
- (id)credential;
- (long long)cryptogramType;
- (id)description;
- (id)evaluationResponse;
- (id)networkMerchantIdentifier;
- (id)nonceData;
- (void)setCredential:(id)arg1;
- (void)setCryptogramType:(long long)arg1;
- (void)setEvaluationResponse:(id)arg1;
- (void)setNetworkMerchantIdentifier:(id)arg1;
- (void)setNonceData:(id)arg1;

@end
