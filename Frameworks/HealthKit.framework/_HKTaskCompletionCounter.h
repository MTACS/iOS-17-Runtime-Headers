
@interface _HKTaskCompletionCounter : NSObject {
    id /* block */  _completion;
    NSObject<OS_dispatch_queue> * _queue;
    long long  _target;
}

+ (id)counterWithTargetCount:(long long)arg1 queue:(id)arg2 completion:(id /* block */)arg3;

- (void).cxx_destruct;
- (void)_invalidate;
- (void)allTasksEnqueued;
- (void)decrementCounter;
- (void)incrementCounter;

@end
