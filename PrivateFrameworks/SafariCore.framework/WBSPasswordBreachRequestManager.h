
@interface WBSPasswordBreachRequestManager : NSObject {
    WBSPasswordBreachContext * _context;
    NSOperationQueue * _fetchOperationQueue;
    NSURLSession * _session;
}

- (void).cxx_destruct;
- (void)_buildRequestWithURL:(id)arg1 headers:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_fetchBucketAtURL:(id)arg1 withClientBlindedHash:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)fetchHighFrequencyBucketWithCompletionHandler:(id /* block */)arg1;
- (void)fetchLowFrequencyBucketsForBucketIdentifiersAndClientBlindedHashes:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithContext:(id)arg1;

@end
