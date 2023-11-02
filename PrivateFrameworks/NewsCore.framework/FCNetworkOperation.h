
@interface FCNetworkOperation : FCOperation

@property (nonatomic, readonly) double preferredTimeoutIntervalForRequest;

- (bool)canRetryWithError:(id)arg1 retryAfter:(id*)arg2;
- (unsigned long long)maxRetries;
- (double)preferredTimeoutIntervalForRequest;
- (bool)shouldStartThrottlingWithError:(id)arg1 retryAfter:(double*)arg2;

@end
