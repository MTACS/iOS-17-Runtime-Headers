
@interface GCConfigXPCServiceClientConnection : GCIPCRemoteIncomingConnection

@property (nonatomic, retain) <GCConfigXPCServiceInterface> *server;

- (id)initWithConnection:(id)arg1;
- (id)server;
- (void)setServer:(id)arg1;

@end
