
@interface PKAccountWebServiceGenerateTopUpTokenRequest : PKAccountWebServiceRequest {
    NSString * _accountIdentifier;
    NSURL * _baseURL;
    long long  _tokenType;
}

@property (nonatomic, copy) NSString *accountIdentifier;
@property (nonatomic, retain) NSURL *baseURL;
@property (nonatomic) long long tokenType;

- (void).cxx_destruct;
- (id)_urlRequestWithAppleAccountInformation:(id)arg1;
- (id)accountIdentifier;
- (id)baseURL;
- (void)setAccountIdentifier:(id)arg1;
- (void)setBaseURL:(id)arg1;
- (void)setTokenType:(long long)arg1;
- (long long)tokenType;

@end
