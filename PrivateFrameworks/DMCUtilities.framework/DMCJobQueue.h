
@interface DMCJobQueue : NSObject {
    DMCHangDetectionQueue * _executionQueue;
    id /* block */  _executionQueueAbortCompletionBlock;
    NSObject<OS_dispatch_queue> * _jobQueue;
    unsigned int  _nextJobSequenceNumber;
    NSString * _queueID;
}

@property (nonatomic, retain) DMCHangDetectionQueue *executionQueue;
@property (nonatomic, copy) id /* block */ executionQueueAbortCompletionBlock;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *jobQueue;
@property unsigned int nextJobSequenceNumber;
@property (nonatomic, retain) NSString *queueID;

- (void).cxx_destruct;
- (void)dealloc;
- (id)executionQueue;
- (id /* block */)executionQueueAbortCompletionBlock;
- (void)fromFunction:(const char *)arg1 enqueueJob:(id /* block */)arg2;
- (id)init;
- (id)initWithExecutionQueue:(id)arg1;
- (void)jobDidFinishFromFunction:(const char *)arg1 jobBlockDescription:(id)arg2;
- (id)jobQueue;
- (unsigned int)nextJobSequenceNumber;
- (void)queueBlock:(id /* block */)arg1;
- (id)queueID;
- (void)setExecutionQueue:(id)arg1;
- (void)setExecutionQueueAbortCompletionBlock:(id /* block */)arg1;
- (void)setJobQueue:(id)arg1;
- (void)setNextJobSequenceNumber:(unsigned int)arg1;
- (void)setQueueID:(id)arg1;
- (void)waitForEnqueuedJobsToCompleteCompletionBlock:(id /* block */)arg1;

@end
