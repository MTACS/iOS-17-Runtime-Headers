
@interface NetworkQualityAssessment : NSObject <NetworkQualityExecutionsDelegate> {
    NetworkQualityConfiguration * _config;
    <NetworkQualityDelegate> * _delegate;
    NSOperationQueue * _delegateQueue;
    NetworkQualityExecutions * _execution;
    NetworkQualityResult * _progressResults;
    long long  _resultsIndex;
    bool  _testRunning;
}

- (void).cxx_destruct;
- (void)cancel;
- (void)finalizeResults:(id)arg1 withError:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithConfiguration:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;
- (void)progress:(id)arg1;
- (void)runWithCompletionHandler:(id /* block */)arg1;

@end
