
@interface AAAuthenticateRequest : AARequest {
    ACAccount * _account;
    NSString * _authToken;
    NSString * _password;
    NSString * _username;
}

@property (nonatomic, retain) ACAccount *account;
@property (nonatomic, copy) NSString *authToken;
@property (nonatomic, copy) NSString *password;
@property (nonatomic, copy) NSString *username;

+ (Class)responseClass;

- (void).cxx_destruct;
- (id)account;
- (id)authToken;
- (id)initWithAccount:(id)arg1;
- (id)initWithURLString:(id)arg1 username:(id)arg2 password:(id)arg3;
- (id)initWithUsername:(id)arg1 password:(id)arg2;
- (id)password;
- (void)setAccount:(id)arg1;
- (void)setAuthToken:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setUsername:(id)arg1;
- (id)urlCredential;
- (id)urlRequest;
- (id)urlString;
- (id)username;

@end
