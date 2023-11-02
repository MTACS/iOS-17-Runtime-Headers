
@interface XAMWriter : NSObject {
    <XAMAuthorizationProvider> * _authorizationProvider;
    id /* block */  _writerConnectionFactory;
}

@property (readonly) <XAMAuthorizationProvider> *authorizationProvider;
@property (readonly) id /* block */ writerConnectionFactory;

+ (void)resetSharedWriter;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_authenticateAndEnableAutomationModeWithProxy:(id)arg1 completion:(id /* block */)arg2;
- (void)_enableAutomationModeWithProxy:(id)arg1 authorization:(id)arg2 completion:(id /* block */)arg3;
- (void)_enableAutomationModeWithProxy:(id)arg1 completion:(id /* block */)arg2;
- (void)_setAutomationModeEnabled:(bool)arg1 withCompletion:(id /* block */)arg2;
- (void)_usingAsyncProxyEnablePasswordlessAutomation:(bool)arg1 withCompletion:(id /* block */)arg2;
- (bool)_usingSyncProxy:(id /* block */)arg1 withError:(id*)arg2;
- (id)authorizationProvider;
- (void)createNoAuthenticationRequiredCookieWithCompletion:(id /* block */)arg1;
- (bool)createNoAuthenticationRequiredCookieWithError:(id*)arg1;
- (void)disableAutomationModeWithCompletion:(id /* block */)arg1;
- (bool)disableAutomationModeWithError:(id*)arg1;
- (void)enableAutomationModeWithCompletion:(id /* block */)arg1;
- (bool)enableAutomationModeWithError:(id*)arg1;
- (id)initWithWriterConnectionFactory:(id /* block */)arg1 authorizationProvider:(id)arg2;
- (void)removeNoAuthenticationRequiredCookieWithCompletion:(id /* block */)arg1;
- (bool)removeNoAuthenticationRequiredCookieWithError:(id*)arg1;
- (id /* block */)writerConnectionFactory;

@end
