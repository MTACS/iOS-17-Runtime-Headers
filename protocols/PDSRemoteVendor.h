
@protocol PDSRemoteVendor <NSObject>

@required

- (<PDSRemoteInternal> *)internalRemoteObjectProxyWithError:(id*)arg1;
- (<PDSRemote> *)remoteObjectProxyWithError:(id*)arg1;
- (<PDSRemoteInternal> *)synchronousInternalRemoteObjectProxyWithErrorHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (<PDSRemote> *)synchronousRemoteObjectProxyWithErrorHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (bool)validateConnectionWithError:(id*)arg1;

@end
