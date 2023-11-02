
@protocol PLAssetsdCloudServiceProtocol <NSObject>

@required

- (void)asynchronousStartPreheatingCPLDownloadForAssets:(void *)arg1 doneTokens:(void *)arg2 format:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 11: NSArray *, NSArray *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSArray *, NSError *, void*
- (void)asynchronousStopPreheatingCPLDownloadForAssetsWithTaskIdentifiers:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)cancelCPLDownloadTaskWithIdentifier:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 6: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)computeFingerPrintsOfAssetWithObjectURI:(void *)arg1 synchronously:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 10: NSURL *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSString *, NSError *, void*
- (void)downloadCloudPhotoLibraryAssetWithObjectURI:(void *)arg1 taskIdentifier:(void *)arg2 resourceType:(void *)arg3 HighPriority:(void *)arg4 trackCPLDownload:(void *)arg5 downloadIsTransient:(void *)arg6 reply:(void *)arg7; // needs 7 arg types, found 15: NSURL *, NSString *, unsigned long long, bool, bool, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSString *, NSString *, NSError *, void*
- (void)requestVideoPlaybackURLForCloudSharedAsset:(void *)arg1 mediaAssetType:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 10: NSURL *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSURL *, NSError *, void*

@end
