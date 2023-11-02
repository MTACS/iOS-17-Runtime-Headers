
@interface CRKStudentDaemonProxy : NSObject <CATTaskClientDelegate, CRKRequestPerformingProtocol> {
    bool  _connected;
    id /* block */  _connectionBuilder;
    long long  _maxConnectionAttempts;
    bool  _userExpectsReconnect;
    bool  mConnecting;
    long long  mConnectionAttempt;
    NSHashTable * mObservers;
    CATOperationQueue * mOperationQueue;
    CATTaskClient * mTaskClient;
}

@property (getter=isConnected, nonatomic) bool connected;
@property (nonatomic, readonly) id /* block */ connectionBuilder;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long maxConnectionAttempts;
@property (readonly) Class superclass;
@property (nonatomic) bool userExpectsReconnect;

+ (void)fetchResourceFromURL:(id)arg1 completion:(id /* block */)arg2;
+ (void)setActiveStudentIdentifier:(id)arg1 completion:(id /* block */)arg2;
+ (id)studentDaemonProxy;
+ (void)studentDidAuthenticate:(id)arg1 completion:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (void)client:(id)arg1 didInterruptWithError:(id)arg2;
- (void)client:(id)arg1 didReceiveNotificationWithName:(id)arg2 userInfo:(id)arg3;
- (void)clientDidConnect:(id)arg1;
- (void)clientDidDisconnect:(id)arg1;
- (void)connect;
- (id /* block */)connectionBuilder;
- (void)dealloc;
- (void)disconnect;
- (void)enqueueOperation:(id)arg1;
- (id)enqueuedOperationForRequest:(id)arg1;
- (id)init;
- (id)initWithConnectionBuilder:(id /* block */)arg1;
- (bool)isConnected;
- (long long)maxConnectionAttempts;
- (id)operationForRequest:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)setConnected:(bool)arg1;
- (void)setMaxConnectionAttempts:(long long)arg1;
- (void)setUserExpectsReconnect:(bool)arg1;
- (bool)userExpectsReconnect;

@end
