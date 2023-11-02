
@interface MFAAPairingManager : NSObject {
    NSXPCConnection * _xpcConnection;
}

@property (nonatomic, retain) NSXPCConnection *xpcConnection;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)_init;
- (void)addPairingWithToken:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)generatePairingTokenWithCompletionHandler:(id /* block */)arg1;
- (id)init;
- (void)removePairingWithToken:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setXpcConnection:(id)arg1;
- (void)verifyPairingWithToken:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)xpcConnection;

@end
