
@interface LPMediaAssetFetcher : LPFetcher <NSURLSessionDataDelegate> {
    NSString * _MIMEType;
    NSURL * _URL;
    AVURLAsset * _asset;
    id /* block */  _completionHandler;
    bool  _hasAudio;
    bool  _loadingIsNonAppInitiated;
    NSMutableData * _receivedData;
    NSURLSession * _session;
    bool  _shouldDownloadIfPossible;
}

@property (nonatomic, retain) NSURL *URL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool shouldDownloadIfPossible;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)URL;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)_completedWithAudio:(id)arg1;
- (void)_completedWithVideo:(id)arg1;
- (void)_resolveVideo;
- (id)audioProperties;
- (void)cancel;
- (void)fetchWithConfiguration:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (void)setShouldDownloadIfPossible:(bool)arg1;
- (void)setURL:(id)arg1;
- (bool)shouldDownloadIfPossible;
- (void)stopLoading;
- (id)videoProperties;

@end
