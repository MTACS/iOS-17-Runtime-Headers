
@interface FCOfflineArticleFetchOperation : FCOperation <FCOfflineFetchOperationType> {
    NSString * _articleID;
    <FCContentContext> * _context;
    <FCFlintHelper> * _flintHelper;
    FCThreadSafeMutableArray * _resultInterestTokens;
    id /* block */  archiveHandler;
    NSObject<OS_dispatch_queue> * archiveQueue;
    bool  cachedOnly;
    id /* block */  fetchCompletionHandler;
    NSObject<OS_dispatch_queue> * fetchCompletionQueue;
    id /* block */  progressHandler;
    NSObject<OS_dispatch_queue> * progressQueue;
}

@property (nonatomic, copy) id /* block */ archiveHandler;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *archiveQueue;
@property (nonatomic) bool cachedOnly;
@property (nonatomic, copy) id /* block */ fetchCompletionHandler;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *fetchCompletionQueue;
@property (nonatomic, copy) id /* block */ progressHandler;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *progressQueue;

- (void).cxx_destruct;
- (id /* block */)archiveHandler;
- (id)archiveQueue;
- (bool)cachedOnly;
- (id /* block */)fetchCompletionHandler;
- (id)fetchCompletionQueue;
- (id)initWithContext:(id)arg1 flintHelper:(id)arg2 articleID:(id)arg3;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (id /* block */)progressHandler;
- (id)progressQueue;
- (void)setArchiveHandler:(id /* block */)arg1;
- (void)setArchiveQueue:(id)arg1;
- (void)setCachedOnly:(bool)arg1;
- (void)setFetchCompletionHandler:(id /* block */)arg1;
- (void)setFetchCompletionQueue:(id)arg1;
- (void)setProgressHandler:(id /* block */)arg1;
- (void)setProgressQueue:(id)arg1;
- (bool)validateOperation;

@end
