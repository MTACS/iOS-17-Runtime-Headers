
@interface BAAgentClientProxy : NSObject {
    NSXPCConnection * _connection;
    NSLock * _connectionGuard;
    <BADownloadManagerSyncProtocol> * _delegate;
    NSString * _identifier;
}

- (void).cxx_destruct;
- (void)dealloc;

@end
