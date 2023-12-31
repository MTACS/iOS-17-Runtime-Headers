
@interface OperationQueueInvocationTrampoline : InvocationTrampoline {
    long long  _priority;
    NSOperationQueue * _queue;
}

- (void)dealloc;
- (void)forwardInvocation:(id)arg1;
- (id)initWithTarget:(id)arg1 operationQueue:(id)arg2 priority:(long long)arg3;

@end
