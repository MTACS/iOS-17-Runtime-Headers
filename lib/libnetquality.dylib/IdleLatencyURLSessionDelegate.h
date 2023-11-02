
@interface IdleLatencyURLSessionDelegate : LatencyURLSessionDelegate

- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3;
- (void)executeTaskWithRequest:(id)arg1 completionHandler:(id /* block */)arg2;

@end
