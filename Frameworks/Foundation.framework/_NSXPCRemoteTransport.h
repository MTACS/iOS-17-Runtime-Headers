
@interface _NSXPCRemoteTransport : NSObject <_NSXPCTransport> {
    OS_xpc_remote_connection * _connection;
    id /* block */  _errorHandler;
    id /* block */  _messageHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)activate;
- (int)auditSessionIdentifier;
- (struct { unsigned int x1[8]; })auditToken;
- (void)cancel;
- (void)dealloc;
- (unsigned int)effectiveGroupIdentifier;
- (unsigned int)effectiveUserIdentifier;
- (id)initWithConnection:(id)arg1;
- (id)initWithRemoteService:(id)arg1 name:(id)arg2 queue:(id)arg3 mode:(unsigned long long)arg4;
- (int)processIdentifier;
- (void)resume;
- (void)sendBarrierBlock:(id /* block */)arg1;
- (void)sendMessage:(id)arg1;
- (void)sendMessageWithReply:(id)arg1 onQueue:(id)arg2 replyHandler:(id /* block */)arg3;
- (id)sendMessageWithReplySync:(id)arg1;
- (void)sendNotification:(id)arg1;
- (void)setErrorHandler:(id /* block */)arg1;
- (void)setMessageHandler:(id /* block */)arg1;
- (void)setTargetQueue:(id)arg1;
- (void)suspend;

@end
