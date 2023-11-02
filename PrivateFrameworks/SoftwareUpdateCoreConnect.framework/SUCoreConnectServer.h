
@interface SUCoreConnectServer : NSObject <NSXPCListenerDelegate, SUCoreConnectServerProtocol> {
    SUCoreConnectServerPolicy * _connectionPolicy;
    NSObject<OS_dispatch_queue> * _connectionSendMessageQueue;
    NSMutableDictionary * _connections;
    NSObject<OS_dispatch_queue> * _connectionsAccessQueue;
    SUCoreLog * _logger;
    NSMutableSet * _observerConnections;
}

@property (nonatomic, readonly, retain) SUCoreConnectServerPolicy *connectionPolicy;
@property (nonatomic, readonly, retain) NSObject<OS_dispatch_queue> *connectionSendMessageQueue;
@property (nonatomic, readonly, retain) NSMutableDictionary *connections;
@property (nonatomic, readonly, retain) NSObject<OS_dispatch_queue> *connectionsAccessQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, retain) SUCoreLog *logger;
@property (nonatomic, readonly, retain) NSMutableSet *observerConnections;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_clientIDForConnection:(id)arg1;
- (id)_connectionsForClientID:(id)arg1;
- (id)_getAllObserverConnections;
- (void)_informObserversOfCompletionReplyWithMessage:(id)arg1 error:(id)arg2;
- (void)_removeConnection:(id)arg1;
- (void)_setConnection:(id)arg1 forClientID:(id)arg2;
- (void)connectProtocolFromClientSendServerMessage:(id)arg1;
- (void)connectProtocolFromClientSendServerMessage:(id)arg1 proxyObject:(id)arg2 withReply:(id /* block */)arg3;
- (void)connectServerSendClientMessage:(id)arg1;
- (id)connectionPolicy;
- (id)connectionSendMessageQueue;
- (id)connections;
- (id)connectionsAccessQueue;
- (id)description;
- (id)initWithServerPolicy:(id)arg1;
- (bool)isConnectionEntitled:(id)arg1;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)logger;
- (id)observerConnections;
- (void)setupListenerAndResumeConnection;

@end
