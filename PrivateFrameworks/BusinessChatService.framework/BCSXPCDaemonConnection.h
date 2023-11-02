
@interface BCSXPCDaemonConnection : NSObject <BCSXPCDaemonConnectionProtocol> {
    NSXPCConnection * _connection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, retain) <BCSXPCDaemonProtocol> *remoteObjectProxy;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)remoteObjectProxy;
- (void)resume;

@end
