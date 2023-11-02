
@interface CSActivationXPCClient : NSObject {
    NSObject<OS_xpc_object> * _xpcConnection;
}

@property (nonatomic, retain) NSObject<OS_xpc_object> *xpcConnection;

- (void).cxx_destruct;
- (id)_decodeError:(id)arg1;
- (void)_handleListenerError:(id)arg1;
- (void)_handleListenerEvent:(id)arg1;
- (void)_sendMessage:(id)arg1 connection:(id)arg2 completion:(id /* block */)arg3;
- (void)connect;
- (void)dealloc;
- (id)init;
- (void)notifyActivationEvent:(id)arg1 completion:(id /* block */)arg2;
- (void)setXpcConnection:(id)arg1;
- (id)xpcConnection;

@end
