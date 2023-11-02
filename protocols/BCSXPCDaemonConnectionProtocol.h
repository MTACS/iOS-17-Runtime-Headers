
@protocol BCSXPCDaemonConnectionProtocol <NSObject>

@required

- (<BCSXPCDaemonProtocol> *)remoteObjectProxy;
- (void)resume;

@end
