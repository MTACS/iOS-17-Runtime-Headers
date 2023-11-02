
@interface PKAccountWebServicePayLaterFinancingPlanDisputeSendEmailRequest : PKAccountWebServiceRequest {
    NSString * _accountIdentifier;
    NSURL * _baseURL;
    NSString * _disputeIdentifier;
    NSString * _planIdentifier;
}

@property (nonatomic, copy) NSString *accountIdentifier;
@property (nonatomic, retain) NSURL *baseURL;
@property (nonatomic, copy) NSString *disputeIdentifier;
@property (nonatomic, copy) NSString *planIdentifier;

- (void).cxx_destruct;
- (id)_urlRequestWithAppleAccountInformation:(id)arg1;
- (id)accountIdentifier;
- (id)baseURL;
- (id)disputeIdentifier;
- (id)planIdentifier;
- (void)setAccountIdentifier:(id)arg1;
- (void)setBaseURL:(id)arg1;
- (void)setDisputeIdentifier:(id)arg1;
- (void)setPlanIdentifier:(id)arg1;

@end
