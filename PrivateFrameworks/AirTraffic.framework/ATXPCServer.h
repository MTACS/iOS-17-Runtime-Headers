
@interface ATXPCServer : NSObject {
    NSObject<OS_xpc_object> * _conn;
    NSMutableSet * _connections;
    id /* block */  _defaultMessageHandler;
    id /* block */  _disconnectHandler;
    NSMutableDictionary * _handlerMap;
    NSObject<OS_dispatch_source> * _idleTimerSource;
    id /* block */  _lockdownHandler;
    id /* block */  _shutdownHandler;
    bool  _timerHasFiredSinceLastMessage;
    NSObject<OS_dispatch_queue> * _timerQueue;
}

@property (nonatomic, readonly) NSSet *connections;
@property (nonatomic, copy) id /* block */ defaultMessageHandler;
@property (nonatomic, copy) id /* block */ disconnectHandler;
@property (nonatomic, copy) id /* block */ lockdownHandler;
@property (nonatomic, copy) id /* block */ shutdownHandler;

- (void).cxx_destruct;
- (id)_connections;
- (bool)_doingWork;
- (void)_handleNewConnection:(id)arg1;
- (id /* block */)_handlerForMessageName:(id)arg1;
- (id)_highAvailabilityQueue;
- (void)_rescheduleIdleTimerSourceWithInterval:(double)arg1;
- (void)_resetMessageFlag;
- (void)_runShutdownHandler;
- (id)connections;
- (void)dealloc;
- (id /* block */)defaultMessageHandler;
- (id /* block */)disconnectHandler;
- (id)initListenerWithServiceName:(id)arg1;
- (id /* block */)lockdownHandler;
- (void)setDefaultMessageHandler:(id /* block */)arg1;
- (void)setDisconnectHandler:(id /* block */)arg1;
- (void)setHandlerForMessageName:(id)arg1 handler:(id /* block */)arg2;
- (void)setIdleTimerInterval:(double)arg1;
- (void)setLockdownHandler:(id /* block */)arg1;
- (void)setShutdownHandler:(id /* block */)arg1;
- (id /* block */)shutdownHandler;

@end