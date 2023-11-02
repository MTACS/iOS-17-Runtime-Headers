
@interface DownloadThroughputDelegate : ThroughputDelegate

- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (bool)checkLimits;
- (id)createTaskWithRequest:(id)arg1 session:(id)arg2;
- (unsigned long long)maxFlows;
- (unsigned long long)minFlows;
- (void)updateResultsWithByteCount;
- (void)updateResultsWithFlowCount;
- (void)updateResultsWithThroughput:(long long)arg1 confidence:(long long)arg2;

@end
