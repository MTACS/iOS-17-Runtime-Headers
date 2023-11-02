
@interface CKVConcurrentQueue : CKVQueue {
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (id)dequeue;
- (void)enqueue:(id)arg1;
- (id)init;

@end
