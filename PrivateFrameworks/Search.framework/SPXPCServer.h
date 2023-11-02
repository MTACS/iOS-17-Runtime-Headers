
@interface SPXPCServer : NSObject {
    NSObject<OS_xpc_object> * _conn;
    NSMutableSet * _connections;
    NSObject<OS_dispatch_queue> * _connectionsQueue;
    id /* block */  _defaultMessageHandler;
    id /* block */  _disconnectHandler;
    NSObject<OS_dispatch_queue> * _eventQueue;
    id /* block */  _firstConnectionBlock;
    NSMutableDictionary * _handlerMap;
    double  _idleTimerInterval;
    unsigned int  _qos;
    bool  _shutdown;
    NSObject<OS_dispatch_queue> * _timerQueue;
    bool  hadConnection;
}

@property (nonatomic, copy) id /* block */ defaultMessageHandler;
@property (nonatomic, copy) id /* block */ disconnectHandler;
@property (nonatomic, copy) id /* block */ firstConnectionBlock;

- (void).cxx_destruct;
- (void)_handleNewConnection:(id)arg1 qos:(unsigned int)arg2;
- (id /* block */)_handlerForMessageName:(id)arg1;
- (id)_highAvailabilityQueue;
- (void)dealloc;
- (id /* block */)defaultMessageHandler;
- (id /* block */)disconnectHandler;
- (id /* block */)firstConnectionBlock;
- (id)initListenerWithServiceName:(id)arg1;
- (id)initListenerWithServiceName:(id)arg1 onQueue:(id)arg2 qos:(unsigned int)arg3;
- (void)setDefaultMessageHandler:(id /* block */)arg1;
- (void)setDisconnectHandler:(id /* block */)arg1;
- (void)setFirstConnectionBlock:(id /* block */)arg1;
- (void)setHandlerForMessageName:(id)arg1 handler:(id /* block */)arg2;
- (bool)shutdown;
- (void)startListening;

@end
