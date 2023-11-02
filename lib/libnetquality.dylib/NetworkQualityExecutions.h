
@interface NetworkQualityExecutions : NSObject <NSURLSessionDelegate> {
    id /* block */  _completionHandler;
    NSURLSession * _configSession;
    <NetworkQualityExecutionsDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _executionsQueue;
    NSDate * _lastProgressUpdate;
    NSOperationQueue * _operationQueue;
    NetworkQualityExecutionsResult * _progressResults;
    int  _stage;
    NSDate * _start;
    NSDate * _timeout;
    bool  cancelled;
    NetworkQualityConfiguration * config;
    ThroughputDelegate * dlDelegate;
    LatencyURLSessionDelegate * latencyDelegate;
    NetworkQualityRemoteConfiguration * remoteConfig;
    struct test_context { 
        struct test {} *test; 
        struct execution {} *execution; 
        bool fast; 
        NetworkQualityRemoteConfiguration *config; 
    }  tp_dl_multi;
    struct test_context { 
        struct test {} *test; 
        struct execution {} *execution; 
        bool fast; 
        NetworkQualityRemoteConfiguration *config; 
    }  tp_ul_multi;
    ThroughputDelegate * ulDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_cancelWithOptionalError:(id)arg1;
- (void)cancel;
- (void)captureError:(id)arg1;
- (id)createDefaultNSURLSessionConfiguration;
- (id)createDefaultRequestwithURL:(id)arg1;
- (bool)currentStageIs:(int)arg1;
- (long long)currentThroughput;
- (void)drain;
- (void)execDLWithCompletionHandler:(id /* block */)arg1;
- (void)execParallelWithCompletionHandler:(id /* block */)arg1;
- (void)execULWithCompletionHandler:(id /* block */)arg1;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithConfiguration:(id)arg1 delegate:(id)arg2;
- (bool)nextStageIs:(int)arg1;
- (void)reallyExecuteDL;
- (void)reallyExecuteParallel;
- (void)reallyExecuteUL;
- (void)reportingCompletionHandler:(id)arg1;
- (void)run;
- (void)runWithCompletionHandler:(id /* block */)arg1;
- (void)setTimeout;
- (void)shareProgress;

@end
