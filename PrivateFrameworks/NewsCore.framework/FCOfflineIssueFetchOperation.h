
@interface FCOfflineIssueFetchOperation : FCOperation <FCOfflineFetchOperationType> {
    <FCContentContext> * _context;
    <FCFlintHelper> * _flintHelper;
    NSString * _issueID;
    FCCachePolicy * _issueRecordCachePolicy;
    double  _progress;
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
- (bool)canRetryWithError:(id)arg1 retryAfter:(id*)arg2;
- (id /* block */)fetchCompletionHandler;
- (id)fetchCompletionQueue;
- (id)init;
- (id)initWithContext:(id)arg1 flintHelper:(id)arg2 issue:(id)arg3;
- (id)initWithContext:(id)arg1 flintHelper:(id)arg2 issueID:(id)arg3;
- (unsigned long long)maxRetries;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (id /* block */)progressHandler;
- (id)progressQueue;
- (void)resetForRetry;
- (void)setArchiveHandler:(id /* block */)arg1;
- (void)setArchiveQueue:(id)arg1;
- (void)setCachedOnly:(bool)arg1;
- (void)setFetchCompletionHandler:(id /* block */)arg1;
- (void)setFetchCompletionQueue:(id)arg1;
- (void)setProgressHandler:(id /* block */)arg1;
- (void)setProgressQueue:(id)arg1;
- (bool)validateOperation;

@end
