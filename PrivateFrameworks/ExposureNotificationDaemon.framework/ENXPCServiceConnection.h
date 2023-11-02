
@interface ENXPCServiceConnection : NSObject {
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    ENFileSessionDaemon * _fileSession;
    int  _pid;
    ENXPCServiceListener * _serviceListener;
    NSObject<OS_xpc_object> * _xpcConnection;
}

+ (id)connectionWithXPCConnection:(id)arg1 serviceListener:(id)arg2 dispatchQueue:(id)arg3;

- (void).cxx_destruct;
- (void)activate;
- (void)invalidate;
- (void)xpcConnectionEvent:(id)arg1;
- (void)xpcConnectionRequest:(id)arg1;
- (void)xpcFileSessionActivate:(id)arg1 archive:(bool)arg2;
- (void)xpcFileSessionInvalidate:(id)arg1;
- (void)xpcFileSessionReadTEKBatch:(id)arg1;
- (void)xpcSendMessage:(id)arg1;
- (void)xpcSendReplyError:(id)arg1 request:(id)arg2;

@end
