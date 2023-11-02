
@interface PKPaymentAuthorizationNonceStateParam : PKPaymentAuthorizationStateParam {
    NSData * _credential;
    PKAuthenticatorEvaluationResponse * _evaluationResponse;
}

@property (nonatomic, retain) NSData *credential;
@property (nonatomic, retain) PKAuthenticatorEvaluationResponse *evaluationResponse;

+ (id)paramWithAuthenticatorEvaluationResponse:(id)arg1;
+ (id)paramWithCredential:(id)arg1;

- (void).cxx_destruct;
- (id)credential;
- (id)description;
- (id)evaluationResponse;
- (void)setCredential:(id)arg1;
- (void)setEvaluationResponse:(id)arg1;

@end
