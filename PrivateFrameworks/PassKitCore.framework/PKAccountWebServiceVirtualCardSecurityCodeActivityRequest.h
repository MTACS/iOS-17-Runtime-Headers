
@interface PKAccountWebServiceVirtualCardSecurityCodeActivityRequest : PKAccountWebServiceRequest {
    NSString * _accountIdentifier;
    long long  _action;
    NSURL * _baseURL;
    NSString * _securityCodeIdentifier;
    NSDate * _timestamp;
    NSString * _virtualCardIdentifier;
}

@property (nonatomic, copy) NSString *accountIdentifier;
@property (nonatomic) long long action;
@property (nonatomic, retain) NSURL *baseURL;
@property (nonatomic, copy) NSString *securityCodeIdentifier;
@property (nonatomic, copy) NSDate *timestamp;
@property (nonatomic, copy) NSString *virtualCardIdentifier;

- (void).cxx_destruct;
- (id)_urlRequestWithAppleAccountInformation:(id)arg1;
- (id)accountIdentifier;
- (long long)action;
- (id)baseURL;
- (id)securityCodeIdentifier;
- (void)setAccountIdentifier:(id)arg1;
- (void)setAction:(long long)arg1;
- (void)setBaseURL:(id)arg1;
- (void)setSecurityCodeIdentifier:(id)arg1;
- (void)setTimestamp:(id)arg1;
- (void)setVirtualCardIdentifier:(id)arg1;
- (id)timestamp;
- (id)virtualCardIdentifier;

@end
