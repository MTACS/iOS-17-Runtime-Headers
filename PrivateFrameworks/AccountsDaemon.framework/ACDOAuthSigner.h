
@interface ACDOAuthSigner : NSObject <ACDOAuthSignerProtocol> {
    ACDClientAuthorizationManager * _authorizationManager;
    ACDClient * _client;
    ACDDatabaseConnection * _databaseConnection;
    bool  _shouldIncludeAppIdInRequest;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)new;

- (void).cxx_destruct;
- (bool)_permissionGrantedForBundleID:(id)arg1 onAccountType:(id)arg2;
- (id)_signedRequest:(id)arg1 withAccountObject:(id)arg2 applicationID:(id)arg3 timestamp:(id)arg4;
- (id)ckForAccountType:(id)arg1;
- (id)csForAccountType:(id)arg1;
- (id)init;
- (id)initWithClient:(id)arg1 databaseConnection:(id)arg2;
- (void)setClientBundleID:(id)arg1 withHandler:(id /* block */)arg2;
- (void)setShouldIncludeAppIdInRequest:(bool)arg1;
- (void)signURLRequest:(id)arg1 withAccount:(id)arg2 applicationID:(id)arg3 timestamp:(id)arg4 handler:(id /* block */)arg5;
- (void)signURLRequest:(id)arg1 withAccount:(id)arg2 callingPID:(id)arg3 timestamp:(id)arg4 handler:(id /* block */)arg5;
- (id)signedRequest:(id)arg1 withAccount:(id)arg2 applicationID:(id)arg3 timestamp:(id)arg4;

@end
