
@interface MRXPCConnection : NSObject {
    NSObject<OS_xpc_object> * _connection;
    NSMutableDictionary * _customXpcHandlers;
    NSObject<OS_dispatch_queue> * _defaultReplyQueue;
    id /* block */  _invalidationHandler;
    id /* block */  _messageHandler;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (nonatomic, readonly) NSObject<OS_xpc_object> *connection;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, copy) id /* block */ messageHandler;
@property (nonatomic, readonly) int pid;
@property (nonatomic, readonly) unsigned int uid;

- (void).cxx_destruct;
- (void)addCustomXPCHandler:(id /* block */)arg1 forKey:(unsigned long long)arg2;
- (id)connection;
- (void)dealloc;
- (id)initWithConnection:(id)arg1 queue:(id)arg2 defaultReplyQueue:(id)arg3;
- (id /* block */)invalidationHandler;
- (id /* block */)messageHandler;
- (int)pid;
- (void)removeCustomXPCHandler:(unsigned long long)arg1;
- (void)sendMessage:(id)arg1 queue:(id)arg2 reply:(id /* block */)arg3;
- (void)sendMessageWithType:(unsigned long long)arg1 queue:(id)arg2 reply:(id /* block */)arg3;
- (id)sendSyncMessage:(id)arg1 error:(id*)arg2;
- (id)sendSyncMessageWithType:(unsigned long long)arg1 error:(id*)arg2;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setMessageHandler:(id /* block */)arg1;
- (unsigned int)uid;

@end
