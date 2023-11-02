
@interface FPDActionOperationQueue : NSObject <FPCancellable> {
    bool  _cancelled;
    NSObject<OS_dispatch_semaphore> * _dequeueSema;
    NSObject<OS_dispatch_semaphore> * _enqueueSema;
    NSMutableArray * _fifo;
    bool  _finishedEnqueuing;
    unsigned long long  _maxLength;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (void)cancel;
- (id)dequeue;
- (void)dumpStateTo:(id)arg1;
- (void)enqueue:(id)arg1;
- (void)finishedEnqueuing;
- (id)initWithMoveInfo:(id)arg1;

@end
