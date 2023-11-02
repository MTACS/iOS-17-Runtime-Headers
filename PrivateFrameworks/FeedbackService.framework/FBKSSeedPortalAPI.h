
@interface FBKSSeedPortalAPI : NSObject {
    <FBKSHTTPClientProtocol> * _coreHTTPClient;
    short  _environment;
    NSURL * _feedbackURL;
    NSURL * _seedPortalURL;
}

@property (nonatomic, retain) <FBKSHTTPClientProtocol> *coreHTTPClient;
@property (nonatomic) short environment;
@property (nonatomic, retain) NSURL *feedbackURL;
@property (readonly) NSHTTPCookie *seedPortalSession;
@property (nonatomic, retain) NSURL *seedPortalURL;

- (void).cxx_destruct;
- (id)_filterForValue;
- (id)coreHTTPClient;
- (short)environment;
- (id)feedbackURL;
- (id)formItemsURLFormTat:(id)arg1;
- (id)initClient:(id)arg1;
- (void)loadFormItemWithFormTat:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)logOutServerSideWithCompletion:(id /* block */)arg1;
- (id)loginWithTokenURL;
- (void)seedPortalLoginAsUnauthenticatedUserWithSuccessHandler:(id /* block */)arg1 error:(id /* block */)arg2;
- (void)seedPortalLoginWithDeviceToken:(id)arg1 success:(id /* block */)arg2 error:(id /* block */)arg3;
- (id)seedPortalSession;
- (id)seedPortalURL;
- (void)setCoreHTTPClient:(id)arg1;
- (void)setEnvironment:(short)arg1;
- (void)setFeedbackURL:(id)arg1;
- (void)setSeedPortalURL:(id)arg1;
- (id)signOutURL;
- (id)unauthenticatedLoginURL;

@end
