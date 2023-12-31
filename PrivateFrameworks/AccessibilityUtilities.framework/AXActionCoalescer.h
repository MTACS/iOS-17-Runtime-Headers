
@interface AXActionCoalescer : NSObject {
    id /* block */  _block;
    bool  _coalescing;
    NSObject<OS_dispatch_queue> * _consistencyQueue;
    NSObject<OS_dispatch_queue> * _targetQueue;
}

+ (id)mainQueueCoalescerWithBlock:(id /* block */)arg1;

- (void).cxx_destruct;
- (id)initWithQueue:(id)arg1 block:(id /* block */)arg2;
- (void)performCoalescedAsynchronously;

@end
