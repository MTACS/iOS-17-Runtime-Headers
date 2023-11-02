
@interface GEOXPCConnection : NSObject {
    NSMapTable * _barrierDelegates;
    geo_isolater * _connectionIsolater;
    id /* block */  _creationBlock;
    NSString * _debugIdentifier;
    id /* block */  _eventHandler;
    bool  _greetingSent;
    bool  _hasActiveBarrier;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _reconnectAutomatically;
    id /* block */  _reconnectBlock;
    unsigned long long  _serverType;
    NSObject<OS_xpc_object> * _xpcConnection;
}

@property (getter=isConnected, nonatomic, readonly) bool connected;
@property (nonatomic, readonly) NSString *debugIdentifier;
@property (nonatomic) bool reconnectAutomatically;
@property (nonatomic, copy) id /* block */ reconnectBlock;
@property (nonatomic, readonly) unsigned long long serverType;
@property (nonatomic, readonly) NSObject<OS_xpc_object> *xpcConnection;

+ (id)createServerConnectionFor:(unsigned long long)arg1 debugIdentifier:(id)arg2 eventHandler:(id /* block */)arg3;
+ (id)createServerConnectionFor:(unsigned long long)arg1 debugIdentifier:(id)arg2 queue:(id)arg3 eventHandler:(id /* block */)arg4;
+ (id)createServerConnectionFor:(unsigned long long)arg1 debugIdentifier:(id)arg2 queue:(id)arg3 reconnectBlock:(id /* block */)arg4 eventHandler:(id /* block */)arg5;
+ (id /* block */)daemonXPCConnectionCreationBlock;
+ (id)defaultXPCServerConnectionQueue;
+ (void)setDaemonXPCConnectionCreationBlock:(id /* block */)arg1;
+ (void)setDefaultXPCServerConnectionQueue:(id)arg1;

- (void).cxx_destruct;
- (void)_barrierIsReady;
- (void)_reconnectIsolated;
- (void)_sendGreetingIfNeeded:(id)arg1;
- (void)close;
- (void)dealloc;
- (id)debugIdentifier;
- (id)initServerConnectionFor:(unsigned long long)arg1 debugIdentifier:(id)arg2 queue:(id)arg3 creationBlock:(id /* block */)arg4 reconnectBlock:(id /* block */)arg5 eventHandler:(id /* block */)arg6;
- (id)initWithClientConnection:(id)arg1;
- (bool)initiateBarrierIfNecessary:(id)arg1 delegate:(id)arg2;
- (bool)isConnected;
- (void)reconnect;
- (bool)reconnectAutomatically;
- (id /* block */)reconnectBlock;
- (void)sendDictionary:(id)arg1;
- (void)sendDictionary:(id)arg1 withReply:(id)arg2 handler:(id /* block */)arg3;
- (void)sendDictionarySync:(id)arg1;
- (id)sendDictionaryWithMessageReplySync:(id)arg1 error:(id*)arg2;
- (id)sendDictionaryWithReplySync:(id)arg1 error:(id*)arg2;
- (void)sendMessage:(id)arg1;
- (void)sendMessage:(id)arg1 withReply:(id)arg2 handler:(id /* block */)arg3;
- (void)sendMessageReporingProgress:(id)arg1 withReply:(id)arg2 handler:(id /* block */)arg3;
- (void)sendMessageSync:(id)arg1;
- (id)sendMessageWithReplySync:(id)arg1;
- (unsigned long long)serverType;
- (void)setReconnectAutomatically:(bool)arg1;
- (void)setReconnectBlock:(id /* block */)arg1;
- (void)setXpcConnection:(id)arg1;
- (id)xpcConnection;

@end
