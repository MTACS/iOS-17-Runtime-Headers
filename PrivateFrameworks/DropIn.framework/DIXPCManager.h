
@interface DIXPCManager : NSObject {
    void _connection;
    void checkInObservers;
    void clientContext;
    void clientQueue;
    void delegate;
    void dispatcher;
    void isConnectionValid;
    void lock;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  logger;
    void needsCheckIn;
    void notifyRegisterToken;
}

@property (nonatomic, readonly) DIClientContext *clientContext;
@property (nonatomic) OS_dispatch_queue *clientQueue;
@property (nonatomic, readonly) NSXPCConnection *connection;
@property (nonatomic) <DIXPCManagerDelegate> *delegate;

- (void).cxx_destruct;
- (void)addCheckInObserver:(id)arg1;
- (id)clientContext;
- (id)clientQueue;
- (id)connection;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)initWithClientContext:(id)arg1 dispatcher:(id)arg2 clientQueue:(id)arg3;
- (void)setClientQueue:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
