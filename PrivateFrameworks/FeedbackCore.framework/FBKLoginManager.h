
@interface FBKLoginManager : NSObject {
    FBKData<FBKLoginManagerDelegate> * _FBKData;
    FBKSeedPortalAPI<FBKLoginManagerDelegate> * _api;
    bool  _loggedInAsSomeoneElse;
    unsigned long long  _loginState;
    id /* block */  _pendingLoginOperation;
    NSMutableArray * _postLogOutTaskQueue;
    NSMutableArray * _postLoginTaskQueue;
    <FBKReAuthenticationHandler> * _reAuthHandler;
}

@property FBKData<FBKLoginManagerDelegate> *FBKData;
@property FBKSeedPortalAPI<FBKLoginManagerDelegate> *api;
@property bool loggedInAsSomeoneElse;
@property unsigned long long loginState;
@property (copy) id /* block */ pendingLoginOperation;
@property (nonatomic, retain) NSMutableArray *postLogOutTaskQueue;
@property (nonatomic, retain) NSMutableArray *postLoginTaskQueue;
@property (nonatomic) <FBKReAuthenticationHandler> *reAuthHandler;

- (void).cxx_destruct;
- (id)FBKData;
- (void)_drainLogOutTaskQueue;
- (void)_drainLoginTaskQueue;
- (bool)_errorIncludesNotAParticipant:(id)arg1;
- (bool)_errorIncludesOutdatedVersion:(id)arg1;
- (bool)_hasInternalDeviceToken;
- (void)_internalLoginWithDeviceToken:(id /* block */)arg1;
- (id)_loginInfo;
- (void)_loginWithUsername:(id)arg1 authenticationResults:(id)arg2 completion:(id /* block */)arg3;
- (bool)_usesNewAutoLoginFlowAfterInvalidSessionError;
- (id)api;
- (id)authenticationContextForUsername:(id)arg1;
- (void)autoLoginUsingSystemAccount:(bool)arg1 completion:(id /* block */)arg2;
- (void)autoLoginWithCompletion:(id /* block */)arg1;
- (void)autoLoginWithUserID:(id)arg1 userName:(id)arg2 deviceToken:(id)arg3 usesSystemAccount:(bool)arg4 completion:(id /* block */)arg5;
- (void)backgroundStartupWithCompletion:(id /* block */)arg1;
- (void)clearLoginTaskQueue;
- (void)dealloc;
- (void)didLoginWithUserInfo:(id)arg1;
- (void)didLoginWithUserInfo:(id)arg1 completion:(id /* block */)arg2;
- (void)handleInteractiveLoginWithError:(id)arg1 success:(bool)arg2 completion:(id /* block */)arg3;
- (id)initWithAPI:(id)arg1;
- (void)interactiveStartupUsingSystemAccount:(bool)arg1 completion:(id /* block */)arg2;
- (void)interactiveStartupWithCompletion:(id /* block */)arg1;
- (void)interactiveStartupWithLaunchAction:(id)arg1 completion:(id /* block */)arg2;
- (void)logOut;
- (void)logOutIfNeededAndRun:(id /* block */)arg1;
- (bool)loggedInAsSomeoneElse;
- (void)loginAsAnonymousUserWithLaunchAction:(id)arg1 completion:(id /* block */)arg2;
- (void)loginAsUnauthenticatedUserWithCompletion:(id /* block */)arg1;
- (unsigned long long)loginState;
- (void)loginWithEphemeralDeviceToken:(id)arg1 completion:(id /* block */)arg2;
- (void)loginWithSystemAccountWithCompletion:(id /* block */)arg1;
- (void)loginWithUsername:(id)arg1 authenticationResults:(id)arg2 completion:(id /* block */)arg3;
- (id /* block */)pendingLoginOperation;
- (id)postLogOutTaskQueue;
- (id)postLoginTaskQueue;
- (id)reAuthHandler;
- (void)runAfterLogin:(id /* block */)arg1;
- (void)sessionDidBecomeInvalid:(id)arg1;
- (void)setApi:(id)arg1;
- (void)setFBKData:(id)arg1;
- (void)setLoggedInAsSomeoneElse:(bool)arg1;
- (void)setLoginState:(unsigned long long)arg1;
- (void)setPendingLoginOperation:(id /* block */)arg1;
- (void)setPostLogOutTaskQueue:(id)arg1;
- (void)setPostLoginTaskQueue:(id)arg1;
- (void)setReAuthHandler:(id)arg1;
- (id)signInViewControllerWithAuthenticationContext:(id)arg1;

@end
