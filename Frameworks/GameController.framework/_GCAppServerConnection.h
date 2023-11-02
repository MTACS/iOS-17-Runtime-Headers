
@interface _GCAppServerConnection : GCIPCRemoteOutgoingConnection

@property (nonatomic, retain) <_GCAppClientInterface> *client;

- (id)client;
- (id)init;
- (id)initWithMachServiceName:(id)arg1;
- (void)setClient:(id)arg1;

@end
