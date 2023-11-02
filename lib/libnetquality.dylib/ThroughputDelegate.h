
@interface ThroughputDelegate : NSObject <NSURLSessionDataDelegate> {
    long long  _byte_accumulator;
    id /* block */  _cancelCompletionHandler;
    bool  _canceled;
    id /* block */  _completionHandler;
    NSDate * _current;
    long long  _currentBytesTransferred;
    NSError * _error;
    NetworkQualityExecutions * _execution;
    int  _instanceId;
    NSDate * _lastUpdate;
    NetworkQualityConfiguration * _nqConfig;
    NSMutableArray * _probeSessions;
    NSOperationQueue * _queue;
    NSURLRequest * _request;
    NetworkQualityExecutionsResult * _results;
    ThroughputSaturationDetection * _saturation;
    id /* block */  _saturationHandler;
    bool  _saturation_reached;
    NSMutableArray * _sessions;
    NSDate * _start;
    NSMutableArray * _tasks;
    NSObject<OS_nw_endpoint> * _testEndpoint;
    NSString * _testName;
    NSMutableArray * _uploadStream;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)addNewThroughputMeasurement:(unsigned long long)arg1;
- (void)addTasks;
- (id)amendRequest:(id)arg1;
- (void)cancel;
- (void)cancelWithCompletionHandler:(id /* block */)arg1;
- (bool)checkLimits;
- (id)createTaskWithRequest:(id)arg1 session:(id)arg2;
- (void)dealloc;
- (int)executeTaskWithRequest:(id)arg1 saturationHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (id)getSessions;
- (id)initWithExecution:(id)arg1 testName:(id)arg2 withQueue:(id)arg3 testEndpoint:(id)arg4 withConfig:(id)arg5 resultsObject:(id)arg6;
- (id)lastUpdate;
- (unsigned long long)maxFlows;
- (unsigned long long)minFlows;
- (void)shareProgress;
- (void)updateResultsWithByteCount;
- (void)updateResultsWithFlowCount;
- (void)updateResultsWithThroughput:(long long)arg1 confidence:(long long)arg2;

@end
