
@interface PLAssetsdResourceService : PLAssetsdResourceWriteOnlyService <PLAssetsdResourceServiceProtocol> {
    NSObject<OS_dispatch_queue> * _asyncImageDataQueue;
    PLAssetsdCPLResourceDownloader * _resourceDownloader;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_consolidateResource:(id)arg1 assetUUID:(id)arg2 bundleScope:(unsigned short)arg3 error:(id*)arg4;
- (id)_typeFromPathConstrainedToImageOrMovie:(id)arg1;
- (void)addAssetGroupWithName:(id)arg1 reply:(id /* block */)arg2;
- (void)addAssetWithURL:(id)arg1 toAlbum:(id)arg2 reply:(id /* block */)arg3;
- (void)asynchronousAdjustmentDataForAsset:(id)arg1 networkAccessAllowed:(bool)arg2 reply:(id /* block */)arg3;
- (id)consolidateAssets:(id)arg1 reply:(id /* block */)arg2;
- (void)downloadCloudSharedAsset:(id)arg1 wantedPlaceholderkind:(short)arg2 shouldPrioritize:(bool)arg3 shouldExtendTimer:(bool)arg4 reply:(id /* block */)arg5;
- (void)estimatedFileLengthOfVideo:(id)arg1 fallbackFilePath:(id)arg2 exportPreset:(id)arg3 exportProperties:(id)arg4 reply:(id /* block */)arg5;
- (void)fileDescriptorForPersistentURL:(id)arg1 withAdjustments:(bool)arg2 reply:(id /* block */)arg3;
- (void)filePathForPersistentURL:(id)arg1 withAdjustments:(bool)arg2 reply:(id /* block */)arg3;
- (void)getSandboxExtensionForFileSystemBookmark:(id)arg1 reply:(id /* block */)arg2;
- (void)getSandboxExtensionsForAssetWithUUID:(id)arg1 reply:(id /* block */)arg2;
- (void)imageDataForAssetWithObjectURI:(id)arg1 formatID:(unsigned short)arg2 allowPlaceholder:(bool)arg3 wantURLOnly:(bool)arg4 networkAccessAllowed:(bool)arg5 trackCPLDownload:(bool)arg6 reply:(id /* block */)arg7;
- (id)initWithLibraryServicesManager:(id)arg1 connectionAuthorization:(id)arg2 resourceDownloader:(id)arg3;
- (void)projectExtensionDataForProjectUuid:(id)arg1 reply:(id /* block */)arg2;
- (void)saveAssetWithDataAndPorts:(id)arg1 imageSurface:(id)arg2 previewImageSurface:(id)arg3 reply:(id /* block */)arg4;
- (void)translatePersistentURL:(id)arg1 withAdjustments:(bool)arg2 handler:(id /* block */)arg3;
- (void)updateInternalResourcePath:(id)arg1 objectURI:(id)arg2 sandboxExtension:(id)arg3 reply:(id /* block */)arg4;

@end
