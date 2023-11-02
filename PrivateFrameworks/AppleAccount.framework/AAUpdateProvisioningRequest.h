
@interface AAUpdateProvisioningRequest : AARequest {
    ACAccount * _account;
    NSString * _authToken;
}

@property (nonatomic, retain) ACAccount *account;
@property (nonatomic, copy) NSString *authToken;

+ (Class)responseClass;

- (void).cxx_destruct;
- (id)account;
- (id)authToken;
- (id)initWithAccount:(id)arg1;
- (id)initWithAccount:(id)arg1 token:(id)arg2;
- (id)initWithURLString:(id)arg1 account:(id)arg2;
- (void)setAccount:(id)arg1;
- (void)setAuthToken:(id)arg1;
- (id)urlCredential;
- (id)urlRequest;
- (id)urlString;

@end
