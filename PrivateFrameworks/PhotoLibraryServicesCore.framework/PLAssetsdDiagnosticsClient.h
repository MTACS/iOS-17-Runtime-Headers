
@interface PLAssetsdDiagnosticsClient : PLAssetsdBaseClient

- (bool)incompleteRestoreProcesses:(id*)arg1 error:(id*)arg2;
- (void)setPhotosXPCEndpoint:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setSharedMemoryForDeferredLogging:(id)arg1;

@end
