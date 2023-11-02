
@interface SUCoreConnectClient : NSObject <SUCoreConnectClientProtocol> {
    NSObject<OS_dispatch_queue> * _clientCompletionQueue;
    NSObject<OS_dispatch_queue> * _clientConnectionStateAccessQueue;
    NSObject<OS_dispatch_queue> * _clientDelegateCallbackQueue;
    NSObject<OS_dispatch_queue> * _clientMessageQueue;
    NSObject<OS_dispatch_queue> * _clientReplyCompletionQueue;
    SUCoreLog * _logger;
    SUCoreConnectClientPolicy * _policy;
    NSXPCConnection * _serverConnection;
}

@property (nonatomic, readonly, retain) NSObject<OS_dispatch_queue> *clientCompletionQueue;
@property (nonatomic, readonly, retain) NSObject<OS_dispatch_queue> *clientConnectionStateAccessQueue;
@property (nonatomic, readonly, retain) NSObject<OS_dispatch_queue> *clientDelegateCallbackQueue;
@property (nonatomic, readonly, retain) NSObject<OS_dispatch_queue> *clientMessageQueue;
@property (nonatomic, readonly, retain) NSObject<OS_dispatch_queue> *clientReplyCompletionQueue;
@property (nonatomic, retain) SUCoreLog *logger;
@property (nonatomic, retain) SUCoreConnectClientPolicy *policy;
@property (nonatomic, retain) NSXPCConnection *serverConnection;

+ (id)_sharedClientLogger;

- (void).cxx_destruct;
- (void)_droppedConnection:(id)arg1;
- (void)_internalConnectToServerWithCompletion:(id /* block */)arg1;
- (void)_invalidateConnection:(id)arg1;
- (id)clientCompletionQueue;
- (id)clientConnectionStateAccessQueue;
- (id)clientDelegateCallbackQueue;
- (id)clientMessageQueue;
- (id)clientReplyCompletionQueue;
- (void)connectClientSendServerMessage:(id)arg1;
- (void)connectClientSendServerMessage:(id)arg1 proxyObject:(id)arg2 withReply:(id /* block */)arg3;
- (void)connectProtocolFromServerRequestClientID:(id /* block */)arg1;
- (void)connectProtocolFromServerSendClientMessage:(id)arg1;
- (void)connectProtocolFromServerSendClientMessage:(id)arg1 reply:(id /* block */)arg2;
- (void)connectToServerWithCompletion:(id /* block */)arg1;
- (void)dealloc;
- (void)forceCloseConnection;
- (id)initWithClientPolicy:(id)arg1;
- (id)logger;
- (id)policy;
- (id)serverConnection;
- (void)setLogger:(id)arg1;
- (void)setPolicy:(id)arg1;
- (void)setServerConnection:(id)arg1;

@end
