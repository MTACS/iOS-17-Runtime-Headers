
@interface PKAccountWebServiceDeleteAccountUserRequest : PKAccountWebServiceRequest {
    NSString * _accountIdentifier;
    NSString * _accountUserAltDSID;
    NSURL * _baseURL;
}

@property (nonatomic, copy) NSString *accountIdentifier;
@property (nonatomic, copy) NSString *accountUserAltDSID;
@property (nonatomic, retain) NSURL *baseURL;

- (void).cxx_destruct;
- (id)_urlRequestWithAppleAccountInformation:(id)arg1;
- (id)accountIdentifier;
- (id)accountUserAltDSID;
- (id)baseURL;
- (void)setAccountIdentifier:(id)arg1;
- (void)setAccountUserAltDSID:(id)arg1;
- (void)setBaseURL:(id)arg1;

@end
