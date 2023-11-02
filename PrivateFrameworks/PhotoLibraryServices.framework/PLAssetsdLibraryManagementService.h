
@interface PLAssetsdLibraryManagementService : NSObject <PLAssetsdLibraryManagementServiceProtocol> {
    PLPhotoLibraryBundleController * _bundleController;
    PLAssetsdConnectionAuthorization * _connectionAuthorization;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)setPhotosXPCEndpoint:(id)arg1;

- (void).cxx_destruct;
- (void)_closePhotoLibraryAtURL:(id)arg1 delete:(bool)arg2 reply:(id /* block */)arg3;
- (bool)_deleteLibraryFromFilesystemAtURL:(id)arg1 error:(id*)arg2;
- (void)closeAndDeletePhotoLibraryAtURL:(id)arg1 reply:(id /* block */)arg2;
- (void)closePhotoLibraryAtURL:(id)arg1 reply:(id /* block */)arg2;
- (void)filesystemSizeForLibraryURL:(id)arg1 reply:(id /* block */)arg2;
- (void)getActivePhotoLibrariesWithReply:(id /* block */)arg1;
- (void)getPhotoLibraryURLsWithLibraryURL:(id)arg1 reply:(id /* block */)arg2;
- (void)getPhotosXPCEndpointWithReply:(id /* block */)arg1;
- (id)initWithConnectionAuthorization:(id)arg1 bundleController:(id)arg2;
- (void)resetSyndicationLibraryWithReply:(id /* block */)arg1;
- (void)setSystemPhotoLibraryURL:(id)arg1 sandboxExtension:(id)arg2 options:(unsigned short)arg3 reply:(id /* block */)arg4;

@end
