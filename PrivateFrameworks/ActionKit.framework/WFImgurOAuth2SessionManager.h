
@interface WFImgurOAuth2SessionManager : WFOAuth2SessionManager <WFOAuth2ProviderSessionManager>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)authorizationSessionWithResponseType:(id)arg1 scopes:(id)arg2 redirectURI:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)initWithClientID:(id)arg1 clientSecret:(id)arg2;
- (id)initWithSessionConfiguration:(id)arg1 clientID:(id)arg2 clientSecret:(id)arg3;
- (void)sendRequest:(id)arg1 completionHandler:(id /* block */)arg2;

@end
