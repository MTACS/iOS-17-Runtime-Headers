
@interface FCAVAssetDownloadManager : NSObject <AVAssetDownloadDelegate> {
    NFLazy * _URLSession;
    FCThreadSafeMutableDictionary * _activeDownloadsByAssetID;
    <FCAVAssetCacheType> * _assetCache;
    <FCAVAssetKeyCacheType> * _keyCache;
    FCAsyncOnceOperation * _restoreBackgroundDownloadsOnce;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 assetDownloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (id)_restoreBackgroundDownloadsWithCompletionHandler:(id /* block */)arg1;
- (id)init;

@end
