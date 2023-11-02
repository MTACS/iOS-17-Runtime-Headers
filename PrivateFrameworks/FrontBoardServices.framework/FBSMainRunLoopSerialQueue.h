
@interface FBSMainRunLoopSerialQueue : FBSSerialQueue {
    bool  _main_callingOut;
    NSArray * _modes;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableArray * _queue_blocks;
    struct __CFRunLoopSource { } * _source;
}

- (void).cxx_destruct;
- (void)assertBarrierOnQueue;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)performAfter:(double)arg1 withBlock:(id /* block */)arg2;
- (void)performAsync:(id /* block */)arg1;
- (void)performAsync:(id /* block */)arg1 withHandoff:(id)arg2;

@end
