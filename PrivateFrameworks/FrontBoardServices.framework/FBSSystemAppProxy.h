
@interface FBSSystemAppProxy : FBSServiceFacilityClient {
    unsigned long long  _checkoutCount;
    BSServiceConnectionEndpoint * _endpoint;
    BSProcessHandle * _processHandle;
}

+ (id)checkoutProxyWithEndpoint:(id)arg1;

- (void).cxx_destruct;
- (void)_handleConnect:(id)arg1;
- (void)_handleTerminationReply:(id)arg1 targetDescription:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)_sendMessageType:(long long)arg1 withMessage:(id /* block */)arg2 withReplyHandler:(id /* block */)arg3 waitForReply:(bool)arg4;
- (void)checkin;
- (id)clientCallbackQueue;
- (void)fireCompletion:(id /* block */)arg1 error:(id)arg2;
- (void)fireCompletion:(id /* block */)arg1 openAppErrorCode:(long long)arg2;
- (void)handleMessage:(id)arg1 withType:(long long)arg2;
- (bool)isPasscodeLockedOrBlocked;
- (id)processHandleForBundleID:(id)arg1;
- (void)sendActions:(id)arg1 withResult:(id /* block */)arg2;
- (void)setKeyboardFocusApplication:(int)arg1 deferringToken:(id)arg2 completion:(id /* block */)arg3;
- (void)shutdownWithOptions:(id)arg1;
- (id)systemApplicationBundleIdentifier;
- (void)terminateApplication:(id)arg1 forReason:(long long)arg2 andReport:(bool)arg3 withDescription:(id)arg4 completion:(id /* block */)arg5;
- (void)terminateApplicationGroup:(long long)arg1 forReason:(long long)arg2 andReport:(bool)arg3 withDescription:(id)arg4 completion:(id /* block */)arg5;

@end
