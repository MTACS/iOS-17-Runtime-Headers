
@protocol CKDXPCConnectionMuxer

@required

- (void)getContainerScopedDaemonProxyCreatorForSetupInfo:(void *)arg1 containerScopedClientProxy:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: CKContainerSetupInfo *, <CKXPCContainerScopedClient> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <CKXPCContainerScopedDaemon> *, NSError *, void*
- (void)getDaemonTestServerManagerProxyCreatorWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <CKXPCDaemonTestServerManager> *, void*
- (void)getLogicalDeviceScopedDaemonProxyCreatorForTestDeviceReferenceProtocol:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: <CKTestDeviceReferenceProtocol> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <CKXPCLogicalDeviceScopedDaemon> *, void*
- (void)getProcessScopedDaemonProxyCreatorWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <CKXPCProcessScopedDaemon> *, void*
- (void)noteClientProcessScopedMetadata:(CKProcessScopedMetadata *)arg1;

@end
