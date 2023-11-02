
@interface ENUserStoreClient : ENStoreClient {
    NSString * _authenticationToken;
    EDAMUserStoreClient * _client;
}

@property (nonatomic, retain) NSString *authenticationToken;
@property (nonatomic, retain) EDAMUserStoreClient *client;

+ (id)userStoreClientWithUrl:(id)arg1 authenticationToken:(id)arg2;

- (void).cxx_destruct;
- (id)authenticateToBusiness;
- (void)authenticateToBusinessWithCompletion:(id /* block */)arg1;
- (void)authenticateToBusinessWithSuccess:(id /* block */)arg1 failure:(id /* block */)arg2;
- (id)authenticationToken;
- (void)checkVersionWithClientName:(id)arg1 edamVersionMajor:(short)arg2 edamVersionMinor:(short)arg3 completion:(id /* block */)arg4;
- (void)checkVersionWithClientName:(id)arg1 edamVersionMajor:(short)arg2 edamVersionMinor:(short)arg3 success:(id /* block */)arg4 failure:(id /* block */)arg5;
- (id)client;
- (void)fetchBootstrapInfoWithLocale:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchNoteStoreURLWithCompletion:(id /* block */)arg1;
- (void)fetchPremiumInfoWithCompletion:(id /* block */)arg1;
- (void)fetchPublicUserInfoWithUsername:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchUserWithCompletion:(id /* block */)arg1;
- (void)getBootstrapInfoWithLocale:(id)arg1 success:(id /* block */)arg2 failure:(id /* block */)arg3;
- (void)getNoteStoreUrlWithSuccess:(id /* block */)arg1 failure:(id /* block */)arg2;
- (void)getPremiumInfoWithSuccess:(id /* block */)arg1 failure:(id /* block */)arg2;
- (void)getPublicUserInfoWithUsername:(id)arg1 success:(id /* block */)arg2 failure:(id /* block */)arg3;
- (void)getUserWithSuccess:(id /* block */)arg1 failure:(id /* block */)arg2;
- (id)initWithUserStoreUrl:(id)arg1 authenticationToken:(id)arg2;
- (void)revokeLongSessionWithAuthenticationToken:(id)arg1 completion:(id /* block */)arg2;
- (void)revokeLongSessionWithAuthenticationToken:(id)arg1 success:(id /* block */)arg2 failure:(id /* block */)arg3;
- (void)setAuthenticationToken:(id)arg1;
- (void)setClient:(id)arg1;

@end
