
@interface HMDRemoteLoginReceiverAuthentication : HMDRemoteLoginAuthentication {
    <HMDRemoteLoginReceiverAuthenticationDelegate> * _delegate;
}

@property (nonatomic, readonly) <HMDRemoteLoginReceiverAuthenticationDelegate> *delegate;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_authenticateAccount:(id)arg1 targetedAccountType:(unsigned long long)arg2;
- (void)_authenticateForAccountType:(unsigned long long)arg1 usingAuthenticationResults:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_authenticateStoreWithAuthenticationResults:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_completedAuthenticationRequest:(id)arg1 loggedInAccount:(id)arg2;
- (void)_handleAuthenticationResults:(id)arg1 error:(id)arg2 targetedAccountType:(unsigned long long)arg3;
- (void)_saveRemoteVerifiedAccount:(id)arg1 completion:(id /* block */)arg2;
- (id)delegate;
- (id)initWithSessionID:(id)arg1 remoteDevice:(id)arg2 workQueue:(id)arg3 remoteMessageSender:(id)arg4 delegate:(id)arg5;

@end
