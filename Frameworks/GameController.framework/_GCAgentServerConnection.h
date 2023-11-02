
@interface _GCAgentServerConnection : GCIPCRemoteOutgoingConnection

@property (nonatomic, retain) <_GCAgentClientInterface> *client;

- (id)client;
- (id)init;
- (id)initWithMachServiceName:(id)arg1;
- (void)setClient:(id)arg1;

@end
