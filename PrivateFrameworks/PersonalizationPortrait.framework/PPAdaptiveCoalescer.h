
@interface PPAdaptiveCoalescer : NSObject {
    _PASLock * _lock;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (void)coalesceRequestKey:(id)arg1 handler:(id)arg2 executeRequestAndInvokeHandlersBlock:(id /* block */)arg3;
- (void)coalesceRequestKey:(id)arg1 handler:(id)arg2 executeRequestAndInvokeHandlersBlock:(id /* block */)arg3 nowDate:(id)arg4;
- (void)garbageCollectPendingKeysForNowDate:(id)arg1;
- (id)init;

@end
