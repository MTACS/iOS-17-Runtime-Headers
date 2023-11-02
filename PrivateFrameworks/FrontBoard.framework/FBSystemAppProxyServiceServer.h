
@interface FBSystemAppProxyServiceServer : FBSServiceFacility {
    FBServiceClientAuthenticator * _shutdownAuthenticator;
}

+ (id)sharedInstance;
+ (id)targetQueue;

- (void).cxx_destruct;
- (void)_handleActions:(id)arg1 forClient:(id)arg2;
- (void)_handleGetPasscodeLockedOrBlockedStatus:(id)arg1 forClient:(id)arg2;
- (void)_handleGetProcessHandle:(id)arg1 forClient:(id)arg2;
- (void)_handleShutdown:(id)arg1 forClient:(id)arg2;
- (void)_handleSystemApplicationBundleIdentifier:(id)arg1 forClient:(id)arg2;
- (void)_handleTerminateApplication:(id)arg1 forClient:(id)arg2;
- (void)_handleTerminateApplicationGroup:(id)arg1 forClient:(id)arg2;
- (id)_initWithQueue:(id)arg1;
- (void)noteClientDidConnect:(id)arg1 withMessage:(id)arg2;
- (void)noteClientDidDisconnect:(id)arg1;
- (void)noteDidReceiveMessage:(id)arg1 withType:(long long)arg2 fromClient:(id)arg3;

@end
