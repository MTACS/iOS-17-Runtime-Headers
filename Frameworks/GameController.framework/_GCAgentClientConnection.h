
@interface _GCAgentClientConnection : _GCIPCRemoteIncomingConnection

@property (nonatomic, retain) <_GCAgentServerInterface> *server;

- (id)initWithConnection:(id)arg1 fromProcess:(id)arg2;
- (id)server;
- (void)setServer:(id)arg1;

@end
