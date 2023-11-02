
@interface PLAssetsdCloudService : PLAbstractLibraryServicesManagerService <PLAssetsdCloudServiceProtocol> {
    PLLazyObject * _lazyResourceDownloader;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)asynchronousStartPreheatingCPLDownloadForAssets:(id)arg1 doneTokens:(id)arg2 format:(unsigned long long)arg3 reply:(id /* block */)arg4;
- (void)asynchronousStopPreheatingCPLDownloadForAssetsWithTaskIdentifiers:(id)arg1 reply:(id /* block */)arg2;
- (void)cancelCPLDownloadTaskWithIdentifier:(id)arg1 reply:(id /* block */)arg2;
- (void)computeFingerPrintsOfAssetWithObjectURI:(id)arg1 synchronously:(bool)arg2 reply:(id /* block */)arg3;
- (void)downloadCloudPhotoLibraryAssetWithObjectURI:(id)arg1 taskIdentifier:(id)arg2 resourceType:(unsigned long long)arg3 HighPriority:(bool)arg4 trackCPLDownload:(bool)arg5 downloadIsTransient:(bool)arg6 reply:(id /* block */)arg7;
- (id)initWithLibraryServicesManager:(id)arg1 lazyResourceDownloader:(id)arg2;
- (void)requestVideoPlaybackURLForCloudSharedAsset:(id)arg1 mediaAssetType:(unsigned long long)arg2 reply:(id /* block */)arg3;
- (id)resourceDownloader;

@end
