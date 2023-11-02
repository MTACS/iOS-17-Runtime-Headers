
@interface PLAssetsdDiagnosticsService : PLAbstractLibraryServicesManagerService <PLAssetsdDiagnosticsServiceProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)incompleteRestoreProcessesWithReply:(id /* block */)arg1;
- (void)initializeSharedMemoryForDeferredLogs:(id)arg1;
- (void)setPhotosXPCEndpoint:(id)arg1 withReply:(id /* block */)arg2;

@end
