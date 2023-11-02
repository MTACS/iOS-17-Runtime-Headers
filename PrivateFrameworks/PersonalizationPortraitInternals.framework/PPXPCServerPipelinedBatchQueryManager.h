
@interface PPXPCServerPipelinedBatchQueryManager : NSObject {
    NSObject<OS_dispatch_semaphore> * _concurrentRequestSem;
    _Atomic bool  _isInterrupted;
    long long  _pipelineDepth;
    unsigned long long  _pipelinedCallTimeoutNsec;
    NSMutableDictionary * _queryReplyThrottleSemaphores;
}

- (void).cxx_destruct;
- (void)_unblockQueryReplyThrottleSemaphore:(id)arg1;
- (id)initWithPipelineDepth:(long long)arg1 pipelinedCallTimeoutNsec:(unsigned long long)arg2 maxConcurrentRequestsPerConnection:(unsigned long long)arg3;
- (void)runConcurrentlyWithRequestThrottle:(id /* block */)arg1;
- (void)runSynchronouslyWithRequestThrottle:(id /* block */)arg1;
- (void)sendBatchedResultForQueryWithName:(id)arg1 queryId:(unsigned long long)arg2 batchGenerator:(id /* block */)arg3 sendError:(id /* block */)arg4 sendBatch:(id /* block */)arg5;
- (void)unblockPendingQueries;
- (void)waitForBlockWithRequestThrottle:(id /* block */)arg1;

@end
