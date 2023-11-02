
@interface POUIServiceConnection : NSObject <POUIServiceProtocol> {
    bool  _forLogin;
    unsigned int  _uid;
    NSXPCConnection * _xpcConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property bool forLogin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property unsigned int uid;
@property (retain) NSXPCConnection *xpcConnection;

+ (id)xpcQueue;

- (void).cxx_destruct;
- (bool)_connectToService;
- (void)dealloc;
- (void)deviceStatusWithCompletion:(id /* block */)arg1;
- (bool)forLogin;
- (id)init;
- (void)setForLogin:(bool)arg1;
- (void)setUid:(unsigned int)arg1;
- (void)setXpcConnection:(id)arg1;
- (void)startAction:(long long)arg1 forUserName:(id)arg2 completion:(id /* block */)arg3;
- (void)startDeviceAction:(long long)arg1 completion:(id /* block */)arg2;
- (void)statusForUser:(id)arg1 completion:(id /* block */)arg2;
- (unsigned int)uid;
- (id)xpcConnection;

@end
