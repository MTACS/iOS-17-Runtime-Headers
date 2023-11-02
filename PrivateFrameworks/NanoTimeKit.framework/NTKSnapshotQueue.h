
@interface NTKSnapshotQueue : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
    bool  _queue_isProcessingQueue;
    NSMutableArray * _queue_requests;
    id /* block */  _requestHandler;
}

- (void).cxx_destruct;
- (void)_queue_processQueue;
- (id)_queue_pullHighestPriorityRequestFromQueue;
- (id)initWithRequestHandler:(id /* block */)arg1;
- (void)queueRequest:(id)arg1;

@end
