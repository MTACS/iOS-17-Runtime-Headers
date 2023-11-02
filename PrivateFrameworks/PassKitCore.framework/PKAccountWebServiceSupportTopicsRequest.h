
@interface PKAccountWebServiceSupportTopicsRequest : PKAccountWebServiceRequest {
    NSString * _accountIdentifier;
    NSURL * _baseURL;
    PKPaymentTransaction * _transaction;
}

@property (nonatomic, copy) NSString *accountIdentifier;
@property (nonatomic, copy) NSURL *baseURL;
@property (nonatomic, retain) PKPaymentTransaction *transaction;

- (void).cxx_destruct;
- (id)_urlRequestWithAppleAccountInformation:(id)arg1;
- (id)accountIdentifier;
- (id)baseURL;
- (void)setAccountIdentifier:(id)arg1;
- (void)setBaseURL:(id)arg1;
- (void)setTransaction:(id)arg1;
- (id)transaction;

@end
