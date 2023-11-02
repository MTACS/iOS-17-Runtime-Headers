
@interface MBConnection : NSObject {
    <MBConnectionDelegate> * _delegate;
    NSString * _personaIdentifier;
    _Atomic int  _pid;
    NSString * _processName;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_xpc_object> * _xpcConnection;
}

@property <MBConnectionDelegate> *delegate;
@property (retain) NSString *personaIdentifier;
@property (retain) NSString *processName;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSObject<OS_xpc_object> *xpcConnection;

- (void).cxx_destruct;
- (void)_handleXPCError:(id)arg1;
- (void)_handleXPCEvent:(id)arg1;
- (void)_refreshProcessInfoWithXPCConnection:(id)arg1;
- (void)_setEventHandlerForXPCConnection:(id)arg1;
- (void)cancel;
- (id)delegate;
- (id)description;
- (id)initWithServiceName:(id)arg1;
- (id)initWithServiceName:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;
- (id)initWithXPCConnection:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;
- (id)personaIdentifier;
- (id)processName;
- (id)queue;
- (void)resume;
- (void)sendMessage:(id)arg1;
- (void)sendMessage:(id)arg1 barrierBlock:(id /* block */)arg2;
- (id)sendMessageWithReplyAndSync:(id)arg1 error:(id*)arg2;
- (void)setDelegate:(id)arg1;
- (void)setPersonaIdentifier:(id)arg1;
- (void)setProcessName:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setXpcConnection:(id)arg1;
- (void)suspend;
- (id)xpcConnection;

@end
