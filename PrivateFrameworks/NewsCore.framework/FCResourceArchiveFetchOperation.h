
@interface FCResourceArchiveFetchOperation : FCOperation {
    id /* block */  _archiveHandler;
    NSURL * _archiveURL;
    <FCContentContext> * _context;
    NSURLSessionDownloadTask * _downloadTask;
    id /* block */  _fetchCompletionHandler;
    id /* block */  _interestTokenHandler;
    unsigned long long  _maxConcurrentFetchCount;
    id /* block */  _progressHandler;
    NSArray * _resultResources;
}

@property (nonatomic, copy) id /* block */ archiveHandler;
@property (nonatomic, copy) id /* block */ fetchCompletionHandler;
@property (nonatomic, copy) id /* block */ interestTokenHandler;
@property (nonatomic) unsigned long long maxConcurrentFetchCount;
@property (nonatomic, copy) id /* block */ progressHandler;

- (void).cxx_destruct;
- (id /* block */)archiveHandler;
- (id /* block */)fetchCompletionHandler;
- (id)initWithArchiveURL:(id)arg1 context:(id)arg2;
- (id /* block */)interestTokenHandler;
- (unsigned long long)maxConcurrentFetchCount;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (id /* block */)progressHandler;
- (void)setArchiveHandler:(id /* block */)arg1;
- (void)setFetchCompletionHandler:(id /* block */)arg1;
- (void)setInterestTokenHandler:(id /* block */)arg1;
- (void)setMaxConcurrentFetchCount:(unsigned long long)arg1;
- (void)setProgressHandler:(id /* block */)arg1;
- (bool)validateOperation;

@end
