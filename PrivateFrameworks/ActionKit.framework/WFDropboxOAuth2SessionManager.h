
@interface WFDropboxOAuth2SessionManager : WFOAuth2SessionManager <WFOAuth2ProviderSessionManager, WFOAuth2RevocableSessionManager>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)appAuthorizationSessionWithCompletionHandler:(id /* block */)arg1;
- (void)authenticateWithLegacyAccessToken:(id)arg1 accessTokenSecret:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)authorizationSessionWithCompletionHandler:(id /* block */)arg1;
- (id)initWithClientID:(id)arg1 clientSecret:(id)arg2;
- (id)initWithSessionConfiguration:(id)arg1 clientID:(id)arg2 clientSecret:(id)arg3;
- (void)revokeCredential:(id)arg1 completionHandler:(id /* block */)arg2;

@end
