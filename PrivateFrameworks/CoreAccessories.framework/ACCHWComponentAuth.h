
@interface ACCHWComponentAuth : NSObject {
    NSXPCConnection * _xpcConnection;
}

@property (nonatomic, retain) NSXPCConnection *xpcConnection;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)_init;
- (void)authenticateBatteryWithChallenge:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)authenticateTouchControllerWithChallenge:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)authenticateTouchControllerWithChallenge:(id)arg1 completionHandler:(id /* block */)arg2 updateRegistry:(bool)arg3;
- (void)authenticateVeridianWithChallenge:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (void)setXpcConnection:(id)arg1;
- (void)signVeridianChallenge:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)verifyBatteryMatch:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)xpcConnection;

@end
