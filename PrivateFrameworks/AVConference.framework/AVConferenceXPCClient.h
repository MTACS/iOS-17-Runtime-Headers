
@interface AVConferenceXPCClient : NSObject {
    NSObject<OS_xpc_object> * connection;
    bool  connectionPersists;
    NSObject<OS_dispatch_queue> * connectionQueue;
    NSMutableDictionary * registeredBlocks;
    NSObject<OS_dispatch_queue> * replyQueue;
}

@property (readonly) NSObject<OS_xpc_object> *connection;
@property bool connectionPersists;
@property (readonly) NSMutableDictionary *registeredBlocks;

+ (id)AVConferenceXPCClientSingleton;

- (void)closeConnectionToServer;
- (id)connection;
- (bool)connectionPersists;
- (id)copyConnection;
- (id)createConnectionToServer;
- (void)dealloc;
- (void)deregisterFromService:(char *)arg1;
- (id)init;
- (id)newNSDictionaryFromNSDictionary:(id)arg1;
- (id)newNSDictionaryFromNSError:(id)arg1;
- (id)newNSDictionaryFromXPCDictionary:(id)arg1;
- (id)newNSErrorFromNSDictionary:(id)arg1;
- (id)newServerDiedDictionary;
- (id)newTimeoutDictionary;
- (id)newXPCDictionaryFromNSDictionary:(id)arg1 error:(id*)arg2;
- (void)registerBlockForService:(char *)arg1 block:(id /* block */)arg2;
- (void)registerBlockForService:(char *)arg1 block:(id /* block */)arg2 queue:(id)arg3;
- (void)registerBlockForService:(char *)arg1 block:(id /* block */)arg2 queue:(id)arg3 eventLogLevel:(int)arg4;
- (id)registeredBlocks;
- (void)sendMessageAsync:(char *)arg1;
- (void)sendMessageAsync:(char *)arg1 arguments:(id)arg2;
- (void)sendMessageAsync:(char *)arg1 arguments:(id)arg2 reply:(id /* block */)arg3;
- (void)sendMessageAsync:(char *)arg1 arguments:(id)arg2 reply:(id /* block */)arg3 queue:(id)arg4;
- (void)sendMessageAsync:(char *)arg1 arguments:(id)arg2 xpcArguments:(id)arg3 reply:(id /* block */)arg4;
- (void)sendMessageAsync:(char *)arg1 arguments:(id)arg2 xpcArguments:(id)arg3 reply:(id /* block */)arg4 queue:(id)arg5;
- (void)sendMessageAsync:(char *)arg1 arguments:(id)arg2 xpcArguments:(id)arg3 reply:(id /* block */)arg4 queue:(id)arg5 replyLogLevel:(int)arg6;
- (id)sendMessageSync:(char *)arg1;
- (id)sendMessageSync:(char *)arg1 arguments:(id)arg2;
- (id)sendMessageSync:(char *)arg1 arguments:(id)arg2 xpcArguments:(id)arg3;
- (void)setConnectionPersists:(bool)arg1;

@end
