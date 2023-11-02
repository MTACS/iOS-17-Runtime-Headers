
@interface PKAccountWebServiceAccountActionRequest : PKAccountWebServiceRequest {
    NSString * _accountIdentifier;
    NSString * _accountUserAltDSID;
    PKAccountAction * _action;
    NSURL * _baseURL;
}

@property (nonatomic, copy) NSString *accountIdentifier;
@property (nonatomic, copy) NSString *accountUserAltDSID;
@property (nonatomic, retain) PKAccountAction *action;
@property (nonatomic, retain) NSURL *baseURL;

- (void).cxx_destruct;
- (id)_urlRequestWithAppleAccountInformation:(id)arg1;
- (id)accountIdentifier;
- (id)accountUserAltDSID;
- (id)action;
- (id)baseURL;
- (void)setAccountIdentifier:(id)arg1;
- (void)setAccountUserAltDSID:(id)arg1;
- (void)setAction:(id)arg1;
- (void)setBaseURL:(id)arg1;

@end
