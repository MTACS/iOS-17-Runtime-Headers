
@interface RMEnrollmentController : NSObject {
    NSMutableDictionary * _connectionByServiceName;
    long long  _enrollmentType;
    long long  _scope;
    bool  _synchronous;
}

@property (nonatomic, readonly) long long enrollmentType;
@property (nonatomic, readonly) long long scope;
@property (getter=isSynchronous, nonatomic) bool synchronous;

+ (id)synchronousEnrollmentControllerForManagementEnrollmentType:(long long)arg1 scope:(long long)arg2;
+ (id)userDefaultsEnrollmentURL;

- (void).cxx_destruct;
- (id)_agentConnection;
- (id)_agentProxyWithErrorHandler:(id /* block */)arg1;
- (id)_daemonConnection;
- (id)_daemonProxyWithErrorHandler:(id /* block */)arg1;
- (void)_discoverEnrollmentURLForDomain:(id)arg1 port:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_enrollmentURLFromWellKnownURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)_scopedProxyWithErrorHandler:(id /* block */)arg1;
- (void)_unenrollIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)deviceChannelEnrollmentExistsWithCompletionHandler:(id /* block */)arg1;
- (void)discoverEnrollmentURLForUserIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)enrollDeviceChannelWithURI:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)enrollUserChannelWithAccountIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)enrollViaMDMWithEnrollmentType:(long long)arg1 uri:(id)arg2 accountIdentifier:(id)arg3 personaIdentifier:(id)arg4 completionHandler:(id /* block */)arg5;
- (long long)enrollmentType;
- (id)initWithEnrollmentType:(long long)arg1 scope:(long long)arg2;
- (bool)isSynchronous;
- (void)managementChannelWithAccountIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)managementChannelWithEnrollmentURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (long long)scope;
- (void)setSynchronous:(bool)arg1;
- (void)syncWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)unenrollDeviceChannelWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)unenrollUserChannelWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)unenrollViaMDMWithEnrollmentType:(long long)arg1 identifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)updateWithIdentifier:(id)arg1 pushMessage:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)updateWithIdentifier:(id)arg1 tokensResponse:(id)arg2 completionHandler:(id /* block */)arg3;

@end
