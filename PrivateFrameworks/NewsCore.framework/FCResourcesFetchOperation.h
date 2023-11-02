
@interface FCResourcesFetchOperation : FCMultiStepFetchOperation {
    id /* block */  _archiveHandler;
    long long  _cacheLifetimeHint;
    <FCContentContext> * _context;
    bool  _downloadAssets;
    id /* block */  _interestTokenHandler;
    unsigned long long  _maxConcurrentFetchCount;
    id /* block */  _progressHandler;
    NSArray * _resourceIDs;
    NSArray * _resources;
}

@property (nonatomic, copy) id /* block */ archiveHandler;
@property (nonatomic) long long cacheLifetimeHint;
@property (nonatomic, copy) id /* block */ interestTokenHandler;
@property (nonatomic) unsigned long long maxConcurrentFetchCount;
@property (nonatomic, copy) id /* block */ progressHandler;

- (void).cxx_destruct;
- (id /* block */)archiveHandler;
- (long long)cacheLifetimeHint;
- (id)completeFetchOperation;
- (id)downloadAssetsWithCompletion:(id /* block */)arg1;
- (id)fetchResourcesWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)initWithContext:(id)arg1 resourceIDs:(id)arg2 downloadAssets:(bool)arg3;
- (id /* block */)interestTokenHandler;
- (unsigned long long)maxConcurrentFetchCount;
- (void)operationWillFinishWithError:(id)arg1;
- (id /* block */)progressHandler;
- (void)setArchiveHandler:(id /* block */)arg1;
- (void)setCacheLifetimeHint:(long long)arg1;
- (void)setInterestTokenHandler:(id /* block */)arg1;
- (void)setMaxConcurrentFetchCount:(unsigned long long)arg1;
- (void)setProgressHandler:(id /* block */)arg1;
- (bool)validateOperation;

@end
