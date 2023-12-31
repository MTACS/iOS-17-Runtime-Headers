
@interface FBSSystemService : NSObject {
    FBSOpenApplicationService * _defaultOpenApplicationService;
    FBSSystemAppProxy * _systemAppProxy;
}

+ (id)clientCallbackQueue;
+ (id)sharedService;

- (void).cxx_destruct;
- (id)badgeValueForBundleID:(id)arg1;
- (bool)canOpenApplication:(id)arg1 reason:(long long*)arg2;
- (void)cleanupClientPort:(unsigned int)arg1;
- (unsigned int)createClientPort;
- (void)dataResetWithRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithEndpoint:(id)arg1;
- (bool)isPasscodeLockedOrBlocked;
- (void)openApplication:(id)arg1 options:(id)arg2 clientPort:(unsigned int)arg3 withResult:(id /* block */)arg4;
- (void)openApplication:(id)arg1 options:(id)arg2 withResult:(id /* block */)arg3;
- (void)openURL:(id)arg1 application:(id)arg2 options:(id)arg3 clientPort:(unsigned int)arg4 withResult:(id /* block */)arg5;
- (int)pidForApplication:(id)arg1;
- (id)processHandleForApplication:(id)arg1;
- (void)reboot;
- (void)sendActions:(id)arg1 withResult:(id /* block */)arg2;
- (void)setBadgeValue:(id)arg1 forBundleID:(id)arg2;
- (void)setKeyboardFocusApplicationPID:(int)arg1 completion:(id /* block */)arg2;
- (void)setKeyboardFocusApplicationPID:(int)arg1 deferringToken:(id)arg2 completion:(id /* block */)arg3;
- (void)setKeyboardFocusApplicationWithBundleID:(id)arg1 pid:(int)arg2 completion:(id /* block */)arg3;
- (void)shutdown;
- (void)shutdownWithOptions:(id)arg1;
- (id)systemApplicationBundleIdentifier;
- (void)terminateApplication:(id)arg1 forReason:(long long)arg2 andReport:(bool)arg3 withDescription:(id)arg4;
- (void)terminateApplication:(id)arg1 forReason:(long long)arg2 andReport:(bool)arg3 withDescription:(id)arg4 completion:(id /* block */)arg5;
- (void)terminateApplicationGroup:(long long)arg1 forReason:(long long)arg2 andReport:(bool)arg3 withDescription:(id)arg4;
- (void)terminateApplicationGroup:(long long)arg1 forReason:(long long)arg2 andReport:(bool)arg3 withDescription:(id)arg4 completion:(id /* block */)arg5;

@end
