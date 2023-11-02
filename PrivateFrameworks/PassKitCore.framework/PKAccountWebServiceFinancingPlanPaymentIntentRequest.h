
@interface PKAccountWebServiceFinancingPlanPaymentIntentRequest : PKAccountWebServiceRequest {
    NSString * _accountIdentifier;
    NSURL * _baseURL;
    unsigned long long  _intent;
    NSString * _planIdentifier;
}

@property (nonatomic, copy) NSString *accountIdentifier;
@property (nonatomic, retain) NSURL *baseURL;
@property (nonatomic) unsigned long long intent;
@property (nonatomic, copy) NSString *planIdentifier;

- (void).cxx_destruct;
- (id)_urlRequestWithAppleAccountInformation:(id)arg1;
- (id)accountIdentifier;
- (id)baseURL;
- (unsigned long long)intent;
- (id)planIdentifier;
- (void)setAccountIdentifier:(id)arg1;
- (void)setBaseURL:(id)arg1;
- (void)setIntent:(unsigned long long)arg1;
- (void)setPlanIdentifier:(id)arg1;

@end
