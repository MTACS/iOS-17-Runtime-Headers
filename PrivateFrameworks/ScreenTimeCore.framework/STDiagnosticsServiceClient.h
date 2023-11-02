
@interface STDiagnosticsServiceClient : NSObject {
    NSXPCConnection * _connection;
    id /* block */  _inboundMessageCallback;
    id /* block */  _outboundMessageCallback;
    <STDiagnosticsServiceProtocol> * _remoteObject;
}

@property (nonatomic, retain) NSXPCConnection *connection;
@property (nonatomic, copy) id /* block */ inboundMessageCallback;
@property (nonatomic, copy) id /* block */ outboundMessageCallback;
@property (nonatomic, retain) <STDiagnosticsServiceProtocol> *remoteObject;

- (void).cxx_destruct;
- (id)connection;
- (void)didReceiveInboundMessage:(id)arg1;
- (void)didReceiveOutboundMessage:(id)arg1;
- (id /* block */)inboundMessageCallback;
- (id)init;
- (id /* block */)outboundMessageCallback;
- (void)registerCallback:(id /* block */)arg1 forInboundMessagesFromIDSInterfaces:(long long)arg2;
- (void)registerCallback:(id /* block */)arg1 forOutboundMessagesFromIDSInterfaces:(long long)arg2;
- (id)remoteObject;
- (void)setConnection:(id)arg1;
- (void)setInboundMessageCallback:(id /* block */)arg1;
- (void)setOutboundMessageCallback:(id /* block */)arg1;
- (void)setRemoteObject:(id)arg1;

@end
