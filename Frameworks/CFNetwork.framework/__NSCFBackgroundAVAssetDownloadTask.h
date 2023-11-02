
@interface __NSCFBackgroundAVAssetDownloadTask : __NSCFBackgroundSessionTask {
    unsigned long long  _AVAssetDownloadToken;
    NSURL * _URL;
    AVURLAsset * _URLAsset;
    NSData * _assetArtworkData;
    NSString * _assetTitle;
    NSURL * _destinationURL;
    bool  _didCleanupProgress;
    unsigned long long  _downloadToken;
    bool  _enableSPIDelegateCallbacks;
    NSArray * _loadedTimeRanges;
    NSDictionary * _options;
    NSProgress * _progress;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _progressLock;
    AVMediaSelection * _resolvedMediaSelection;
    NSURL * _temporaryDestinationURL;
}

@property unsigned long long AVAssetDownloadToken;
@property (copy) NSURL *URL;
@property (retain) AVURLAsset *URLAsset;
@property (copy) NSURL *destinationURL;
@property (copy) NSArray *loadedTimeRanges;
@property (copy) NSDictionary *options;

- (unsigned long long)AVAssetDownloadToken;
- (id)URL;
- (id)URLAsset;
- (void)_finishProgressReporting;
- (bool)_isAVAssetTask;
- (void)_onqueue_didFinishDownloadforMediaSelectionPropertyList:(id)arg1;
- (void)_onqueue_didFinishDownloadingToURL:(id)arg1;
- (void)_onqueue_didFinishWithError:(id)arg1;
- (void)_onqueue_didLoadTimeRange:(id)arg1 totalTimeRangesLoaded:(id)arg2 timeRangeExpectedToLoad:(id)arg3 forMediaSelectionPropertyList:(id)arg4;
- (void)_onqueue_didReceiveProgressUpdateWithTotalBytesWritten:(long long)arg1 totalBytesExpectedToWrite:(long long)arg2;
- (void)_onqueue_didResolveMediaSelectionPropertyList:(id)arg1;
- (void)_onqueue_willDownloadToURL:(id)arg1;
- (void)_onqueue_willDownloadVariants:(id)arg1;
- (id)currentRequest;
- (void)dealloc;
- (id)destinationURL;
- (id)initWithTaskGroup:(id)arg1 URLAsset:(id)arg2 URL:(id)arg3 destinationURL:(id)arg4 temporaryDestinationURL:(id)arg5 assetTitle:(id)arg6 assetArtworkData:(id)arg7 ident:(unsigned long long)arg8 enableSPIDelegateCallbacks:(bool)arg9;
- (id)initWithTaskInfo:(id)arg1 taskGroup:(id)arg2 ident:(unsigned long long)arg3;
- (bool)isKindOfClass:(Class)arg1;
- (id)loadedTimeRanges;
- (id)options;
- (id)originalRequest;
- (id)progress;
- (id)response;
- (void)setAVAssetDownloadToken:(unsigned long long)arg1;
- (void)setDestinationURL:(id)arg1;
- (void)setLoadedTimeRanges:(id)arg1;
- (void)setOptions:(id)arg1;
- (void)setURL:(id)arg1;
- (void)setURLAsset:(id)arg1;

@end
