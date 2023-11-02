
@interface WBSWellKnownURLResponseCodeReliabilityChecker : NSObject {
    id /* block */  _completion;
    NSOperationQueue * _fetchOperationQueue;
    NSURLSession * _session;
    NSURL * _url;
}

- (void).cxx_destruct;
- (void)cancel;
- (void)checkReliabilityWithCompletion:(id /* block */)arg1;
- (id)initWithURL:(id)arg1;

@end
