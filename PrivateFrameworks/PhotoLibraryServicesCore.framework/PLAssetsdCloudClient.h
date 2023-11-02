
@interface PLAssetsdCloudClient : PLAssetsdBaseClient

- (void)cancelCPLDownloadImageDataWithVirtualTaskIdentifiers:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)cancelCPLDownloadWithContext:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)computeFingerPrintsOfAsset:(id)arg1 synchronously:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)downloadCloudPhotoLibraryAsset:(id)arg1 resourceType:(unsigned long long)arg2 highPriority:(bool)arg3 trackCPLDownload:(bool)arg4 downloadIsTransient:(bool)arg5 proposedTaskIdentifier:(id)arg6 completionHandler:(id /* block */)arg7;
- (void)requestCPLDownloadImageDataForAssets:(id)arg1 format:(unsigned long long)arg2 doneTokens:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)requestVideoPlaybackURLForCloudSharedAsset:(id)arg1 mediaAssetType:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;

@end
