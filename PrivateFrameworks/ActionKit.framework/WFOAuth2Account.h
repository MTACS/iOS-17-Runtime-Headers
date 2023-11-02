
@interface WFOAuth2Account : WFAccount {
    WFOAuth2Credential * _credential;
}

@property (nonatomic, copy) WFOAuth2Credential *credential;

+ (id)accountWithCredential:(id)arg1;
+ (id)clientID;
+ (id)clientSecret;
+ (id)migrate:(id)arg1;
+ (id)redirectURI;
+ (id)responseType;
+ (id)scopes;
+ (id)sessionManager;

- (void).cxx_destruct;
- (id)credential;
- (bool)isValid;
- (void)refreshWithCompletionHandler:(id /* block */)arg1;
- (void)setCredential:(id)arg1;

@end
