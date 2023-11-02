
@interface MDMSSAuthenticationRequestDelegate : MDMSSRequestDelegate <SSAuthenticateRequestDelegate> {
    SSAccount * _authenticatedAccount;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, retain) SSAuthenticateRequest *request;
@property (readonly) Class superclass;

+ (id)instanceWithAuthenticationContext:(id)arg1;

- (void).cxx_destruct;
- (void)authenticateRequest:(id)arg1 didReceiveResponse:(id)arg2;
- (void)startWithCompletionBlock:(id /* block */)arg1;
- (id)storeLoginFailedError;

@end
