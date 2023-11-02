
@interface PKAccountWebServiceFinancingPlanChangeAutoPaymentRequest : PKAccountWebServiceRequest {
    NSString * _accountIdentifier;
    bool  _autoPayment;
    NSURL * _baseURL;
    NSString * _planIdentifier;
}

@property (nonatomic, copy) NSString *accountIdentifier;
@property (nonatomic) bool autoPayment;
@property (nonatomic, retain) NSURL *baseURL;
@property (nonatomic, copy) NSString *planIdentifier;

- (void).cxx_destruct;
- (id)_urlRequestWithAppleAccountInformation:(id)arg1;
- (id)accountIdentifier;
- (bool)autoPayment;
- (id)baseURL;
- (id)planIdentifier;
- (void)setAccountIdentifier:(id)arg1;
- (void)setAutoPayment:(bool)arg1;
- (void)setBaseURL:(id)arg1;
- (void)setPlanIdentifier:(id)arg1;

@end
