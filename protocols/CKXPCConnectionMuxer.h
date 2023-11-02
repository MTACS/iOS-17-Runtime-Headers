
@protocol CKXPCConnectionMuxer

@required

- (void)getLogicalDeviceScopedClientProxyCreatorForTestDeviceReferenceProtocol:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: <CKTestDeviceReferenceProtocol> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <CKXPCLogicalDeviceScopedClient> *, void*
- (void)getProcessScopedClientProxyCreatorWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <CKXPCProcessScopedClient> *, void*

@end
