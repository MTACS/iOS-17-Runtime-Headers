
@protocol GTXPCConnection

@required

- (void)activateWithMessageHandler:(void *)arg1 andErrorHandler:(void *)arg2; // needs 2 arg types, found 12: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSObject<OS_xpc_object> *, void*, id /* block */, void*, void, id /* block */, NSObject<OS_xpc_object> *, void*
- (void)cancel;
- (NSObject<OS_xpc_object> *)connection;
- (void)deregisterDispatcher:(unsigned long long)arg1;
- (void)dispatchMessage:(NSObject<OS_xpc_object> *)arg1;
- (NSObject<OS_xpc_object> *)error;
- (unsigned long long)registerDispatcher:(id <GTXPCDispatcher>)arg1;
- (void)registerDispatcher:(id <GTXPCDispatcher>)arg1 forPort:(unsigned long long)arg2;
- (void)sendMessage:(NSObject<OS_xpc_object> *)arg1;
- (void)sendMessage:(void *)arg1 replyHandler:(void *)arg2; // needs 2 arg types, found 8: NSObject<OS_xpc_object> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSObject<OS_xpc_object> *, NSError *, void*
- (void)sendMessageAndWaitForDelivery:(NSObject<OS_xpc_object> *)arg1;
- (NSObject<OS_xpc_object> *)sendMessageWithReplySync:(NSObject<OS_xpc_object> *)arg1 error:(id*)arg2;
- (void)setError:(NSObject<OS_xpc_object> *)arg1;

@end
