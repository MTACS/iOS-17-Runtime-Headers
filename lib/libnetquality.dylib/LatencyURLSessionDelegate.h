
@interface LatencyURLSessionDelegate : NSObject <NSURLSessionDataDelegate> {
    id /* block */  _cancelCompletionHandler;
    bool  _canceled;
    id /* block */  _completionHandler;
    NetworkQualityConfiguration * _config;
    NSError * _error;
    NetworkQualityExecutions * _execution;
    NSMutableArray * _metrics;
    unsigned long long  _parallel;
    NSOperationQueue * _queue;
    NSString * _reqrespKey;
    NSURLRequest * _request;
    NetworkQualityExecutionsResult * _results;
    id /* block */  _saturationHandler;
    NSString * _selfKey;
    NSMutableArray * _sessions;
    NSMutableArray * _tasks;
    NSString * _tcpKey;
    NSObject<OS_nw_endpoint> * _testEndpoint;
    NSString * _testName;
    NSString * _tlsKey;
    NSMutableArray * _workingMetrics;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)cancel;
- (void)cancelWithCompletionHandler:(id /* block */)arg1;
- (void)dealloc;
- (bool)didFinishCollectingMetrics:(id)arg1 task:(id)arg2;
- (void)executeTaskWithRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithConfiguration:(id)arg1 testName:(id)arg2 queue:(id)arg3 testEndpoint:(id)arg4 resultsObject:(id)arg5 resultsDelegate:(id)arg6 tcpKey:(id)arg7 tlsKey:(id)arg8 reqrespKey:(id)arg9 selfKey:(id)arg10;
- (void)shareProgress;
- (void)waitForSaturation:(id /* block */)arg1;

@end
