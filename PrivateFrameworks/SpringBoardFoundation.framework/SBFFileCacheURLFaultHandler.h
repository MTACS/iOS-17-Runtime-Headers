
@interface SBFFileCacheURLFaultHandler : NSObject <SBFFileCacheFaultHandler> {
    NSArray * _retryIntervals;
    NSURLSession * _urlSession;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy) NSArray *retryIntervals;
@property (readonly) Class superclass;
@property (retain) NSURLSession *urlSession;

- (void).cxx_destruct;
- (void)attemptLoadFromURL:(id)arg1 session:(id)arg2 retryIntervalEnumerator:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)fileCache:(id)arg1 loadFileForIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)init;
- (void)performLoadFromURL:(id)arg1 session:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)retryIntervals;
- (void)setRetryIntervals:(id)arg1;
- (void)setUrlSession:(id)arg1;
- (id)urlSession;

@end