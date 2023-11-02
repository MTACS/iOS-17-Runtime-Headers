
@interface WFOAuth2SessionManager : NSObject {
    NSString * _authenticationMethod;
    NSURL * _authorizationURL;
    NSString * _clientID;
    NSString * _clientSecret;
    NSURLSession * _session;
    NSURL * _tokenURL;
}

@property (nonatomic, readonly) NSString *authenticationMethod;
@property (nonatomic, readonly, copy) NSURL *authorizationURL;
@property (nonatomic, readonly, copy) NSString *clientID;
@property (nonatomic, readonly, copy) NSString *clientSecret;
@property (nonatomic, readonly) NSURLSession *session;
@property (nonatomic, readonly, copy) NSURL *tokenURL;

+ (id)combinedScopeFromScopes:(id)arg1;

- (void).cxx_destruct;
- (void)authenticateWithCode:(id)arg1 redirectURI:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)authenticateWithParameters:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)authenticateWithRefreshCredential:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)authenticateWithRequest:(id)arg1 refreshToken:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)authenticateWithScopes:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)authenticateWithUsername:(id)arg1 password:(id)arg2 scopes:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)authenticationMethod;
- (id)authorizationSessionWithAuthorizationURL:(id)arg1 responseType:(id)arg2 scopes:(id)arg3 redirectURI:(id)arg4 specifyRedirectURI:(bool)arg5 completionHandler:(id /* block */)arg6;
- (id)authorizationSessionWithResponseType:(id)arg1 scopes:(id)arg2 redirectURI:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)authorizationURL;
- (id)clientID;
- (id)clientSecret;
- (id)initWithSessionConfiguration:(id)arg1 tokenURL:(id)arg2 authorizationURL:(id)arg3 authenticationMethod:(id)arg4 clientID:(id)arg5 clientSecret:(id)arg6;
- (void)sendRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)session;
- (id)tokenURL;

@end
