
@interface LKLoginController : NSObject <LKLoginDaemonProtocol> {
    id /* block */  _completionHandler;
    NSXPCConnection * _connection;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (retain) NSXPCConnection *connection;

+ (id)sharedController;

- (void).cxx_destruct;
- (void)checkInWithCurrentEnvironment:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)chooseUserWithIdentifier:(id)arg1 inClassWithID:(id)arg2 password:(id)arg3 withCompletionHandler:(id /* block */)arg4;
- (id /* block */)completionHandler;
- (id)connection;
- (id)init;
- (void)interruptLocalUserSwitchTest;
- (void)isReadyToLoginWithCompletionHandler:(id /* block */)arg1;
- (void)isReadyToLogoutWithCompletionHandler:(id /* block */)arg1;
- (void)loginAppleID:(id)arg1 password:(id)arg2 localLoginOnly:(bool)arg3 isTemporarySession:(bool)arg4 withCompletionHandler:(id /* block */)arg5;
- (void)logoutWithLogoutType:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (id)proxy;
- (id)recentUsers;
- (void)saveClassConfiguration:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setConnection:(id)arg1;
- (void)triggerLocalUserSwitchTestForType:(unsigned long long)arg1 count:(long long)arg2 username:(id)arg3 password:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)updateGlobalDefaultsValue:(id)arg1 forKey:(id)arg2 completionHandler:(id /* block */)arg3;

@end
