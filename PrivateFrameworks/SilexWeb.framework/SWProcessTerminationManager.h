
@interface SWProcessTerminationManager : NSObject <SWProcessTerminationManager> {
    <SWErrorReporting> * _errorReporter;
    NSMutableArray * _onRetryBlocks;
    <SWProcessTerminationPolicyDecider> * _throttler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <SWErrorReporting> *errorReporter;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableArray *onRetryBlocks;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <SWProcessTerminationPolicyDecider> *throttler;

- (void).cxx_destruct;
- (id)errorReporter;
- (id)initWithTerminationThrottler:(id)arg1 errorReporter:(id)arg2;
- (void)onRetry:(id /* block */)arg1;
- (id)onRetryBlocks;
- (id)throttler;
- (void)webContentProcessTerminated;

@end
