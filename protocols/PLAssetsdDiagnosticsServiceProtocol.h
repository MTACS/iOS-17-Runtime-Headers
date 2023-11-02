
@protocol PLAssetsdDiagnosticsServiceProtocol <NSObject>

@required

- (void)incompleteRestoreProcessesWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)initializeSharedMemoryForDeferredLogs:(PLXPCObject *)arg1;
- (void)setPhotosXPCEndpoint:(void *)arg1 withReply:(void *)arg2; // needs 2 arg types, found 8: NSXPCListenerEndpoint *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
