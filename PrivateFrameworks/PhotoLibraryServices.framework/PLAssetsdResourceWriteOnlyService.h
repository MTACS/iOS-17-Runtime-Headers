
@interface PLAssetsdResourceWriteOnlyService : PLAbstractLibraryServicesManagerService <PLAssetsdResourceWriteOnlyServiceProtocol> {
    PLAssetsdConnectionAuthorization * _connectionAuthorization;
}

@property (nonatomic, readonly) PLAssetsdConnectionAuthorization *connectionAuthorization;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)connectionAuthorization;
- (id)initWithLibraryServicesManager:(id)arg1 connectionAuthorization:(id)arg2;
- (void)saveAssetWithDataAndPorts:(id)arg1 clientConnection:(id)arg2 imageSurface:(id)arg3 previewImageSurface:(id)arg4 reply:(id /* block */)arg5;
- (void)saveAssetWithDataAndPorts:(id)arg1 imageSurface:(id)arg2 previewImageSurface:(id)arg3 reply:(id /* block */)arg4;

@end
