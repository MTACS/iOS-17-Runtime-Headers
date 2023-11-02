
@interface GCConfigXPCServiceConnection : GCIPCRemoteOutgoingConnection

@property (nonatomic, retain) <GCConfigXPCServiceClientInterface> *client;

- (id)client;
- (id)connectToService:(id)arg1 withClient:(id)arg2;
- (id)init;
- (void)setClient:(id)arg1;

@end
