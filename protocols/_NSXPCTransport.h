
@protocol _NSXPCTransport <NSObject>

@required

- (void)activate;
- (int)auditSessionIdentifier;
- (struct { unsigned int x1[8]; })auditToken;
- (void)cancel;
- (unsigned int)effectiveGroupIdentifier;
- (unsigned int)effectiveUserIdentifier;
- (int)processIdentifier;
- (void)resume;
- (void)sendBarrierBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)sendMessage:(NSObject<OS_xpc_object> *)arg1;
- (void)sendMessageWithReply:(void *)arg1 onQueue:(void *)arg2 replyHandler:(void *)arg3; // needs 3 arg types, found 8: NSObject<OS_xpc_object> *, NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSObject<OS_xpc_object> *, void*
- (NSObject<OS_xpc_object> *)sendMessageWithReplySync:(NSObject<OS_xpc_object> *)arg1;
- (void)sendNotification:(NSObject<OS_xpc_object> *)arg1;
- (void)setErrorHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSObject<OS_xpc_object> *, void*
- (void)setMessageHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSObject<OS_xpc_object> *, NSObject<OS_xpc_object> *, void*
- (void)setTargetQueue:(NSObject<OS_dispatch_queue> *)arg1;
- (void)suspend;

@end
