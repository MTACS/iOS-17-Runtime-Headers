
@interface CXCallObserverXPCClient : NSObject <CXCallObserverDataSource> {
    bool  _clientsShouldConnect;
    int  _clientsShouldConnectToken;
    NSObject<OS_dispatch_queue> * _concurrentQueue;
    NSXPCConnection * _connection;
    NSHashTable * _delegates;
    NSMutableDictionary * _mutableCallUUIDToCallMap;
}

@property (nonatomic, readonly, copy) NSDictionary *callUUIDToCallMap;
@property (nonatomic) bool clientsShouldConnect;
@property (nonatomic) int clientsShouldConnectToken;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *concurrentQueue;
@property (nonatomic, retain) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSHashTable *delegates;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableDictionary *mutableCallUUIDToCallMap;
@property (readonly) Class superclass;

+ (void)releaseSharedXPCClient;
+ (id)sharedXPCClient;
+ (id)sharedXPCClientSemaphore;

- (void).cxx_destruct;
- (void)_addOrUpdateCall:(id)arg1;
- (id)_init;
- (void)_invalidate;
- (void)_markAllCallsAsEnded;
- (id)_remoteObjectProxyWithErrorHandler:(id /* block */)arg1 isSynchronous:(bool)arg2;
- (void)_removeCall:(id)arg1;
- (void)_requestCalls;
- (void)addDelegate:(id)arg1;
- (oneway void)addOrUpdateCall:(id)arg1;
- (id)callUUIDToCallMap;
- (bool)clientsShouldConnect;
- (int)clientsShouldConnectToken;
- (id)concurrentQueue;
- (id)connection;
- (void)dealloc;
- (id)delegates;
- (id)init;
- (void)invalidate;
- (id)mutableCallUUIDToCallMap;
- (oneway void)removeCall:(id)arg1;
- (void)removeDelegate:(id)arg1;
- (void)requestTransaction:(id)arg1 completion:(id /* block */)arg2;
- (void)setClientsShouldConnect:(bool)arg1;
- (void)setClientsShouldConnectToken:(int)arg1;
- (void)setConnection:(id)arg1;

@end
