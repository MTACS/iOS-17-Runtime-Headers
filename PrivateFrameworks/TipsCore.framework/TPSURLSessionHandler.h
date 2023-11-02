
@interface TPSURLSessionHandler : NSObject <TPSURLSessionDelegate, TPSURLSessionManagerDelegate> {
    NSString * _certificateFilePath;
    <TPSURLSessionHandlerDelegate> * _delegate;
    NSIndexSet * _excludeCachingDataTypes;
    NSString * _passphrase;
    bool  _shouldIgnoreInMemoryCaching;
}

@property (nonatomic, retain) NSString *certificateFilePath;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <TPSURLSessionHandlerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSIndexSet *excludeCachingDataTypes;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *passphrase;
@property (nonatomic) bool shouldIgnoreInMemoryCaching;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)URLSessionManagerDidReceiveChallenge:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)URLSessionManagerSessionConfiguration:(id)arg1;
- (id)URLSessionManagerSessionOperationQueue:(id)arg1;
- (bool)URLSessionManagerShouldCoalesceRequest:(id)arg1;
- (id)cacheControllerForDataType:(long long)arg1;
- (id)certificateFilePath;
- (id)delegate;
- (id)excludeCachingDataTypes;
- (id)init;
- (id)passphrase;
- (id)processJSONFormattedDataForCDSError:(id)arg1;
- (bool)respectCachingForRequest:(id)arg1;
- (void)sessionTask:(id)arg1 didCompleteWithError:(id)arg2;
- (void)sessionTask:(id)arg1 didFinishDownloadingToURL:(id)arg2;
- (void)sessionTask:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)sessionTask:(id)arg1 didReceiveResponse:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)sessionTask:(id)arg1 willCacheResponse:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setCertificateFilePath:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExcludeCachingDataTypes:(id)arg1;
- (void)setPassphrase:(id)arg1;
- (void)setShouldIgnoreInMemoryCaching:(bool)arg1;
- (bool)shouldCacheToDiskForSessionTask:(id)arg1;
- (bool)shouldIgnoreInMemoryCaching;
- (void)storeCachedResponseData:(id)arg1 forSessionTask:(id)arg2;

@end
