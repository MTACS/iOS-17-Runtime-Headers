
@interface PKAccountWebServiceAccountsRequest : PKAccountWebServiceRequest {
    NSURL * _accountServicesURL;
}

@property (nonatomic, retain) NSURL *accountServicesURL;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)arg1 AppleAccountInformation:(id)arg2;
- (id)accountServicesURL;
- (void)setAccountServicesURL:(id)arg1;

@end
