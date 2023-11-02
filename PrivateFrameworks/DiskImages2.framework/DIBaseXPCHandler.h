
@interface DIBaseXPCHandler : NSObject {
    NSXPCConnection * _connection;
    bool  _isPrivileged;
    id  _remoteProxy;
    NSObject<OS_dispatch_semaphore> * _semaphore;
    NSError * _xpcError;
}

@property (nonatomic, retain) NSXPCConnection *connection;
@property (nonatomic) bool isPrivileged;
@property (nonatomic, retain) id remoteProxy;
@property (nonatomic, retain) NSObject<OS_dispatch_semaphore> *semaphore;
@property (nonatomic, retain) NSError *xpcError;

- (void).cxx_destruct;
- (void)closeConnection;
- (bool)completeCommandWithError:(id*)arg1;
- (bool)connectWithError:(id*)arg1;
- (id)connection;
- (void)createConnection;
- (void)dealloc;
- (bool)dupStderrWithError:(id*)arg1;
- (id)init;
- (bool)isPrivileged;
- (id)remoteObjectInterface;
- (id)remoteProxy;
- (id)semaphore;
- (id)serviceName;
- (void)setConnection:(id)arg1;
- (void)setIsPrivileged:(bool)arg1;
- (void)setRemoteProxy:(id)arg1;
- (void)setSemaphore:(id)arg1;
- (void)setXpcError:(id)arg1;
- (void)signalCommandCompletedWithXpcError:(id)arg1;
- (id)xpcError;

@end
