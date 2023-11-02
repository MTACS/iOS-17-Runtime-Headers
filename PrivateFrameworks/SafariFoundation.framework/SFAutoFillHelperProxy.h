
@interface SFAutoFillHelperProxy : NSObject <SFAutoFillHelperProtocol> {
    NSXPCConnection * _connection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_getAutomaticStrongPasswordForAppWithPasswordRules:(id)arg1 confirmPasswordRules:(id)arg2 overrideApplicationIdentifier:(id)arg3 completion:(id /* block */)arg4;
- (void)dealloc;
- (void)getAutomaticStrongPasswordForAppWithPasswordRules:(id)arg1 confirmPasswordRules:(id)arg2 completion:(id /* block */)arg3;
- (void)getAutomaticStrongPasswordForAppWithPasswordRules:(id)arg1 confirmPasswordRules:(id)arg2 overrideApplicationIdentifier:(id)arg3 completion:(id /* block */)arg4;
- (void)getRemoteAutoFillAvailabilityWithCompletionHandler:(id /* block */)arg1;
- (id)init;
- (void)invalidate;

@end
