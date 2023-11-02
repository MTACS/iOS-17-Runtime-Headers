
@interface UploadThroughputDelegate : ThroughputDelegate

- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(id /* block */)arg3;
- (id)amendRequest:(id)arg1;
- (bool)checkLimits;
- (id)createTaskWithRequest:(id)arg1 session:(id)arg2;
- (unsigned long long)maxFlows;
- (unsigned long long)minFlows;
- (void)updateResultsWithByteCount;
- (void)updateResultsWithFlowCount;
- (void)updateResultsWithThroughput:(long long)arg1 confidence:(long long)arg2;

@end
