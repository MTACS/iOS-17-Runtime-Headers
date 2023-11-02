
@interface PKAccountWebServiceFinancingPlanFundingSourceActionRequest : PKPaymentRewrapRequest {
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
- (id)_murlRequestWithServiceURL:(id)arg1 endpointComponents:(id)arg2 queryParameters:(id)arg3 appleAccountInformation:(id)arg4;
- (id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 rewrapData:(id)arg3 appleAccountInformation:(id)arg4;
- (id)accountIdentifier;
- (id)baseURL;
- (unsigned long long)intent;
- (id)planIdentifier;
- (void)setAccountIdentifier:(id)arg1;
- (void)setBaseURL:(id)arg1;
- (void)setIntent:(unsigned long long)arg1;
- (void)setPlanIdentifier:(id)arg1;

@end
