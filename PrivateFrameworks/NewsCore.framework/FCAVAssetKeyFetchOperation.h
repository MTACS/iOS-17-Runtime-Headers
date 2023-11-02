
@interface FCAVAssetKeyFetchOperation : FCOperation {
    <FCAVAssetKeyCacheType> * _cache;
    id /* block */  _fetchCompletionHandler;
    AVPersistableContentKeyRequest * _keyRequest;
    NSURL * _keyURI;
    NSData * _resultCKCData;
    <FCAVAssetKeyServiceType> * _service;
}

- (void).cxx_destruct;
- (bool)canRetryWithError:(id)arg1 retryAfter:(id*)arg2;
- (unsigned long long)maxRetries;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (void)resetForRetry;

@end
