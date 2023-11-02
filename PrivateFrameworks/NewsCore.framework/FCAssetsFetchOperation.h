
@interface FCAssetsFetchOperation : FCFetchOperation {
    id /* block */  _archiveHandler;
    NSArray * _assetHandles;
    id /* block */  _interestTokenHandler;
    unsigned long long  _maxConcurrentFetchCount;
    id /* block */  _progressHandler;
    NSObject<OS_dispatch_semaphore> * _semaphore;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (nonatomic, copy) id /* block */ archiveHandler;
@property (nonatomic, copy) id /* block */ interestTokenHandler;
@property (nonatomic) unsigned long long maxConcurrentFetchCount;
@property (nonatomic, copy) id /* block */ progressHandler;

- (void).cxx_destruct;
- (id /* block */)archiveHandler;
- (id)initWithAssetHandle:(id)arg1;
- (id)initWithAssetHandles:(id)arg1;
- (id /* block */)interestTokenHandler;
- (unsigned long long)maxConcurrentFetchCount;
- (void)performOperation;
- (id /* block */)progressHandler;
- (void)setArchiveHandler:(id /* block */)arg1;
- (void)setInterestTokenHandler:(id /* block */)arg1;
- (void)setMaxConcurrentFetchCount:(unsigned long long)arg1;
- (void)setProgressHandler:(id /* block */)arg1;

@end
