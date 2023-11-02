
@interface PKAccountWebServicePayLaterFinancingPlanCancellationRequest : PKAccountWebServiceRequest {
    NSString * _accountIdentifier;
    NSURL * _baseURL;
    NSString * _cancellationReasonDescription;
    NSString * _cancellationReasonIdentifier;
    NSString * _planIdentifier;
}

@property (nonatomic, copy) NSString *accountIdentifier;
@property (nonatomic, retain) NSURL *baseURL;
@property (nonatomic, copy) NSString *cancellationReasonDescription;
@property (nonatomic, copy) NSString *cancellationReasonIdentifier;
@property (nonatomic, copy) NSString *planIdentifier;

- (void).cxx_destruct;
- (id)_urlRequestWithAppleAccountInformation:(id)arg1;
- (id)accountIdentifier;
- (id)baseURL;
- (id)cancellationReasonDescription;
- (id)cancellationReasonIdentifier;
- (id)planIdentifier;
- (void)setAccountIdentifier:(id)arg1;
- (void)setBaseURL:(id)arg1;
- (void)setCancellationReasonDescription:(id)arg1;
- (void)setCancellationReasonIdentifier:(id)arg1;
- (void)setPlanIdentifier:(id)arg1;

@end
