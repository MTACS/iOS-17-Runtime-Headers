
@interface PKAccountWebServiceFinancingPlanNonceRequest : PKAccountWebServiceRequest {
    NSString * _accountIdentifier;
    PKPaymentAugmentBaseRequest * _augmentBaseRequest;
    NSURL * _baseURL;
    NSString * _planIdentifier;
}

@property (nonatomic, copy) NSString *accountIdentifier;
@property (nonatomic, retain) PKPaymentAugmentBaseRequest *augmentBaseRequest;
@property (nonatomic, retain) NSURL *baseURL;
@property (nonatomic, copy) NSString *planIdentifier;

- (void).cxx_destruct;
- (id)_urlRequestWithAppleAccountInformation:(id)arg1;
- (id)accountIdentifier;
- (id)augmentBaseRequest;
- (id)baseURL;
- (id)planIdentifier;
- (void)setAccountIdentifier:(id)arg1;
- (void)setAugmentBaseRequest:(id)arg1;
- (void)setBaseURL:(id)arg1;
- (void)setPlanIdentifier:(id)arg1;

@end
