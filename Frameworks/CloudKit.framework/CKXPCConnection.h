
@interface CKXPCConnection : NSObject <CKXPCConnectionMuxer> {
    bool  _hasValidConnection;
    NSXPCConnection * _xpcConnection;
}

@property (nonatomic, readonly) NSXPCConnection *connection;

+ (id)CKXPCClientToDaemonMuxerInterface;
+ (id)CKXPCDaemonToClientMuxerInterface;
+ (id)sharedXPCConnection;

- (void).cxx_destruct;
- (id)connection;
- (void)getContainerScopedDaemonProxyCreatorForContainerSetupInfo:(id)arg1 exportedProxy:(id)arg2 synchronous:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)getDaemonTestServerManagerProxyCreatorSynchronous:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)getLogicalDeviceScopedClientProxyCreatorForTestDeviceReferenceProtocol:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getLogicalDeviceScopedDaemonProxyCreatorForTestDeviceReferenceProtocol:(id)arg1 synchronous:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)getProcessScopedClientProxyCreatorWithCompletionHandler:(id /* block */)arg1;
- (void)getProcessScopedDaemonProxyCreatorSynchronous:(bool)arg1 completionHandler:(id /* block */)arg2;
- (id)initInternal;
- (void)resetConnection;

@end
