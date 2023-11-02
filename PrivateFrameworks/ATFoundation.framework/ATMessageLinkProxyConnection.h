
@interface ATMessageLinkProxyConnection : NSObject <ATMessageLinkObserver, ATMessageLinkProxyConnection, ATMessageLinkRequestHandler, NSStreamDelegate> {
    NSXPCConnection * _connection;
    ATMessageLink * _messageLink;
}

@property (nonatomic, retain) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) ATMessageLink *messageLink;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addRequestHandler:(id)arg1 forDataClass:(id)arg2 completion:(id /* block */)arg3;
- (void)connectWithCompletion:(id /* block */)arg1;
- (id)connection;
- (id)initWithMessageLink:(id)arg1 connection:(id)arg2;
- (id)messageLink;
- (void)messageLink:(id)arg1 didReceiveRequest:(id)arg2;
- (void)messageLinkWasClosed:(id)arg1;
- (void)messageLinkWasInitialized:(id)arg1;
- (void)messageLinkWasOpened:(id)arg1;
- (void)removeRequestHandlerForDataClass:(id)arg1 completion:(id /* block */)arg2;
- (void)sendRequest:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)sendResponse:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)setConnection:(id)arg1;
- (void)setMessageLink:(id)arg1;
- (void)stop;

@end
