
@interface CoreODIEssentials.DIPHTTPSession : NSObject <NSURLSessionTaskDelegate> {
    void $__lazy_storage_$_anonymousURLSession;
    void $__lazy_storage_$_urlSession;
    void anonymousNSURLSessionConfiguration;
    void configuration;
    void logger;
    void nsurlSessionConfiguration;
    void retrier;
    void state;
}

@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)URLSession:(id)arg1 taskIsWaitingForConnectivity:(id)arg2;
- (id)description;
- (id)init;

@end
