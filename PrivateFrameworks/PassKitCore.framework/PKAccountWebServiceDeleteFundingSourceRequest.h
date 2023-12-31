
@interface PKAccountWebServiceDeleteFundingSourceRequest : PKAccountWebServiceRequest {
    NSString * _accountIdentifier;
    NSURL * _baseURL;
    NSString * _fundingSourceIdentifier;
}

@property (nonatomic, copy) NSString *accountIdentifier;
@property (nonatomic, retain) NSURL *baseURL;
@property (nonatomic, retain) NSString *fundingSourceIdentifier;

- (void).cxx_destruct;
- (id)_urlRequestWithAppleAccountInformation:(id)arg1;
- (id)accountIdentifier;
- (id)baseURL;
- (id)fundingSourceIdentifier;
- (void)setAccountIdentifier:(id)arg1;
- (void)setBaseURL:(id)arg1;
- (void)setFundingSourceIdentifier:(id)arg1;

@end
